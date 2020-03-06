#ifdef CORE_WORLD_C
#error "world.c included more than once"
#endif
#define CORE_WORLD_C

static void init_world(World *world, uint32_t hash)
{
    array_init2(world->bags,    32);
    array_init2(world->items,   1024);
    array_init2(world->parties, 8);
    array_init2(world->guilds,  32);
    array_init2(world->quests,  32);
    array_init2(world->agents,  64);
    array_init2(world->players, 32);
    array_init2(world->effects, 32);

    // @Enhancement:
    // This would break if we had more than 8 skillbars.
    // We use pointers to element in a array of Skillbar.
    array_init(world->skillbars, 8);

    world->hash = hash;
}

static void reset_world(World *world, ObjectManager *mgr)
{
    Bag      *bag;
    Item    **item;
    Agent   **agent;
    Player  **player;

    array_foreach(item, world->items)
        game_object_free(mgr, &(*item)->object);

    array_foreach(agent, world->agents)
        game_object_free(mgr, &(*agent)->object);

    array_foreach(player, world->players)
        game_object_free(mgr, &(*player)->object);

    array_foreach(bag, world->bags)
        array_reset(bag->items);

    array_reset(world->bags);
    array_reset(world->items);
    array_reset(world->guilds);
    array_reset(world->quests);
    array_reset(world->agents);
    array_reset(world->parties);
    array_reset(world->players);
    array_reset(world->effects);

    world->hash = 0;
}

void world_update(World *world, msec_t diff)
{
    float diff_sec = diff / 1000.f;
    
    Effect *effect;
    ArrayEffect *effects = &world->effects;
    array_foreach(effect, *effects) {
        if (effect->remaining == 0.f)
            continue;
        effect->remaining -= diff_sec;
        if (effect->remaining < 0.f)
            effect->remaining = 0.f;
    }

    update_agents_position(&world->agents, diff);
}
