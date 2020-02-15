#ifdef CORE_PACKETS_C
#error "packets.c included more than once"
#endif
#define CORE_PACKETS_C

MsgField AUTH_CLIENT_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0001[3] = {
    {TYPE_MSG_HEADER, 1},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
};

MsgField AUTH_CLIENT_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0003[5] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_BLOB, 20},
    {TYPE_STRING_16, 26},
};

MsgField AUTH_CLIENT_0004[7] = {
    {TYPE_MSG_HEADER, 4},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 20},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0005[6] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 20},
    {TYPE_BLOB, 20},
    {TYPE_STRING_16, 64},
};

MsgField AUTH_CLIENT_0006[3] = {
    {TYPE_MSG_HEADER, 6},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0007[3] = {
    {TYPE_MSG_HEADER, 7},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0008[3] = {
    {TYPE_MSG_HEADER, 8},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0009[4] = {
    {TYPE_MSG_HEADER, 9},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_ARRAY_8, 64},
};

MsgField AUTH_CLIENT_0010[3] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0011[5] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0012[4] = {
    {TYPE_MSG_HEADER, 12},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0013[2] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0014[2] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0015[3] = {
    {TYPE_MSG_HEADER, 15},
    {TYPE_ARRAY_8, 92},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0016[2] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0017[2] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_CLIENT_0018[8] = {
    {TYPE_MSG_HEADER, 18},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 20},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 104},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0019[1] = {
    {TYPE_MSG_HEADER, 19},
};

MsgField AUTH_CLIENT_0020[6] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_CLIENT_0021[2] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0022[2] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0023[2] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0024[3] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
};

MsgField AUTH_CLIENT_0025[5] = {
    {TYPE_MSG_HEADER, 25},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 20},
    {TYPE_BLOB, 20},
};

MsgField AUTH_CLIENT_0026[5] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0027[4] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0028[3] = {
    {TYPE_MSG_HEADER, 28},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 26},
};

MsgField AUTH_CLIENT_0029[3] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0030[4] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 26},
};

MsgField AUTH_CLIENT_0031[23] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 16},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 64},
};

MsgField AUTH_CLIENT_0032[3] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 512},
};

MsgField AUTH_CLIENT_0033[3] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0034[2] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0035[2] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0036[4] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 16},
};

MsgField AUTH_CLIENT_0037[7] = {
    {TYPE_MSG_HEADER, 37},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0038[2] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_BYTE, 0},
};

MsgField AUTH_CLIENT_0039[2] = {
    {TYPE_MSG_HEADER, 39},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0040[9] = {
    {TYPE_MSG_HEADER, 40},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
};

MsgField AUTH_CLIENT_0041[7] = {
    {TYPE_MSG_HEADER, 41},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0042[4] = {
    {TYPE_MSG_HEADER, 42},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0043[4] = {
    {TYPE_MSG_HEADER, 43},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 128},
    {TYPE_ARRAY_32, 128},
};

MsgField AUTH_CLIENT_0044[23] = {
    {TYPE_MSG_HEADER, 44},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 10},
    {TYPE_STRING_16, 6},
    {TYPE_ARRAY_32, 128},
    {TYPE_ARRAY_32, 128},
};

MsgField AUTH_CLIENT_0045[2] = {
    {TYPE_MSG_HEADER, 45},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0046[1] = {
    {TYPE_MSG_HEADER, 46},
};

MsgField AUTH_CLIENT_0047[1] = {
    {TYPE_MSG_HEADER, 47},
};

MsgField AUTH_CLIENT_0048[2] = {
    {TYPE_MSG_HEADER, 48},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0049[2] = {
    {TYPE_MSG_HEADER, 49},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0050[3] = {
    {TYPE_MSG_HEADER, 50},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 10},
};

MsgField AUTH_CLIENT_0051[6] = {
    {TYPE_MSG_HEADER, 51},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 18},
};

MsgField AUTH_CLIENT_0052[4] = {
    {TYPE_MSG_HEADER, 52},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0053[2] = {
    {TYPE_MSG_HEADER, 53},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0054[23] = {
    {TYPE_MSG_HEADER, 54},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 256},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 10},
    {TYPE_ARRAY_32, 128},
    {TYPE_ARRAY_32, 128},
};

MsgField AUTH_CLIENT_0055[4] = {
    {TYPE_MSG_HEADER, 55},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0056[6] = {
    {TYPE_MSG_HEADER, 56},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 0006B650
MsgField AUTH_SERVER_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CFF0
MsgField AUTH_SERVER_0001[5] = {
    {TYPE_MSG_HEADER, 1},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CB70
MsgField AUTH_SERVER_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008ABB0
MsgField AUTH_SERVER_0003[3] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008D200
MsgField AUTH_SERVER_0004[3] = {
    {TYPE_MSG_HEADER, 4},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 2048},
};

// Handler Rva: 0008C9C0
MsgField AUTH_SERVER_0005[9] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
};

// Handler Rva: 0008C980
MsgField AUTH_SERVER_0006[7] = {
    {TYPE_MSG_HEADER, 6},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CBC0
MsgField AUTH_SERVER_0007[6] = {
    {TYPE_MSG_HEADER, 7},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_ARRAY_8, 64},
};

// Handler Rva: 0008CCB0
MsgField AUTH_SERVER_0008[5] = {
    {TYPE_MSG_HEADER, 8},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 24},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CFC0
MsgField AUTH_SERVER_0009[6] = {
    {TYPE_MSG_HEADER, 9},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 24},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CBF0
MsgField AUTH_SERVER_0010[5] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 0008CC50
MsgField AUTH_SERVER_0011[5] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 0008CFA0
MsgField AUTH_SERVER_0012[4] = {
    {TYPE_MSG_HEADER, 12},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 256},
};

// Handler Rva: 0008AC40
MsgField AUTH_SERVER_0013[5] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 256},
};

// Handler Rva: 0008CB40
MsgField AUTH_SERVER_0014[4] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 32},
};

// Handler Rva: 00000000
MsgField AUTH_SERVER_0015[1] = {
    {TYPE_MSG_HEADER, 15},
};

// Handler Rva: 0008CD20
MsgField AUTH_SERVER_0016[7] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 256},
};

// Handler Rva: 0008CA40
MsgField AUTH_SERVER_0017[12] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 200},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CD50
MsgField AUTH_SERVER_0018[7] = {
    {TYPE_MSG_HEADER, 18},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 256},
};

// Handler Rva: 0008CD00
MsgField AUTH_SERVER_0019[2] = {
    {TYPE_MSG_HEADER, 19},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CA20
MsgField AUTH_SERVER_0020[3] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008C950
MsgField AUTH_SERVER_0021[7] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008CA00
MsgField AUTH_SERVER_0022[3] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 2048},
};

// Handler Rva: 0008CD80
MsgField AUTH_SERVER_0023[2] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_ARRAY_8, 4096},
};

// Handler Rva: 0008CB10
MsgField AUTH_SERVER_0024[5] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_ARRAY_8, 200},
};

// Handler Rva: 00000000
MsgField AUTH_SERVER_0025[1] = {
    {TYPE_MSG_HEADER, 25},
};

// Handler Rva: 0008D0C0
MsgField AUTH_SERVER_0026[5] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_DWORD, 0},
    {TYPE_NESTED_STRUCT, 11},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 0008CB90
MsgField AUTH_SERVER_0027[5] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008D1E0
MsgField AUTH_SERVER_0028[3] = {
    {TYPE_MSG_HEADER, 28},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008D0E0
MsgField AUTH_SERVER_0029[4] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008D1B0
MsgField AUTH_SERVER_0030[10] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008D130
MsgField AUTH_SERVER_0031[4] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_32, 16},
};

// Handler Rva: 0008CC20
MsgField AUTH_SERVER_0032[6] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 0008CC80
MsgField AUTH_SERVER_0033[6] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 0008CCE0
MsgField AUTH_SERVER_0034[3] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 12},
};

// Handler Rva: 0008D100
MsgField AUTH_SERVER_0035[7] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 16},
};

// Handler Rva: 0008D160
MsgField AUTH_SERVER_0036[7] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 16},
};

// Handler Rva: 00000000
MsgField AUTH_SERVER_0037[1] = {
    {TYPE_MSG_HEADER, 37},
};

// Handler Rva: 0008D190
MsgField AUTH_SERVER_0038[3] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0001[1] = {
    {TYPE_MSG_HEADER, 1},
};

MsgField GAME_CLIENT_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0003[2] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0004[1] = {
    {TYPE_MSG_HEADER, 4},
};

MsgField GAME_CLIENT_0005[3] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0006[1] = {
    {TYPE_MSG_HEADER, 6},
};

MsgField GAME_CLIENT_0007[1] = {
    {TYPE_MSG_HEADER, 7},
};

MsgField GAME_CLIENT_0008[1] = {
    {TYPE_MSG_HEADER, 8},
};

MsgField GAME_CLIENT_0009[1] = {
    {TYPE_MSG_HEADER, 9},
};

MsgField GAME_CLIENT_0010[1] = {
    {TYPE_MSG_HEADER, 10},
};

MsgField GAME_CLIENT_0011[2] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0012[1] = {
    {TYPE_MSG_HEADER, 12},
};

MsgField GAME_CLIENT_0013[1] = {
    {TYPE_MSG_HEADER, 13},
};

MsgField GAME_CLIENT_0014[4] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0015[1] = {
    {TYPE_MSG_HEADER, 15},
};

MsgField GAME_CLIENT_0016[4] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0017[4] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0018[2] = {
    {TYPE_MSG_HEADER, 18},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0019[2] = {
    {TYPE_MSG_HEADER, 19},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0020[1] = {
    {TYPE_MSG_HEADER, 20},
};

MsgField GAME_CLIENT_0021[1] = {
    {TYPE_MSG_HEADER, 21},
};

MsgField GAME_CLIENT_0022[3] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0023[3] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0024[3] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0025[2] = {
    {TYPE_MSG_HEADER, 25},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0026[2] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0027[3] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0028[1] = {
    {TYPE_MSG_HEADER, 28},
};

MsgField GAME_CLIENT_0029[4] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_AGENT_ID, 0},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0030[3] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0031[5] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0032[4] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0033[2] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0034[2] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0035[2] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0036[3] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0037[3] = {
    {TYPE_MSG_HEADER, 37},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0038[3] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_BYTE, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0039[1] = {
    {TYPE_MSG_HEADER, 39},
};

MsgField GAME_CLIENT_0040[1] = {
    {TYPE_MSG_HEADER, 40},
};

MsgField GAME_CLIENT_0041[1] = {
    {TYPE_MSG_HEADER, 41},
};

MsgField GAME_CLIENT_0042[1] = {
    {TYPE_MSG_HEADER, 42},
};

MsgField GAME_CLIENT_0043[3] = {
    {TYPE_MSG_HEADER, 43},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0044[4] = {
    {TYPE_MSG_HEADER, 44},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0045[3] = {
    {TYPE_MSG_HEADER, 45},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0046[5] = {
    {TYPE_MSG_HEADER, 46},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0047[1] = {
    {TYPE_MSG_HEADER, 47},
};

MsgField GAME_CLIENT_0048[2] = {
    {TYPE_MSG_HEADER, 48},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0049[2] = {
    {TYPE_MSG_HEADER, 49},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0050[3] = {
    {TYPE_MSG_HEADER, 50},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0051[3] = {
    {TYPE_MSG_HEADER, 51},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0052[1] = {
    {TYPE_MSG_HEADER, 52},
};

MsgField GAME_CLIENT_0053[1] = {
    {TYPE_MSG_HEADER, 53},
};

MsgField GAME_CLIENT_0054[2] = {
    {TYPE_MSG_HEADER, 54},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0055[2] = {
    {TYPE_MSG_HEADER, 55},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0056[3] = {
    {TYPE_MSG_HEADER, 56},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0057[2] = {
    {TYPE_MSG_HEADER, 57},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0058[2] = {
    {TYPE_MSG_HEADER, 58},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0059[4] = {
    {TYPE_MSG_HEADER, 59},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0060[4] = {
    {TYPE_MSG_HEADER, 60},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0061[4] = {
    {TYPE_MSG_HEADER, 61},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
};

MsgField GAME_CLIENT_0062[3] = {
    {TYPE_MSG_HEADER, 62},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0063[9] = {
    {TYPE_MSG_HEADER, 63},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0064[3] = {
    {TYPE_MSG_HEADER, 64},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0065[3] = {
    {TYPE_MSG_HEADER, 65},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0066[2] = {
    {TYPE_MSG_HEADER, 66},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0067[2] = {
    {TYPE_MSG_HEADER, 67},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0068[5] = {
    {TYPE_MSG_HEADER, 68},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0069[3] = {
    {TYPE_MSG_HEADER, 69},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0070[3] = {
    {TYPE_MSG_HEADER, 70},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0071[3] = {
    {TYPE_MSG_HEADER, 71},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0072[3] = {
    {TYPE_MSG_HEADER, 72},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0073[2] = {
    {TYPE_MSG_HEADER, 73},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0074[2] = {
    {TYPE_MSG_HEADER, 74},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0075[2] = {
    {TYPE_MSG_HEADER, 75},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0076[2] = {
    {TYPE_MSG_HEADER, 76},
    {TYPE_ARRAY_8, 256},
};

MsgField GAME_CLIENT_0077[5] = {
    {TYPE_MSG_HEADER, 77},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0078[3] = {
    {TYPE_MSG_HEADER, 78},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0079[3] = {
    {TYPE_MSG_HEADER, 79},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0080[2] = {
    {TYPE_MSG_HEADER, 80},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0081[6] = {
    {TYPE_MSG_HEADER, 81},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0082[2] = {
    {TYPE_MSG_HEADER, 82},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0083[7] = {
    {TYPE_MSG_HEADER, 83},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0084[8] = {
    {TYPE_MSG_HEADER, 84},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_8, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_8, 16},
};

MsgField GAME_CLIENT_0085[3] = {
    {TYPE_MSG_HEADER, 85},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_CLIENT_0086[4] = {
    {TYPE_MSG_HEADER, 86},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0087[5] = {
    {TYPE_MSG_HEADER, 87},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0088[3] = {
    {TYPE_MSG_HEADER, 88},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0089[3] = {
    {TYPE_MSG_HEADER, 89},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0090[2] = {
    {TYPE_MSG_HEADER, 90},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0091[8] = {
    {TYPE_MSG_HEADER, 91},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0092[2] = {
    {TYPE_MSG_HEADER, 92},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0093[3] = {
    {TYPE_MSG_HEADER, 93},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0094[3] = {
    {TYPE_MSG_HEADER, 94},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0095[2] = {
    {TYPE_MSG_HEADER, 95},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0096[1] = {
    {TYPE_MSG_HEADER, 96},
};

MsgField GAME_CLIENT_0097[1] = {
    {TYPE_MSG_HEADER, 97},
};

MsgField GAME_CLIENT_0098[2] = {
    {TYPE_MSG_HEADER, 98},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0099[5] = {
    {TYPE_MSG_HEADER, 99},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0100[3] = {
    {TYPE_MSG_HEADER, 100},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 8},
};

MsgField GAME_CLIENT_0101[6] = {
    {TYPE_MSG_HEADER, 101},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0102[5] = {
    {TYPE_MSG_HEADER, 102},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0103[3] = {
    {TYPE_MSG_HEADER, 103},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0104[2] = {
    {TYPE_MSG_HEADER, 104},
    {TYPE_STRING_16, 32},
};

MsgField GAME_CLIENT_0105[3] = {
    {TYPE_MSG_HEADER, 105},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0106[1] = {
    {TYPE_MSG_HEADER, 106},
};

MsgField GAME_CLIENT_0107[3] = {
    {TYPE_MSG_HEADER, 107},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 138},
};

MsgField GAME_CLIENT_0108[2] = {
    {TYPE_MSG_HEADER, 108},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0109[4] = {
    {TYPE_MSG_HEADER, 109},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0110[5] = {
    {TYPE_MSG_HEADER, 110},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0111[2] = {
    {TYPE_MSG_HEADER, 111},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0112[2] = {
    {TYPE_MSG_HEADER, 112},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0113[3] = {
    {TYPE_MSG_HEADER, 113},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0114[3] = {
    {TYPE_MSG_HEADER, 114},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0115[3] = {
    {TYPE_MSG_HEADER, 115},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0116[3] = {
    {TYPE_MSG_HEADER, 116},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0117[3] = {
    {TYPE_MSG_HEADER, 117},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0118[3] = {
    {TYPE_MSG_HEADER, 118},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0119[2] = {
    {TYPE_MSG_HEADER, 119},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0120[5] = {
    {TYPE_MSG_HEADER, 120},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 6},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0121[4] = {
    {TYPE_MSG_HEADER, 121},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0122[2] = {
    {TYPE_MSG_HEADER, 122},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0123[3] = {
    {TYPE_MSG_HEADER, 123},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0124[5] = {
    {TYPE_MSG_HEADER, 124},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0125[1] = {
    {TYPE_MSG_HEADER, 125},
};

MsgField GAME_CLIENT_0126[4] = {
    {TYPE_MSG_HEADER, 126},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0127[1] = {
    {TYPE_MSG_HEADER, 127},
};

MsgField GAME_CLIENT_0128[1] = {
    {TYPE_MSG_HEADER, 128},
};

MsgField GAME_CLIENT_0129[1] = {
    {TYPE_MSG_HEADER, 129},
};

MsgField GAME_CLIENT_0130[2] = {
    {TYPE_MSG_HEADER, 130},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0131[3] = {
    {TYPE_MSG_HEADER, 131},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0132[4] = {
    {TYPE_MSG_HEADER, 132},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0133[2] = {
    {TYPE_MSG_HEADER, 133},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0134[3] = {
    {TYPE_MSG_HEADER, 134},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0135[3] = {
    {TYPE_MSG_HEADER, 135},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0136[1] = {
    {TYPE_MSG_HEADER, 136},
};

MsgField GAME_CLIENT_0137[1] = {
    {TYPE_MSG_HEADER, 137},
};

MsgField GAME_CLIENT_0138[2] = {
    {TYPE_MSG_HEADER, 138},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0139[3] = {
    {TYPE_MSG_HEADER, 139},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0140[2] = {
    {TYPE_MSG_HEADER, 140},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0141[7] = {
    {TYPE_MSG_HEADER, 141},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_ARRAY_16, 4},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0142[4] = {
    {TYPE_MSG_HEADER, 142},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0143[1] = {
    {TYPE_MSG_HEADER, 143},
};

MsgField GAME_CLIENT_0144[1] = {
    {TYPE_MSG_HEADER, 144},
};

MsgField GAME_CLIENT_0145[1] = {
    {TYPE_MSG_HEADER, 145},
};

MsgField GAME_CLIENT_0146[3] = {
    {TYPE_MSG_HEADER, 146},
    {TYPE_STRING_16, 20},
    {TYPE_BLOB, 8},
};

MsgField GAME_CLIENT_0147[1] = {
    {TYPE_MSG_HEADER, 147},
};

MsgField GAME_CLIENT_0148[3] = {
    {TYPE_MSG_HEADER, 148},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0149[2] = {
    {TYPE_MSG_HEADER, 149},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0150[1] = {
    {TYPE_MSG_HEADER, 150},
};

MsgField GAME_CLIENT_0151[1] = {
    {TYPE_MSG_HEADER, 151},
};

MsgField GAME_CLIENT_0152[2] = {
    {TYPE_MSG_HEADER, 152},
    {TYPE_BLOB, 16},
};

MsgField GAME_CLIENT_0153[3] = {
    {TYPE_MSG_HEADER, 153},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0154[2] = {
    {TYPE_MSG_HEADER, 154},
    {TYPE_ARRAY_8, 112},
};

MsgField GAME_CLIENT_0155[2] = {
    {TYPE_MSG_HEADER, 155},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0156[2] = {
    {TYPE_MSG_HEADER, 156},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0157[2] = {
    {TYPE_MSG_HEADER, 157},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0158[4] = {
    {TYPE_MSG_HEADER, 158},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0159[1] = {
    {TYPE_MSG_HEADER, 159},
};

MsgField GAME_CLIENT_0160[1] = {
    {TYPE_MSG_HEADER, 160},
};

MsgField GAME_CLIENT_0161[1] = {
    {TYPE_MSG_HEADER, 161},
};

MsgField GAME_CLIENT_0162[1] = {
    {TYPE_MSG_HEADER, 162},
};

MsgField GAME_CLIENT_0163[2] = {
    {TYPE_MSG_HEADER, 163},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0164[2] = {
    {TYPE_MSG_HEADER, 164},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0165[2] = {
    {TYPE_MSG_HEADER, 165},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0166[2] = {
    {TYPE_MSG_HEADER, 166},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0167[2] = {
    {TYPE_MSG_HEADER, 167},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0168[2] = {
    {TYPE_MSG_HEADER, 168},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0169[2] = {
    {TYPE_MSG_HEADER, 169},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0170[1] = {
    {TYPE_MSG_HEADER, 170},
};

MsgField GAME_CLIENT_0171[1] = {
    {TYPE_MSG_HEADER, 171},
};

MsgField GAME_CLIENT_0172[3] = {
    {TYPE_MSG_HEADER, 172},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 64},
};

MsgField GAME_CLIENT_0173[2] = {
    {TYPE_MSG_HEADER, 173},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0174[4] = {
    {TYPE_MSG_HEADER, 174},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0175[1] = {
    {TYPE_MSG_HEADER, 175},
};

MsgField GAME_CLIENT_0176[2] = {
    {TYPE_MSG_HEADER, 176},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0177[2] = {
    {TYPE_MSG_HEADER, 177},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0178[4] = {
    {TYPE_MSG_HEADER, 178},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0179[1] = {
    {TYPE_MSG_HEADER, 179},
};

MsgField GAME_CLIENT_0180[2] = {
    {TYPE_MSG_HEADER, 180},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0181[2] = {
    {TYPE_MSG_HEADER, 181},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0182[2] = {
    {TYPE_MSG_HEADER, 182},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0183[2] = {
    {TYPE_MSG_HEADER, 183},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0184[3] = {
    {TYPE_MSG_HEADER, 184},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0185[6] = {
    {TYPE_MSG_HEADER, 185},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0186[2] = {
    {TYPE_MSG_HEADER, 186},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0187[3] = {
    {TYPE_MSG_HEADER, 187},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0188[3] = {
    {TYPE_MSG_HEADER, 188},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0189[4] = {
    {TYPE_MSG_HEADER, 189},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0190[4] = {
    {TYPE_MSG_HEADER, 190},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0191[4] = {
    {TYPE_MSG_HEADER, 191},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0192[3] = {
    {TYPE_MSG_HEADER, 192},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0193[3] = {
    {TYPE_MSG_HEADER, 193},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0194[3] = {
    {TYPE_MSG_HEADER, 194},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0195[2] = {
    {TYPE_MSG_HEADER, 195},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0196[2] = {
    {TYPE_MSG_HEADER, 196},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0197[3] = {
    {TYPE_MSG_HEADER, 197},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0198[3] = {
    {TYPE_MSG_HEADER, 198},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 256},
};

MsgField GAME_CLIENT_0199[4] = {
    {TYPE_MSG_HEADER, 199},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_CLIENT_0200[3] = {
    {TYPE_MSG_HEADER, 200},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003DA670
MsgField GAME_SERVER_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003DA530
MsgField GAME_SERVER_0001[2] = {
    {TYPE_MSG_HEADER, 1},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003DA6A0
MsgField GAME_SERVER_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003DA580
MsgField GAME_SERVER_0003[2] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003DA5B0
MsgField GAME_SERVER_0004[3] = {
    {TYPE_MSG_HEADER, 4},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003DA5E0
MsgField GAME_SERVER_0005[2] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003DA610
MsgField GAME_SERVER_0006[1] = {
    {TYPE_MSG_HEADER, 6},
};

// Handler Rva: 003DA630
MsgField GAME_SERVER_0007[1] = {
    {TYPE_MSG_HEADER, 7},
};

// Handler Rva: 003DA650
MsgField GAME_SERVER_0008[1] = {
    {TYPE_MSG_HEADER, 8},
};

// Handler Rva: 003DA560
MsgField GAME_SERVER_0009[1] = {
    {TYPE_MSG_HEADER, 9},
};

// Handler Rva: 0008ABB0
MsgField GAME_SERVER_0010[3] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008AB90
MsgField GAME_SERVER_0011[2] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008ABD0
MsgField GAME_SERVER_0012[1] = {
    {TYPE_MSG_HEADER, 12},
};

// Handler Rva: 0008AC20
MsgField GAME_SERVER_0013[2] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0008AC40
MsgField GAME_SERVER_0014[5] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 256},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0015[1] = {
    {TYPE_MSG_HEADER, 15},
};

// Handler Rva: 00386ED0
MsgField GAME_SERVER_0016[4] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00386F00
MsgField GAME_SERVER_0017[2] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00386F30
MsgField GAME_SERVER_0018[2] = {
    {TYPE_MSG_HEADER, 18},
    {TYPE_WORD, 0},
};

// Handler Rva: 00386F60
MsgField GAME_SERVER_0019[2] = {
    {TYPE_MSG_HEADER, 19},
    {TYPE_WORD, 0},
};

// Handler Rva: 00386F90
MsgField GAME_SERVER_0020[2] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00386FB0
MsgField GAME_SERVER_0021[4] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00386FE0
MsgField GAME_SERVER_0022[3] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00387010
MsgField GAME_SERVER_0023[2] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00387030
MsgField GAME_SERVER_0024[6] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00387060
MsgField GAME_SERVER_0025[2] = {
    {TYPE_MSG_HEADER, 25},
    {TYPE_ARRAY_32, 8},
};

// Handler Rva: 00387090
MsgField GAME_SERVER_0026[5] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00387110
MsgField GAME_SERVER_0027[4] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_WORD, 0},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00387190
MsgField GAME_SERVER_0028[1] = {
    {TYPE_MSG_HEADER, 28},
};

// Handler Rva: 003871B0
MsgField GAME_SERVER_0029[3] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003871E0
MsgField GAME_SERVER_0030[2] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_ARRAY_32, 128},
};

// Handler Rva: 001BC210
MsgField GAME_SERVER_0031[2] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BC2B0
MsgField GAME_SERVER_0032[2] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BC320
MsgField GAME_SERVER_0033[24] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_BYTE, 0},
    {TYPE_FLOAT, 0},
    {TYPE_FLOAT, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 001BC560
MsgField GAME_SERVER_0034[2] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BC5F0
MsgField GAME_SERVER_0035[3] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BC660
MsgField GAME_SERVER_0036[3] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BC6F0
MsgField GAME_SERVER_0037[3] = {
    {TYPE_MSG_HEADER, 37},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BC7B0
MsgField GAME_SERVER_0038[4] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 001BC8B0
MsgField GAME_SERVER_0039[3] = {
    {TYPE_MSG_HEADER, 39},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 001BC970
MsgField GAME_SERVER_0040[3] = {
    {TYPE_MSG_HEADER, 40},
    {TYPE_DWORD, 0},
    {TYPE_FLOAT, 0},
};

// Handler Rva: 001BCA40
MsgField GAME_SERVER_0041[2] = {
    {TYPE_MSG_HEADER, 41},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BCB00
MsgField GAME_SERVER_0042[5] = {
    {TYPE_MSG_HEADER, 42},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 001BCBA0
MsgField GAME_SERVER_0043[6] = {
    {TYPE_MSG_HEADER, 43},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BCC40
MsgField GAME_SERVER_0044[4] = {
    {TYPE_MSG_HEADER, 44},
    {TYPE_DWORD, 0},
    {TYPE_FLOAT, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 001BCCC0
MsgField GAME_SERVER_0045[4] = {
    {TYPE_MSG_HEADER, 45},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 001BCDE0
MsgField GAME_SERVER_0046[2] = {
    {TYPE_MSG_HEADER, 46},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BCED0
MsgField GAME_SERVER_0047[4] = {
    {TYPE_MSG_HEADER, 47},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 001BCFE0
MsgField GAME_SERVER_0048[3] = {
    {TYPE_MSG_HEADER, 48},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473C40
MsgField GAME_SERVER_0049[8] = {
    {TYPE_MSG_HEADER, 49},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473C70
MsgField GAME_SERVER_0050[2] = {
    {TYPE_MSG_HEADER, 50},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00473C90
MsgField GAME_SERVER_0051[7] = {
    {TYPE_MSG_HEADER, 51},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473CC0
MsgField GAME_SERVER_0052[2] = {
    {TYPE_MSG_HEADER, 52},
    {TYPE_STRING_16, 64},
};

// Handler Rva: 00473CE0
MsgField GAME_SERVER_0053[3] = {
    {TYPE_MSG_HEADER, 53},
    {TYPE_WORD, 0},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00473D00
MsgField GAME_SERVER_0054[4] = {
    {TYPE_MSG_HEADER, 54},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473D30
MsgField GAME_SERVER_0055[3] = {
    {TYPE_MSG_HEADER, 55},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473D50
MsgField GAME_SERVER_0056[4] = {
    {TYPE_MSG_HEADER, 56},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00473D70
MsgField GAME_SERVER_0057[3] = {
    {TYPE_MSG_HEADER, 57},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00473D90
MsgField GAME_SERVER_0058[3] = {
    {TYPE_MSG_HEADER, 58},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00473DB0
MsgField GAME_SERVER_0059[3] = {
    {TYPE_MSG_HEADER, 59},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 48},
};

// Handler Rva: 00473DF0
MsgField GAME_SERVER_0060[5] = {
    {TYPE_MSG_HEADER, 60},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00473E20
MsgField GAME_SERVER_0061[5] = {
    {TYPE_MSG_HEADER, 61},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 128},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473E50
MsgField GAME_SERVER_0062[2] = {
    {TYPE_MSG_HEADER, 62},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00473E70
MsgField GAME_SERVER_0063[6] = {
    {TYPE_MSG_HEADER, 63},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473EA0
MsgField GAME_SERVER_0064[3] = {
    {TYPE_MSG_HEADER, 64},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473EC0
MsgField GAME_SERVER_0065[6] = {
    {TYPE_MSG_HEADER, 65},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473EF0
MsgField GAME_SERVER_0066[6] = {
    {TYPE_MSG_HEADER, 66},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473F20
MsgField GAME_SERVER_0067[5] = {
    {TYPE_MSG_HEADER, 67},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473F50
MsgField GAME_SERVER_0068[3] = {
    {TYPE_MSG_HEADER, 68},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473F70
MsgField GAME_SERVER_0069[3] = {
    {TYPE_MSG_HEADER, 69},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00473FA0
MsgField GAME_SERVER_0070[4] = {
    {TYPE_MSG_HEADER, 70},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00473FD0
MsgField GAME_SERVER_0071[5] = {
    {TYPE_MSG_HEADER, 71},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474020
MsgField GAME_SERVER_0072[3] = {
    {TYPE_MSG_HEADER, 72},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474040
MsgField GAME_SERVER_0073[10] = {
    {TYPE_MSG_HEADER, 73},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474090
MsgField GAME_SERVER_0074[2] = {
    {TYPE_MSG_HEADER, 74},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004740B0
MsgField GAME_SERVER_0075[2] = {
    {TYPE_MSG_HEADER, 75},
    {TYPE_ARRAY_32, 64},
};

// Handler Rva: 004740D0
MsgField GAME_SERVER_0076[4] = {
    {TYPE_MSG_HEADER, 76},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
    {TYPE_STRING_16, 128},
};

// Handler Rva: 00474100
MsgField GAME_SERVER_0077[5] = {
    {TYPE_MSG_HEADER, 77},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474170
MsgField GAME_SERVER_0078[4] = {
    {TYPE_MSG_HEADER, 78},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0079[1] = {
    {TYPE_MSG_HEADER, 79},
};

// Handler Rva: 00474140
MsgField GAME_SERVER_0080[7] = {
    {TYPE_MSG_HEADER, 80},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474190
MsgField GAME_SERVER_0081[5] = {
    {TYPE_MSG_HEADER, 81},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 004741D0
MsgField GAME_SERVER_0082[2] = {
    {TYPE_MSG_HEADER, 82},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004741F0
MsgField GAME_SERVER_0083[5] = {
    {TYPE_MSG_HEADER, 83},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474230
MsgField GAME_SERVER_0084[3] = {
    {TYPE_MSG_HEADER, 84},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0085[1] = {
    {TYPE_MSG_HEADER, 85},
};

// Handler Rva: 00474250
MsgField GAME_SERVER_0086[10] = {
    {TYPE_MSG_HEADER, 86},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 8},
};

// Handler Rva: 004742D0
MsgField GAME_SERVER_0087[3] = {
    {TYPE_MSG_HEADER, 87},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 8},
};

// Handler Rva: 00474340
MsgField GAME_SERVER_0088[3] = {
    {TYPE_MSG_HEADER, 88},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00474360
MsgField GAME_SERVER_0089[8] = {
    {TYPE_MSG_HEADER, 89},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 004743D0
MsgField GAME_SERVER_0090[2] = {
    {TYPE_MSG_HEADER, 90},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004743F0
MsgField GAME_SERVER_0091[2] = {
    {TYPE_MSG_HEADER, 91},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474410
MsgField GAME_SERVER_0092[4] = {
    {TYPE_MSG_HEADER, 92},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474430
MsgField GAME_SERVER_0093[2] = {
    {TYPE_MSG_HEADER, 93},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00474450
MsgField GAME_SERVER_0094[3] = {
    {TYPE_MSG_HEADER, 94},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474470
MsgField GAME_SERVER_0095[4] = {
    {TYPE_MSG_HEADER, 95},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 8},
};

// Handler Rva: 00474490
MsgField GAME_SERVER_0096[4] = {
    {TYPE_MSG_HEADER, 96},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
};

// Handler Rva: 004744B0
MsgField GAME_SERVER_0097[3] = {
    {TYPE_MSG_HEADER, 97},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004744D0
MsgField GAME_SERVER_0098[3] = {
    {TYPE_MSG_HEADER, 98},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004744F0
MsgField GAME_SERVER_0099[3] = {
    {TYPE_MSG_HEADER, 99},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00474510
MsgField GAME_SERVER_0100[4] = {
    {TYPE_MSG_HEADER, 100},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474530
MsgField GAME_SERVER_0101[3] = {
    {TYPE_MSG_HEADER, 101},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474550
MsgField GAME_SERVER_0102[4] = {
    {TYPE_MSG_HEADER, 102},
    {TYPE_AGENT_ID, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474590
MsgField GAME_SERVER_0103[3] = {
    {TYPE_MSG_HEADER, 103},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 004745D0
MsgField GAME_SERVER_0104[4] = {
    {TYPE_MSG_HEADER, 104},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004745F0
MsgField GAME_SERVER_0105[2] = {
    {TYPE_MSG_HEADER, 105},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00474610
MsgField GAME_SERVER_0106[2] = {
    {TYPE_MSG_HEADER, 106},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474630
MsgField GAME_SERVER_0107[3] = {
    {TYPE_MSG_HEADER, 107},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474650
MsgField GAME_SERVER_0108[4] = {
    {TYPE_MSG_HEADER, 108},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474670
MsgField GAME_SERVER_0109[4] = {
    {TYPE_MSG_HEADER, 109},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474690
MsgField GAME_SERVER_0110[11] = {
    {TYPE_MSG_HEADER, 110},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004746B0
MsgField GAME_SERVER_0111[4] = {
    {TYPE_MSG_HEADER, 111},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004746D0
MsgField GAME_SERVER_0112[2] = {
    {TYPE_MSG_HEADER, 112},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004746F0
MsgField GAME_SERVER_0113[2] = {
    {TYPE_MSG_HEADER, 113},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00474710
MsgField GAME_SERVER_0114[5] = {
    {TYPE_MSG_HEADER, 114},
    {TYPE_WORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474740
MsgField GAME_SERVER_0115[9] = {
    {TYPE_MSG_HEADER, 115},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004747C0
MsgField GAME_SERVER_0116[21] = {
    {TYPE_MSG_HEADER, 116},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00474860
MsgField GAME_SERVER_0117[2] = {
    {TYPE_MSG_HEADER, 117},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00474880
MsgField GAME_SERVER_0118[2] = {
    {TYPE_MSG_HEADER, 118},
    {TYPE_WORD, 0},
};

// Handler Rva: 004748A0
MsgField GAME_SERVER_0119[2] = {
    {TYPE_MSG_HEADER, 119},
    {TYPE_WORD, 0},
};

// Handler Rva: 004748C0
MsgField GAME_SERVER_0120[8] = {
    {TYPE_MSG_HEADER, 120},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 32},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474B20
MsgField GAME_SERVER_0121[3] = {
    {TYPE_MSG_HEADER, 121},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474B40
MsgField GAME_SERVER_0122[6] = {
    {TYPE_MSG_HEADER, 122},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474B70
MsgField GAME_SERVER_0123[2] = {
    {TYPE_MSG_HEADER, 123},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474B90
MsgField GAME_SERVER_0124[2] = {
    {TYPE_MSG_HEADER, 124},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474CA0
MsgField GAME_SERVER_0125[2] = {
    {TYPE_MSG_HEADER, 125},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474BB0
MsgField GAME_SERVER_0126[5] = {
    {TYPE_MSG_HEADER, 126},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0127[1] = {
    {TYPE_MSG_HEADER, 127},
};

// Handler Rva: 00474BF0
MsgField GAME_SERVER_0128[2] = {
    {TYPE_MSG_HEADER, 128},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00474C10
MsgField GAME_SERVER_0129[2] = {
    {TYPE_MSG_HEADER, 129},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00474C30
MsgField GAME_SERVER_0130[3] = {
    {TYPE_MSG_HEADER, 130},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00474C50
MsgField GAME_SERVER_0131[4] = {
    {TYPE_MSG_HEADER, 131},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474CC0
MsgField GAME_SERVER_0132[2] = {
    {TYPE_MSG_HEADER, 132},
    {TYPE_ARRAY_32, 16},
};

// Handler Rva: 00474CE0
MsgField GAME_SERVER_0133[2] = {
    {TYPE_MSG_HEADER, 133},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474D00
MsgField GAME_SERVER_0134[2] = {
    {TYPE_MSG_HEADER, 134},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474D20
MsgField GAME_SERVER_0135[19] = {
    {TYPE_MSG_HEADER, 135},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474D50
MsgField GAME_SERVER_0136[2] = {
    {TYPE_MSG_HEADER, 136},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474D70
MsgField GAME_SERVER_0137[4] = {
    {TYPE_MSG_HEADER, 137},
    {TYPE_BYTE, 0},
    {TYPE_VECT3, 0},
    {TYPE_VECT2, 0},
};

// Handler Rva: 00474D90
MsgField GAME_SERVER_0138[2] = {
    {TYPE_MSG_HEADER, 138},
    {TYPE_ARRAY_32, 64},
};

// Handler Rva: 00474DB0
MsgField GAME_SERVER_0139[4] = {
    {TYPE_MSG_HEADER, 139},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474DE0
MsgField GAME_SERVER_0140[3] = {
    {TYPE_MSG_HEADER, 140},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474E10
MsgField GAME_SERVER_0141[8] = {
    {TYPE_MSG_HEADER, 141},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0142[1] = {
    {TYPE_MSG_HEADER, 142},
};

// Handler Rva: 00474E60
MsgField GAME_SERVER_0143[2] = {
    {TYPE_MSG_HEADER, 143},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474E80
MsgField GAME_SERVER_0144[3] = {
    {TYPE_MSG_HEADER, 144},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00474EA0
MsgField GAME_SERVER_0145[3] = {
    {TYPE_MSG_HEADER, 145},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474EC0
MsgField GAME_SERVER_0146[4] = {
    {TYPE_MSG_HEADER, 146},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

// Handler Rva: 00474F60
MsgField GAME_SERVER_0147[3] = {
    {TYPE_MSG_HEADER, 147},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474F90
MsgField GAME_SERVER_0148[3] = {
    {TYPE_MSG_HEADER, 148},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474FB0
MsgField GAME_SERVER_0149[6] = {
    {TYPE_MSG_HEADER, 149},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
};

// Handler Rva: 00475020
MsgField GAME_SERVER_0150[3] = {
    {TYPE_MSG_HEADER, 150},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475040
MsgField GAME_SERVER_0151[6] = {
    {TYPE_MSG_HEADER, 151},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475070
MsgField GAME_SERVER_0152[3] = {
    {TYPE_MSG_HEADER, 152},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 128},
};

// Handler Rva: 00475090
MsgField GAME_SERVER_0153[5] = {
    {TYPE_MSG_HEADER, 153},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004750C0
MsgField GAME_SERVER_0154[3] = {
    {TYPE_MSG_HEADER, 154},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004750E0
MsgField GAME_SERVER_0155[3] = {
    {TYPE_MSG_HEADER, 155},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475100
MsgField GAME_SERVER_0156[3] = {
    {TYPE_MSG_HEADER, 156},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00475120
MsgField GAME_SERVER_0157[3] = {
    {TYPE_MSG_HEADER, 157},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475140
MsgField GAME_SERVER_0158[4] = {
    {TYPE_MSG_HEADER, 158},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475170
MsgField GAME_SERVER_0159[5] = {
    {TYPE_MSG_HEADER, 159},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 004751A0
MsgField GAME_SERVER_0160[4] = {
    {TYPE_MSG_HEADER, 160},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004751C0
MsgField GAME_SERVER_0161[5] = {
    {TYPE_MSG_HEADER, 161},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004751F0
MsgField GAME_SERVER_0162[7] = {
    {TYPE_MSG_HEADER, 162},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475240
MsgField GAME_SERVER_0163[4] = {
    {TYPE_MSG_HEADER, 163},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475270
MsgField GAME_SERVER_0164[5] = {
    {TYPE_MSG_HEADER, 164},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004752A0
MsgField GAME_SERVER_0165[8] = {
    {TYPE_MSG_HEADER, 165},
    {TYPE_AGENT_ID, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004752F0
MsgField GAME_SERVER_0166[3] = {
    {TYPE_MSG_HEADER, 166},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00475310
MsgField GAME_SERVER_0167[4] = {
    {TYPE_MSG_HEADER, 167},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475330
MsgField GAME_SERVER_0168[4] = {
    {TYPE_MSG_HEADER, 168},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475350
MsgField GAME_SERVER_0169[4] = {
    {TYPE_MSG_HEADER, 169},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475390
MsgField GAME_SERVER_0170[3] = {
    {TYPE_MSG_HEADER, 170},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004753B0
MsgField GAME_SERVER_0171[4] = {
    {TYPE_MSG_HEADER, 171},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004753D0
MsgField GAME_SERVER_0172[1] = {
    {TYPE_MSG_HEADER, 172},
};

// Handler Rva: 004753E0
MsgField GAME_SERVER_0173[3] = {
    {TYPE_MSG_HEADER, 173},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475400
MsgField GAME_SERVER_0174[3] = {
    {TYPE_MSG_HEADER, 174},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475420
MsgField GAME_SERVER_0175[3] = {
    {TYPE_MSG_HEADER, 175},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475440
MsgField GAME_SERVER_0176[2] = {
    {TYPE_MSG_HEADER, 176},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00475460
MsgField GAME_SERVER_0177[3] = {
    {TYPE_MSG_HEADER, 177},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004754F0
MsgField GAME_SERVER_0178[3] = {
    {TYPE_MSG_HEADER, 178},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00475480
MsgField GAME_SERVER_0179[7] = {
    {TYPE_MSG_HEADER, 179},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004754B0
MsgField GAME_SERVER_0180[2] = {
    {TYPE_MSG_HEADER, 180},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 004754D0
MsgField GAME_SERVER_0181[3] = {
    {TYPE_MSG_HEADER, 181},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00475510
MsgField GAME_SERVER_0182[2] = {
    {TYPE_MSG_HEADER, 182},
    {TYPE_ARRAY_8, 256},
};

// Handler Rva: 00475530
MsgField GAME_SERVER_0183[3] = {
    {TYPE_MSG_HEADER, 183},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475550
MsgField GAME_SERVER_0184[5] = {
    {TYPE_MSG_HEADER, 184},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475580
MsgField GAME_SERVER_0185[1] = {
    {TYPE_MSG_HEADER, 185},
};

// Handler Rva: 00475590
MsgField GAME_SERVER_0186[3] = {
    {TYPE_MSG_HEADER, 186},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004755B0
MsgField GAME_SERVER_0187[1] = {
    {TYPE_MSG_HEADER, 187},
};

// Handler Rva: 004755C0
MsgField GAME_SERVER_0188[4] = {
    {TYPE_MSG_HEADER, 188},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
};

// Handler Rva: 004755E0
MsgField GAME_SERVER_0189[2] = {
    {TYPE_MSG_HEADER, 189},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475600
MsgField GAME_SERVER_0190[3] = {
    {TYPE_MSG_HEADER, 190},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
};

// Handler Rva: 00475620
MsgField GAME_SERVER_0191[2] = {
    {TYPE_MSG_HEADER, 191},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00475640
MsgField GAME_SERVER_0192[2] = {
    {TYPE_MSG_HEADER, 192},
    {TYPE_ARRAY_32, 64},
};

// Handler Rva: 00475660
MsgField GAME_SERVER_0193[6] = {
    {TYPE_MSG_HEADER, 193},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
    {TYPE_STRING_16, 128},
};

// Handler Rva: 00475690
MsgField GAME_SERVER_0194[3] = {
    {TYPE_MSG_HEADER, 194},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004756B0
MsgField GAME_SERVER_0195[3] = {
    {TYPE_MSG_HEADER, 195},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004756D0
MsgField GAME_SERVER_0196[3] = {
    {TYPE_MSG_HEADER, 196},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004756F0
MsgField GAME_SERVER_0197[2] = {
    {TYPE_MSG_HEADER, 197},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00475710
MsgField GAME_SERVER_0198[3] = {
    {TYPE_MSG_HEADER, 198},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00475730
MsgField GAME_SERVER_0199[3] = {
    {TYPE_MSG_HEADER, 199},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475790
MsgField GAME_SERVER_0200[4] = {
    {TYPE_MSG_HEADER, 200},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

// Handler Rva: 00475750
MsgField GAME_SERVER_0201[4] = {
    {TYPE_MSG_HEADER, 201},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475770
MsgField GAME_SERVER_0202[3] = {
    {TYPE_MSG_HEADER, 202},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004757E0
MsgField GAME_SERVER_0203[3] = {
    {TYPE_MSG_HEADER, 203},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475800
MsgField GAME_SERVER_0204[2] = {
    {TYPE_MSG_HEADER, 204},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475820
MsgField GAME_SERVER_0205[2] = {
    {TYPE_MSG_HEADER, 205},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475840
MsgField GAME_SERVER_0206[5] = {
    {TYPE_MSG_HEADER, 206},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475870
MsgField GAME_SERVER_0207[3] = {
    {TYPE_MSG_HEADER, 207},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475890
MsgField GAME_SERVER_0208[3] = {
    {TYPE_MSG_HEADER, 208},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004758B0
MsgField GAME_SERVER_0209[2] = {
    {TYPE_MSG_HEADER, 209},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 004758D0
MsgField GAME_SERVER_0210[5] = {
    {TYPE_MSG_HEADER, 210},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475900
MsgField GAME_SERVER_0211[4] = {
    {TYPE_MSG_HEADER, 211},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475920
MsgField GAME_SERVER_0212[2] = {
    {TYPE_MSG_HEADER, 212},
    {TYPE_ARRAY_32, 128},
};

// Handler Rva: 00475940
MsgField GAME_SERVER_0213[1] = {
    {TYPE_MSG_HEADER, 213},
};

// Handler Rva: 00475970
MsgField GAME_SERVER_0214[1] = {
    {TYPE_MSG_HEADER, 214},
};

// Handler Rva: 00475980
MsgField GAME_SERVER_0215[4] = {
    {TYPE_MSG_HEADER, 215},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00474CC0
MsgField GAME_SERVER_0216[2] = {
    {TYPE_MSG_HEADER, 216},
    {TYPE_ARRAY_32, 8},
};

// Handler Rva: 00475950
MsgField GAME_SERVER_0217[2] = {
    {TYPE_MSG_HEADER, 217},
    {TYPE_ARRAY_32, 4},
};

// Handler Rva: 004759A0
MsgField GAME_SERVER_0218[5] = {
    {TYPE_MSG_HEADER, 218},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004759D0
MsgField GAME_SERVER_0219[5] = {
    {TYPE_MSG_HEADER, 219},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 8},
    {TYPE_ARRAY_32, 8},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475A00
MsgField GAME_SERVER_0220[2] = {
    {TYPE_MSG_HEADER, 220},
    {TYPE_ARRAY_32, 128},
};

// Handler Rva: 00475A20
MsgField GAME_SERVER_0221[3] = {
    {TYPE_MSG_HEADER, 221},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475A40
MsgField GAME_SERVER_0222[3] = {
    {TYPE_MSG_HEADER, 222},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475A60
MsgField GAME_SERVER_0223[2] = {
    {TYPE_MSG_HEADER, 223},
    {TYPE_WORD, 0},
};

// Handler Rva: 00475A80
MsgField GAME_SERVER_0224[3] = {
    {TYPE_MSG_HEADER, 224},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475AA0
MsgField GAME_SERVER_0225[3] = {
    {TYPE_MSG_HEADER, 225},
    {TYPE_BYTE, 0},
    {TYPE_ARRAY_32, 16},
};

// Handler Rva: 00475AD0
MsgField GAME_SERVER_0226[2] = {
    {TYPE_MSG_HEADER, 226},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00475AF0
MsgField GAME_SERVER_0227[4] = {
    {TYPE_MSG_HEADER, 227},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475AF0
MsgField GAME_SERVER_0228[4] = {
    {TYPE_MSG_HEADER, 228},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475B10
MsgField GAME_SERVER_0229[4] = {
    {TYPE_MSG_HEADER, 229},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475B30
MsgField GAME_SERVER_0230[5] = {
    {TYPE_MSG_HEADER, 230},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475B60
MsgField GAME_SERVER_0231[4] = {
    {TYPE_MSG_HEADER, 231},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475B80
MsgField GAME_SERVER_0232[4] = {
    {TYPE_MSG_HEADER, 232},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475BA0
MsgField GAME_SERVER_0233[6] = {
    {TYPE_MSG_HEADER, 233},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475BD0
MsgField GAME_SERVER_0234[16] = {
    {TYPE_MSG_HEADER, 234},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475BF0
MsgField GAME_SERVER_0235[2] = {
    {TYPE_MSG_HEADER, 235},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475C10
MsgField GAME_SERVER_0236[2] = {
    {TYPE_MSG_HEADER, 236},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475C30
MsgField GAME_SERVER_0237[2] = {
    {TYPE_MSG_HEADER, 237},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475C50
MsgField GAME_SERVER_0238[2] = {
    {TYPE_MSG_HEADER, 238},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475C70
MsgField GAME_SERVER_0239[3] = {
    {TYPE_MSG_HEADER, 239},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475C90
MsgField GAME_SERVER_0240[3] = {
    {TYPE_MSG_HEADER, 240},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475CB0
MsgField GAME_SERVER_0241[3] = {
    {TYPE_MSG_HEADER, 241},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475CD0
MsgField GAME_SERVER_0242[3] = {
    {TYPE_MSG_HEADER, 242},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475CF0
MsgField GAME_SERVER_0243[2] = {
    {TYPE_MSG_HEADER, 243},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475D10
MsgField GAME_SERVER_0244[5] = {
    {TYPE_MSG_HEADER, 244},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
};

// Handler Rva: 00475D50
MsgField GAME_SERVER_0245[3] = {
    {TYPE_MSG_HEADER, 245},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475D70
MsgField GAME_SERVER_0246[3] = {
    {TYPE_MSG_HEADER, 246},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475D90
MsgField GAME_SERVER_0247[12] = {
    {TYPE_MSG_HEADER, 247},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
};

// Handler Rva: 00475E00
MsgField GAME_SERVER_0248[3] = {
    {TYPE_MSG_HEADER, 248},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475E20
MsgField GAME_SERVER_0249[2] = {
    {TYPE_MSG_HEADER, 249},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00475950
MsgField GAME_SERVER_0250[2] = {
    {TYPE_MSG_HEADER, 250},
    {TYPE_ARRAY_32, 16},
};

// Handler Rva: 00475E40
MsgField GAME_SERVER_0251[2] = {
    {TYPE_MSG_HEADER, 251},
    {TYPE_ARRAY_32, 32},
};

// Handler Rva: 00475E60
MsgField GAME_SERVER_0252[4] = {
    {TYPE_MSG_HEADER, 252},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475E80
MsgField GAME_SERVER_0253[3] = {
    {TYPE_MSG_HEADER, 253},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00475EA0
MsgField GAME_SERVER_0254[3] = {
    {TYPE_MSG_HEADER, 254},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0255[1] = {
    {TYPE_MSG_HEADER, 255},
};

// Handler Rva: 00477CA0
MsgField GAME_SERVER_0256[1] = {
    {TYPE_MSG_HEADER, 256},
};

// Handler Rva: 00477CB0
MsgField GAME_SERVER_0257[3] = {
    {TYPE_MSG_HEADER, 257},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00477CD0
MsgField GAME_SERVER_0258[2] = {
    {TYPE_MSG_HEADER, 258},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00477CF0
MsgField GAME_SERVER_0259[2] = {
    {TYPE_MSG_HEADER, 259},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00477D10
MsgField GAME_SERVER_0260[4] = {
    {TYPE_MSG_HEADER, 260},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_STRING_16, 80},
};

// Handler Rva: 00477D30
MsgField GAME_SERVER_0261[1] = {
    {TYPE_MSG_HEADER, 261},
};

// Handler Rva: 00477D40
MsgField GAME_SERVER_0262[2] = {
    {TYPE_MSG_HEADER, 262},
    {TYPE_ARRAY_8, 1024},
};

// Handler Rva: 00477D60
MsgField GAME_SERVER_0263[1] = {
    {TYPE_MSG_HEADER, 263},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0264[1] = {
    {TYPE_MSG_HEADER, 264},
};

// Handler Rva: 003AED60
MsgField GAME_SERVER_0265[2] = {
    {TYPE_MSG_HEADER, 265},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00477E10
MsgField GAME_SERVER_0266[6] = {
    {TYPE_MSG_HEADER, 266},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00477E60
MsgField GAME_SERVER_0267[2] = {
    {TYPE_MSG_HEADER, 267},
    {TYPE_AGENT_ID, 0},
};

// Handler Rva: 00477E80
MsgField GAME_SERVER_0268[3] = {
    {TYPE_MSG_HEADER, 268},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00477EA0
MsgField GAME_SERVER_0269[5] = {
    {TYPE_MSG_HEADER, 269},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 00477EE0
MsgField GAME_SERVER_0270[2] = {
    {TYPE_MSG_HEADER, 270},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 00478030
MsgField GAME_SERVER_0271[2] = {
    {TYPE_MSG_HEADER, 271},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00478090
MsgField GAME_SERVER_0272[2] = {
    {TYPE_MSG_HEADER, 272},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004780B0
MsgField GAME_SERVER_0273[4] = {
    {TYPE_MSG_HEADER, 273},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 004780D0
MsgField GAME_SERVER_0274[3] = {
    {TYPE_MSG_HEADER, 274},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 004780F0
MsgField GAME_SERVER_0275[3] = {
    {TYPE_MSG_HEADER, 275},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00478110
MsgField GAME_SERVER_0276[4] = {
    {TYPE_MSG_HEADER, 276},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00478130
MsgField GAME_SERVER_0277[3] = {
    {TYPE_MSG_HEADER, 277},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00478150
MsgField GAME_SERVER_0278[3] = {
    {TYPE_MSG_HEADER, 278},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 00478170
MsgField GAME_SERVER_0279[3] = {
    {TYPE_MSG_HEADER, 279},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00478190
MsgField GAME_SERVER_0280[3] = {
    {TYPE_MSG_HEADER, 280},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BEED0
MsgField GAME_SERVER_0281[5] = {
    {TYPE_MSG_HEADER, 281},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BEF60
MsgField GAME_SERVER_0282[2] = {
    {TYPE_MSG_HEADER, 282},
    {TYPE_BLOB, 16},
};

// Handler Rva: 003BF1B0
MsgField GAME_SERVER_0283[4] = {
    {TYPE_MSG_HEADER, 283},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF2A0
MsgField GAME_SERVER_0284[1] = {
    {TYPE_MSG_HEADER, 284},
};

// Handler Rva: 003BEFC0
MsgField GAME_SERVER_0285[14] = {
    {TYPE_MSG_HEADER, 285},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF040
MsgField GAME_SERVER_0286[3] = {
    {TYPE_MSG_HEADER, 286},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF0B0
MsgField GAME_SERVER_0287[1] = {
    {TYPE_MSG_HEADER, 287},
};

// Handler Rva: 003BF070
MsgField GAME_SERVER_0288[2] = {
    {TYPE_MSG_HEADER, 288},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF0F0
MsgField GAME_SERVER_0289[3] = {
    {TYPE_MSG_HEADER, 289},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BF170
MsgField GAME_SERVER_0290[3] = {
    {TYPE_MSG_HEADER, 290},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
};

// Handler Rva: 003BF320
MsgField GAME_SERVER_0291[16] = {
    {TYPE_MSG_HEADER, 291},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF3F0
MsgField GAME_SERVER_0292[20] = {
    {TYPE_MSG_HEADER, 292},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF4E0
MsgField GAME_SERVER_0293[4] = {
    {TYPE_MSG_HEADER, 293},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BF7C0
MsgField GAME_SERVER_0294[8] = {
    {TYPE_MSG_HEADER, 294},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_STRING_16, 20},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF810
MsgField GAME_SERVER_0295[3] = {
    {TYPE_MSG_HEADER, 295},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF560
MsgField GAME_SERVER_0296[3] = {
    {TYPE_MSG_HEADER, 296},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BF5E0
MsgField GAME_SERVER_0297[3] = {
    {TYPE_MSG_HEADER, 297},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF850
MsgField GAME_SERVER_0298[10] = {
    {TYPE_MSG_HEADER, 298},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 64},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF8C0
MsgField GAME_SERVER_0299[2] = {
    {TYPE_MSG_HEADER, 299},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003BF900
MsgField GAME_SERVER_0300[2] = {
    {TYPE_MSG_HEADER, 300},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003BF960
MsgField GAME_SERVER_0301[2] = {
    {TYPE_MSG_HEADER, 301},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003BFA70
MsgField GAME_SERVER_0302[3] = {
    {TYPE_MSG_HEADER, 302},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
};

// Handler Rva: 003BFAD0
MsgField GAME_SERVER_0303[3] = {
    {TYPE_MSG_HEADER, 303},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BFB40
MsgField GAME_SERVER_0304[2] = {
    {TYPE_MSG_HEADER, 304},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BF660
MsgField GAME_SERVER_0305[2] = {
    {TYPE_MSG_HEADER, 305},
    {TYPE_WORD, 0},
};

// Handler Rva: 003BFB90
MsgField GAME_SERVER_0306[3] = {
    {TYPE_MSG_HEADER, 306},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003BF6A0
MsgField GAME_SERVER_0307[3] = {
    {TYPE_MSG_HEADER, 307},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BF720
MsgField GAME_SERVER_0308[1] = {
    {TYPE_MSG_HEADER, 308},
};

// Handler Rva: 003BFC30
MsgField GAME_SERVER_0309[3] = {
    {TYPE_MSG_HEADER, 309},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003BFC70
MsgField GAME_SERVER_0310[2] = {
    {TYPE_MSG_HEADER, 310},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003BF7A0
MsgField GAME_SERVER_0311[1] = {
    {TYPE_MSG_HEADER, 311},
};

// Handler Rva: 003C44C0
MsgField GAME_SERVER_0312[4] = {
    {TYPE_MSG_HEADER, 312},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4570
MsgField GAME_SERVER_0313[2] = {
    {TYPE_MSG_HEADER, 313},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C45A0
MsgField GAME_SERVER_0314[3] = {
    {TYPE_MSG_HEADER, 314},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C45E0
MsgField GAME_SERVER_0315[7] = {
    {TYPE_MSG_HEADER, 315},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
};

// Handler Rva: 003C4620
MsgField GAME_SERVER_0316[3] = {
    {TYPE_MSG_HEADER, 316},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4770
MsgField GAME_SERVER_0317[3] = {
    {TYPE_MSG_HEADER, 317},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

// Handler Rva: 003C4820
MsgField GAME_SERVER_0318[3] = {
    {TYPE_MSG_HEADER, 318},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4850
MsgField GAME_SERVER_0319[3] = {
    {TYPE_MSG_HEADER, 319},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 0006B650
MsgField GAME_SERVER_0320[4] = {
    {TYPE_MSG_HEADER, 320},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C4890
MsgField GAME_SERVER_0321[5] = {
    {TYPE_MSG_HEADER, 321},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C4950
MsgField GAME_SERVER_0322[7] = {
    {TYPE_MSG_HEADER, 322},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4A30
MsgField GAME_SERVER_0323[3] = {
    {TYPE_MSG_HEADER, 323},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4A80
MsgField GAME_SERVER_0324[3] = {
    {TYPE_MSG_HEADER, 324},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4AD0
MsgField GAME_SERVER_0325[2] = {
    {TYPE_MSG_HEADER, 325},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C4B00
MsgField GAME_SERVER_0326[3] = {
    {TYPE_MSG_HEADER, 326},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C4B70
MsgField GAME_SERVER_0327[3] = {
    {TYPE_MSG_HEADER, 327},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C4BC0
MsgField GAME_SERVER_0328[2] = {
    {TYPE_MSG_HEADER, 328},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C4C10
MsgField GAME_SERVER_0329[6] = {
    {TYPE_MSG_HEADER, 329},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4CD0
MsgField GAME_SERVER_0330[5] = {
    {TYPE_MSG_HEADER, 330},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4D60
MsgField GAME_SERVER_0331[3] = {
    {TYPE_MSG_HEADER, 331},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C4DB0
MsgField GAME_SERVER_0332[4] = {
    {TYPE_MSG_HEADER, 332},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0333[1] = {
    {TYPE_MSG_HEADER, 333},
};

// Handler Rva: 003C4E30
MsgField GAME_SERVER_0334[5] = {
    {TYPE_MSG_HEADER, 334},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C4EE0
MsgField GAME_SERVER_0335[4] = {
    {TYPE_MSG_HEADER, 335},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C4F40
MsgField GAME_SERVER_0336[3] = {
    {TYPE_MSG_HEADER, 336},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C4FC0
MsgField GAME_SERVER_0337[3] = {
    {TYPE_MSG_HEADER, 337},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C5040
MsgField GAME_SERVER_0338[3] = {
    {TYPE_MSG_HEADER, 338},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5090
MsgField GAME_SERVER_0339[3] = {
    {TYPE_MSG_HEADER, 339},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C50E0
MsgField GAME_SERVER_0340[3] = {
    {TYPE_MSG_HEADER, 340},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5150
MsgField GAME_SERVER_0341[4] = {
    {TYPE_MSG_HEADER, 341},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0342[1] = {
    {TYPE_MSG_HEADER, 342},
};

// Handler Rva: 003C5200
MsgField GAME_SERVER_0343[5] = {
    {TYPE_MSG_HEADER, 343},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C52B0
MsgField GAME_SERVER_0344[4] = {
    {TYPE_MSG_HEADER, 344},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C52F0
MsgField GAME_SERVER_0345[3] = {
    {TYPE_MSG_HEADER, 345},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5350
MsgField GAME_SERVER_0346[2] = {
    {TYPE_MSG_HEADER, 346},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C53D0
MsgField GAME_SERVER_0347[5] = {
    {TYPE_MSG_HEADER, 347},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C53A0
MsgField GAME_SERVER_0348[3] = {
    {TYPE_MSG_HEADER, 348},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C5400
MsgField GAME_SERVER_0349[3] = {
    {TYPE_MSG_HEADER, 349},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C5470
MsgField GAME_SERVER_0350[3] = {
    {TYPE_MSG_HEADER, 350},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C54C0
MsgField GAME_SERVER_0351[3] = {
    {TYPE_MSG_HEADER, 351},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C54F0
MsgField GAME_SERVER_0352[10] = {
    {TYPE_MSG_HEADER, 352},
    {TYPE_WORD, 0},
    {TYPE_NESTED_STRUCT, 7},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C55A0
MsgField GAME_SERVER_0353[3] = {
    {TYPE_MSG_HEADER, 353},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C58A0
MsgField GAME_SERVER_0354[10] = {
    {TYPE_MSG_HEADER, 354},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5950
MsgField GAME_SERVER_0355[10] = {
    {TYPE_MSG_HEADER, 355},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5860
MsgField GAME_SERVER_0356[7] = {
    {TYPE_MSG_HEADER, 356},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5670
MsgField GAME_SERVER_0357[15] = {
    {TYPE_MSG_HEADER, 357},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5750
MsgField GAME_SERVER_0358[15] = {
    {TYPE_MSG_HEADER, 358},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5A30
MsgField GAME_SERVER_0359[4] = {
    {TYPE_MSG_HEADER, 359},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 3},
};

// Handler Rva: 003C5A90
MsgField GAME_SERVER_0360[1] = {
    {TYPE_MSG_HEADER, 360},
};

// Handler Rva: 003C5AB0
MsgField GAME_SERVER_0361[1] = {
    {TYPE_MSG_HEADER, 361},
};

// Handler Rva: 003C5AD0
MsgField GAME_SERVER_0362[1] = {
    {TYPE_MSG_HEADER, 362},
};

// Handler Rva: 003C5AF0
MsgField GAME_SERVER_0363[2] = {
    {TYPE_MSG_HEADER, 363},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003C5B20
MsgField GAME_SERVER_0364[3] = {
    {TYPE_MSG_HEADER, 364},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003C5B40
MsgField GAME_SERVER_0365[3] = {
    {TYPE_MSG_HEADER, 365},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003C5B80
MsgField GAME_SERVER_0366[4] = {
    {TYPE_MSG_HEADER, 366},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 3},
};

// Handler Rva: 003C5BE0
MsgField GAME_SERVER_0367[1] = {
    {TYPE_MSG_HEADER, 367},
};

// Handler Rva: 003C5C00
MsgField GAME_SERVER_0368[1] = {
    {TYPE_MSG_HEADER, 368},
};

// Handler Rva: 003C5C20
MsgField GAME_SERVER_0369[2] = {
    {TYPE_MSG_HEADER, 369},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0370[1] = {
    {TYPE_MSG_HEADER, 370},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0371[1] = {
    {TYPE_MSG_HEADER, 371},
};

// Handler Rva: 003CC810
MsgField GAME_SERVER_0372[2] = {
    {TYPE_MSG_HEADER, 372},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CC8A0
MsgField GAME_SERVER_0373[1] = {
    {TYPE_MSG_HEADER, 373},
};

// Handler Rva: 003CC8C0
MsgField GAME_SERVER_0374[1] = {
    {TYPE_MSG_HEADER, 374},
};

// Handler Rva: 003CC8E0
MsgField GAME_SERVER_0375[24] = {
    {TYPE_MSG_HEADER, 375},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CC9D0
MsgField GAME_SERVER_0376[2] = {
    {TYPE_MSG_HEADER, 376},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CC9F0
MsgField GAME_SERVER_0377[2] = {
    {TYPE_MSG_HEADER, 377},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCA10
MsgField GAME_SERVER_0378[24] = {
    {TYPE_MSG_HEADER, 378},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CCB00
MsgField GAME_SERVER_0379[5] = {
    {TYPE_MSG_HEADER, 379},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 64},
};

// Handler Rva: 003CCB30
MsgField GAME_SERVER_0380[3] = {
    {TYPE_MSG_HEADER, 380},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003CCB50
MsgField GAME_SERVER_0381[5] = {
    {TYPE_MSG_HEADER, 381},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 64},
};

// Handler Rva: 003CCB80
MsgField GAME_SERVER_0382[21] = {
    {TYPE_MSG_HEADER, 382},
    {TYPE_WORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 6},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CCCA0
MsgField GAME_SERVER_0383[4] = {
    {TYPE_MSG_HEADER, 383},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CCCD0
MsgField GAME_SERVER_0384[2] = {
    {TYPE_MSG_HEADER, 384},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CCD70
MsgField GAME_SERVER_0385[1] = {
    {TYPE_MSG_HEADER, 385},
};

// Handler Rva: 003CCDF0
MsgField GAME_SERVER_0386[5] = {
    {TYPE_MSG_HEADER, 386},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CCE30
MsgField GAME_SERVER_0387[2] = {
    {TYPE_MSG_HEADER, 387},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0388[1] = {
    {TYPE_MSG_HEADER, 388},
};

// Handler Rva: 003CCE60
MsgField GAME_SERVER_0389[1] = {
    {TYPE_MSG_HEADER, 389},
};

// Handler Rva: 003CCE80
MsgField GAME_SERVER_0390[2] = {
    {TYPE_MSG_HEADER, 390},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCEB0
MsgField GAME_SERVER_0391[5] = {
    {TYPE_MSG_HEADER, 391},
    {TYPE_STRING_16, 122},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCEF0
MsgField GAME_SERVER_0392[2] = {
    {TYPE_MSG_HEADER, 392},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCF20
MsgField GAME_SERVER_0393[3] = {
    {TYPE_MSG_HEADER, 393},
    {TYPE_STRING_16, 122},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CCF50
MsgField GAME_SERVER_0394[3] = {
    {TYPE_MSG_HEADER, 394},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCF70
MsgField GAME_SERVER_0395[3] = {
    {TYPE_MSG_HEADER, 395},
    {TYPE_STRING_16, 128},
    {TYPE_STRING_16, 256},
};

// Handler Rva: 003CCF90
MsgField GAME_SERVER_0396[3] = {
    {TYPE_MSG_HEADER, 396},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCFB0
MsgField GAME_SERVER_0397[2] = {
    {TYPE_MSG_HEADER, 397},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CCFD0
MsgField GAME_SERVER_0398[5] = {
    {TYPE_MSG_HEADER, 398},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_WORD, 0},
    {TYPE_ARRAY_8, 1024},
};

// Handler Rva: 003CD040
MsgField GAME_SERVER_0399[1] = {
    {TYPE_MSG_HEADER, 399},
};

// Handler Rva: 003CD070
MsgField GAME_SERVER_0400[1] = {
    {TYPE_MSG_HEADER, 400},
};

// Handler Rva: 003CD090
MsgField GAME_SERVER_0401[2] = {
    {TYPE_MSG_HEADER, 401},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD0C0
MsgField GAME_SERVER_0402[2] = {
    {TYPE_MSG_HEADER, 402},
    {TYPE_BYTE, 0},
};

// Handler Rva: 0006B650
MsgField GAME_SERVER_0403[2] = {
    {TYPE_MSG_HEADER, 403},
    {TYPE_WORD, 0},
};

// Handler Rva: 003CD0F0
MsgField GAME_SERVER_0404[1] = {
    {TYPE_MSG_HEADER, 404},
};

// Handler Rva: 003CD130
MsgField GAME_SERVER_0405[4] = {
    {TYPE_MSG_HEADER, 405},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD220
MsgField GAME_SERVER_0406[3] = {
    {TYPE_MSG_HEADER, 406},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD180
MsgField GAME_SERVER_0407[2] = {
    {TYPE_MSG_HEADER, 407},
    {TYPE_WORD, 0},
};

// Handler Rva: 003CD250
MsgField GAME_SERVER_0408[9] = {
    {TYPE_MSG_HEADER, 408},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 8},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003CD2E0
MsgField GAME_SERVER_0409[3] = {
    {TYPE_MSG_HEADER, 409},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CD310
MsgField GAME_SERVER_0410[2] = {
    {TYPE_MSG_HEADER, 410},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CD350
MsgField GAME_SERVER_0411[7] = {
    {TYPE_MSG_HEADER, 411},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BLOB, 8},
};

// Handler Rva: 003CD400
MsgField GAME_SERVER_0412[2] = {
    {TYPE_MSG_HEADER, 412},
    {TYPE_ARRAY_8, 1024},
};

// Handler Rva: 003CD430
MsgField GAME_SERVER_0413[4] = {
    {TYPE_MSG_HEADER, 413},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD460
MsgField GAME_SERVER_0414[2] = {
    {TYPE_MSG_HEADER, 414},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CD490
MsgField GAME_SERVER_0415[7] = {
    {TYPE_MSG_HEADER, 415},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CD510
MsgField GAME_SERVER_0416[2] = {
    {TYPE_MSG_HEADER, 416},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD530
MsgField GAME_SERVER_0417[2] = {
    {TYPE_MSG_HEADER, 417},
    {TYPE_WORD, 0},
};

// Handler Rva: 003CD550
MsgField GAME_SERVER_0418[2] = {
    {TYPE_MSG_HEADER, 418},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003CD580
MsgField GAME_SERVER_0419[18] = {
    {TYPE_MSG_HEADER, 419},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 2},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 48},
};

// Handler Rva: 003CD5A0
MsgField GAME_SERVER_0420[1] = {
    {TYPE_MSG_HEADER, 420},
};

// Handler Rva: 003CD5D0
MsgField GAME_SERVER_0421[4] = {
    {TYPE_MSG_HEADER, 421},
    {TYPE_NESTED_STRUCT, 16},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD600
MsgField GAME_SERVER_0422[9] = {
    {TYPE_MSG_HEADER, 422},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
    {TYPE_STRING_16, 122},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD690
MsgField GAME_SERVER_0423[2] = {
    {TYPE_MSG_HEADER, 423},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CD6C0
MsgField GAME_SERVER_0424[7] = {
    {TYPE_MSG_HEADER, 424},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD740
MsgField GAME_SERVER_0425[4] = {
    {TYPE_MSG_HEADER, 425},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003CD7B0
MsgField GAME_SERVER_0426[14] = {
    {TYPE_MSG_HEADER, 426},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
    {TYPE_BLOB, 8},
};

// Handler Rva: 003CD8D0
MsgField GAME_SERVER_0427[7] = {
    {TYPE_MSG_HEADER, 427},
    {TYPE_BLOB, 24},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CDA20
MsgField GAME_SERVER_0428[10] = {
    {TYPE_MSG_HEADER, 428},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 122},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 122},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CDAB0
MsgField GAME_SERVER_0429[2] = {
    {TYPE_MSG_HEADER, 429},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CD9C0
MsgField GAME_SERVER_0430[3] = {
    {TYPE_MSG_HEADER, 430},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CD9F0
MsgField GAME_SERVER_0431[3] = {
    {TYPE_MSG_HEADER, 431},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CDB00
MsgField GAME_SERVER_0432[2] = {
    {TYPE_MSG_HEADER, 432},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003CDB80
MsgField GAME_SERVER_0433[2] = {
    {TYPE_MSG_HEADER, 433},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CDBB0
MsgField GAME_SERVER_0434[5] = {
    {TYPE_MSG_HEADER, 434},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003CDBE0
MsgField GAME_SERVER_0435[7] = {
    {TYPE_MSG_HEADER, 435},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
};

// Handler Rva: 003CDC20
MsgField GAME_SERVER_0436[13] = {
    {TYPE_MSG_HEADER, 436},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
};

// Handler Rva: 003CDCA0
MsgField GAME_SERVER_0437[2] = {
    {TYPE_MSG_HEADER, 437},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003CDD40
MsgField GAME_SERVER_0438[2] = {
    {TYPE_MSG_HEADER, 438},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003CDD70
MsgField GAME_SERVER_0439[4] = {
    {TYPE_MSG_HEADER, 439},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003D4BC0
MsgField GAME_SERVER_0440[3] = {
    {TYPE_MSG_HEADER, 440},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4BF0
MsgField GAME_SERVER_0441[7] = {
    {TYPE_MSG_HEADER, 441},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003D4C20
MsgField GAME_SERVER_0442[1] = {
    {TYPE_MSG_HEADER, 442},
};

// Handler Rva: 003D4C40
MsgField GAME_SERVER_0443[7] = {
    {TYPE_MSG_HEADER, 443},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003D4C70
MsgField GAME_SERVER_0444[1] = {
    {TYPE_MSG_HEADER, 444},
};

// Handler Rva: 003D4C90
MsgField GAME_SERVER_0445[2] = {
    {TYPE_MSG_HEADER, 445},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4CB0
MsgField GAME_SERVER_0446[2] = {
    {TYPE_MSG_HEADER, 446},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4CD0
MsgField GAME_SERVER_0447[1] = {
    {TYPE_MSG_HEADER, 447},
};

// Handler Rva: 003D4CF0
MsgField GAME_SERVER_0448[1] = {
    {TYPE_MSG_HEADER, 448},
};

// Handler Rva: 003D4D10
MsgField GAME_SERVER_0449[4] = {
    {TYPE_MSG_HEADER, 449},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003D4D40
MsgField GAME_SERVER_0450[2] = {
    {TYPE_MSG_HEADER, 450},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4D60
MsgField GAME_SERVER_0451[2] = {
    {TYPE_MSG_HEADER, 451},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003D4D80
MsgField GAME_SERVER_0452[2] = {
    {TYPE_MSG_HEADER, 452},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4DA0
MsgField GAME_SERVER_0453[6] = {
    {TYPE_MSG_HEADER, 453},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4DD0
MsgField GAME_SERVER_0454[3] = {
    {TYPE_MSG_HEADER, 454},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4E00
MsgField GAME_SERVER_0455[2] = {
    {TYPE_MSG_HEADER, 455},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4E20
MsgField GAME_SERVER_0456[6] = {
    {TYPE_MSG_HEADER, 456},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4E50
MsgField GAME_SERVER_0457[4] = {
    {TYPE_MSG_HEADER, 457},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4F20
MsgField GAME_SERVER_0458[2] = {
    {TYPE_MSG_HEADER, 458},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4F00
MsgField GAME_SERVER_0459[2] = {
    {TYPE_MSG_HEADER, 459},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4EA0
MsgField GAME_SERVER_0460[2] = {
    {TYPE_MSG_HEADER, 460},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4E80
MsgField GAME_SERVER_0461[2] = {
    {TYPE_MSG_HEADER, 461},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4EE0
MsgField GAME_SERVER_0462[2] = {
    {TYPE_MSG_HEADER, 462},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4EC0
MsgField GAME_SERVER_0463[2] = {
    {TYPE_MSG_HEADER, 463},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4F40
MsgField GAME_SERVER_0464[2] = {
    {TYPE_MSG_HEADER, 464},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4F60
MsgField GAME_SERVER_0465[4] = {
    {TYPE_MSG_HEADER, 465},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D4F90
MsgField GAME_SERVER_0466[3] = {
    {TYPE_MSG_HEADER, 466},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4FC0
MsgField GAME_SERVER_0467[3] = {
    {TYPE_MSG_HEADER, 467},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D4FF0
MsgField GAME_SERVER_0468[3] = {
    {TYPE_MSG_HEADER, 468},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D5020
MsgField GAME_SERVER_0469[3] = {
    {TYPE_MSG_HEADER, 469},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D5050
MsgField GAME_SERVER_0470[3] = {
    {TYPE_MSG_HEADER, 470},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D5080
MsgField GAME_SERVER_0471[4] = {
    {TYPE_MSG_HEADER, 471},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D50B0
MsgField GAME_SERVER_0472[2] = {
    {TYPE_MSG_HEADER, 472},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D50D0
MsgField GAME_SERVER_0473[2] = {
    {TYPE_MSG_HEADER, 473},
    {TYPE_WORD, 0},
};

// Handler Rva: 003CD550
MsgField GAME_SERVER_0474[2] = {
    {TYPE_MSG_HEADER, 474},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003D50F0
MsgField GAME_SERVER_0475[1] = {
    {TYPE_MSG_HEADER, 475},
};

// Handler Rva: 003D5110
MsgField GAME_SERVER_0476[2] = {
    {TYPE_MSG_HEADER, 476},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D5130
MsgField GAME_SERVER_0477[6] = {
    {TYPE_MSG_HEADER, 477},
    {TYPE_ARRAY_16, 16},
    {TYPE_NESTED_STRUCT, 16},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003D53B0
MsgField GAME_SERVER_0478[1] = {
    {TYPE_MSG_HEADER, 478},
};

// Handler Rva: 003D53D0
MsgField GAME_SERVER_0479[4] = {
    {TYPE_MSG_HEADER, 479},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003D5410
MsgField GAME_SERVER_0480[3] = {
    {TYPE_MSG_HEADER, 480},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D5480
MsgField GAME_SERVER_0481[3] = {
    {TYPE_MSG_HEADER, 481},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D54B0
MsgField GAME_SERVER_0482[3] = {
    {TYPE_MSG_HEADER, 482},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D54E0
MsgField GAME_SERVER_0483[14] = {
    {TYPE_MSG_HEADER, 483},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 20},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

// Handler Rva: 003D5550
MsgField GAME_SERVER_0484[2] = {
    {TYPE_MSG_HEADER, 484},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D5580
MsgField GAME_SERVER_0485[2] = {
    {TYPE_MSG_HEADER, 485},
    {TYPE_WORD, 0},
};

// Handler Rva: 003D55B0
MsgField GAME_SERVER_0486[4] = {
    {TYPE_MSG_HEADER, 486},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 00000000
MsgField GAME_SERVER_0487[1] = {
    {TYPE_MSG_HEADER, 487},
};

// Handler Rva: 003D55E0
MsgField GAME_SERVER_0488[4] = {
    {TYPE_MSG_HEADER, 488},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D5610
MsgField GAME_SERVER_0489[2] = {
    {TYPE_MSG_HEADER, 489},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D5630
MsgField GAME_SERVER_0490[2] = {
    {TYPE_MSG_HEADER, 490},
    {TYPE_STRING_16, 122},
};

// Handler Rva: 003D5660
MsgField GAME_SERVER_0491[2] = {
    {TYPE_MSG_HEADER, 491},
    {TYPE_BYTE, 0},
};

// Handler Rva: 003D5680
MsgField GAME_SERVER_0492[2] = {
    {TYPE_MSG_HEADER, 492},
    {TYPE_BYTE, 0},
};

MsgFormat AUTH_CLIENT_FORMATS[57] = {
// header | field_count | fields | max_size | name
    {0  , 2  , AUTH_CLIENT_0000, 6  , 0},
    {1  , 3  , AUTH_CLIENT_0001, 130, 0},
    {2  , 3  , AUTH_CLIENT_0002, 22 , 0},
    {3  , 5  , AUTH_CLIENT_0003, 206, 0},
    {4  , 7  , AUTH_CLIENT_0004, 238, 0},
    {5  , 6  , AUTH_CLIENT_0005, 178, 0},
    {6  , 3  , AUTH_CLIENT_0006, 10 , 0},
    {7  , 3  , AUTH_CLIENT_0007, 46 , 0},
    {8  , 3  , AUTH_CLIENT_0008, 46 , 0},
    {9  , 4  , AUTH_CLIENT_0009, 114, 0},
    {10 , 3  , AUTH_CLIENT_0010, 46 , 0},
    {11 , 5  , AUTH_CLIENT_0011, 18 , 0},
    {12 , 4  , AUTH_CLIENT_0012, 26 , 0},
    {13 , 2  , AUTH_CLIENT_0013, 6  , 0},
    {14 , 2  , AUTH_CLIENT_0014, 6  , 0},
    {15 , 3  , AUTH_CLIENT_0015, 114, 0},
    {16 , 2  , AUTH_CLIENT_0016, 6  , 0},
    {17 , 2  , AUTH_CLIENT_0017, 514, 0},
    {18 , 8  , AUTH_CLIENT_0018, 446, 0},
    {19 , 1  , AUTH_CLIENT_0019, 2  , 0},
    {20 , 6  , AUTH_CLIENT_0020, 778, 0},
    {21 , 2  , AUTH_CLIENT_0021, 6  , 0},
    {22 , 2  , AUTH_CLIENT_0022, 6  , 0},
    {23 , 2  , AUTH_CLIENT_0023, 6  , 0},
    {24 , 3  , AUTH_CLIENT_0024, 134, 0},
    {25 , 5  , AUTH_CLIENT_0025, 50 , 0},
    {26 , 5  , AUTH_CLIENT_0026, 90 , 0},
    {27 , 4  , AUTH_CLIENT_0027, 62 , 0},
    {28 , 3  , AUTH_CLIENT_0028, 58 , 0},
    {29 , 3  , AUTH_CLIENT_0029, 10 , 0},
    {30 , 4  , AUTH_CLIENT_0030, 62 , 0},
    {31 , 23 , AUTH_CLIENT_0031, 1386, 0},
    {32 , 3  , AUTH_CLIENT_0032, 522, 0},
    {33 , 3  , AUTH_CLIENT_0033, 10 , 0},
    {34 , 2  , AUTH_CLIENT_0034, 6  , 0},
    {35 , 2  , AUTH_CLIENT_0035, 6  , 0},
    {36 , 4  , AUTH_CLIENT_0036, 166, 0},
    {37 , 7  , AUTH_CLIENT_0037, 38 , 0},
    {38 , 2  , AUTH_CLIENT_0038, 3  , 0},
    {39 , 2  , AUTH_CLIENT_0039, 6  , 0},
    {40 , 9  , AUTH_CLIENT_0040, 382, 0},
    {41 , 7  , AUTH_CLIENT_0041, 26 , 0},
    {42 , 4  , AUTH_CLIENT_0042, 86 , 0},
    {43 , 4  , AUTH_CLIENT_0043, 1038, 0},
    {44 , 23 , AUTH_CLIENT_0044, 1898, 0},
    {45 , 2  , AUTH_CLIENT_0045, 6  , 0},
    {46 , 1  , AUTH_CLIENT_0046, 2  , 0},
    {47 , 1  , AUTH_CLIENT_0047, 2  , 0},
    {48 , 2  , AUTH_CLIENT_0048, 6  , 0},
    {49 , 2  , AUTH_CLIENT_0049, 6  , 0},
    {50 , 3  , AUTH_CLIENT_0050, 26 , 0},
    {51 , 6  , AUTH_CLIENT_0051, 54 , 0},
    {52 , 4  , AUTH_CLIENT_0052, 14 , 0},
    {53 , 2  , AUTH_CLIENT_0053, 6  , 0},
    {54 , 23 , AUTH_CLIENT_0054, 2142, 0},
    {55 , 4  , AUTH_CLIENT_0055, 86 , 0},
    {56 , 6  , AUTH_CLIENT_0056, 118, 0},
};

MsgFormat AUTH_SERVER_FORMATS[39] = {
// header | field_count | fields | max_size | name
    {0  , 2  , AUTH_SERVER_0000, 6  , 0},
    {1  , 5  , AUTH_SERVER_0001, 18 , 0},
    {2  , 3  , AUTH_SERVER_0002, 10 , 0},
    {3  , 3  , AUTH_SERVER_0003, 10 , 0},
    {4  , 3  , AUTH_SERVER_0004, 4102, 0},
    {5  , 9  , AUTH_SERVER_0005, 382, 0},
    {6  , 7  , AUTH_SERVER_0006, 42 , 0},
    {7  , 6  , AUTH_SERVER_0007, 134, 0},
    {8  , 5  , AUTH_SERVER_0008, 38 , 0},
    {9  , 6  , AUTH_SERVER_0009, 42 , 0},
    {10 , 5  , AUTH_SERVER_0010, 66 , 0},
    {11 , 5  , AUTH_SERVER_0011, 102, 0},
    {12 , 4  , AUTH_SERVER_0012, 558, 0},
    {13 , 5  , AUTH_SERVER_0013, 1034, 0},
    {14 , 4  , AUTH_SERVER_0014, 46 , 0},
    {15 , 1  , AUTH_SERVER_0015, 2  , 0},
    {16 , 7  , AUTH_SERVER_0016, 618, 0},
    {17 , 12 , AUTH_SERVER_0017, 275, 0},
    {18 , 7  , AUTH_SERVER_0018, 618, 0},
    {19 , 2  , AUTH_SERVER_0019, 6  , 0},
    {20 , 3  , AUTH_SERVER_0020, 10 , 0},
    {21 , 7  , AUTH_SERVER_0021, 34 , 0},
    {22 , 3  , AUTH_SERVER_0022, 2058, 0},
    {23 , 2  , AUTH_SERVER_0023, 4102, 0},
    {24 , 5  , AUTH_SERVER_0024, 226, 0},
    {25 , 1  , AUTH_SERVER_0025, 2  , 0},
    {26 , 5  , AUTH_SERVER_0026, 32 , 0},
    {27 , 5  , AUTH_SERVER_0027, 18 , 0},
    {28 , 3  , AUTH_SERVER_0028, 10 , 0},
    {29 , 4  , AUTH_SERVER_0029, 14 , 0},
    {30 , 10 , AUTH_SERVER_0030, 38 , 0},
    {31 , 4  , AUTH_SERVER_0031, 142, 0},
    {32 , 6  , AUTH_SERVER_0032, 50 , 0},
    {33 , 6  , AUTH_SERVER_0033, 50 , 0},
    {34 , 3  , AUTH_SERVER_0034, 18 , 0},
    {35 , 7  , AUTH_SERVER_0035, 90 , 0},
    {36 , 7  , AUTH_SERVER_0036, 94 , 0},
    {37 , 1  , AUTH_SERVER_0037, 2  , 0},
    {38 , 3  , AUTH_SERVER_0038, 10 , 0},
};

MsgFormat GAME_CLIENT_FORMATS[201] = {
// header | field_count | fields | max_size | name
    {0  , 2  , GAME_CLIENT_0000, 6  , 0},
    {1  , 1  , GAME_CLIENT_0001, 2  , 0},
    {2  , 3  , GAME_CLIENT_0002, 7  , 0},
    {3  , 2  , GAME_CLIENT_0003, 6  , 0},
    {4  , 1  , GAME_CLIENT_0004, 2  , 0},
    {5  , 3  , GAME_CLIENT_0005, 7  , 0},
    {6  , 1  , GAME_CLIENT_0006, 2  , 0},
    {7  , 1  , GAME_CLIENT_0007, 2  , 0},
    {8  , 1  , GAME_CLIENT_0008, 2  , 0},
    {9  , 1  , GAME_CLIENT_0009, 2  , 0},
    {10 , 1  , GAME_CLIENT_0010, 2  , 0},
    {11 , 2  , GAME_CLIENT_0011, 6  , 0},
    {12 , 1  , GAME_CLIENT_0012, 2  , 0},
    {13 , 1  , GAME_CLIENT_0013, 2  , 0},
    {14 , 4  , GAME_CLIENT_0014, 14 , 0},
    {15 , 1  , GAME_CLIENT_0015, 2  , 0},
    {16 , 4  , GAME_CLIENT_0016, 14 , 0},
    {17 , 4  , GAME_CLIENT_0017, 142, 0},
    {18 , 2  , GAME_CLIENT_0018, 6  , 0},
    {19 , 2  , GAME_CLIENT_0019, 6  , 0},
    {20 , 1  , GAME_CLIENT_0020, 2  , 0},
    {21 , 1  , GAME_CLIENT_0021, 2  , 0},
    {22 , 3  , GAME_CLIENT_0022, 7  , 0},
    {23 , 3  , GAME_CLIENT_0023, 10 , 0},
    {24 , 3  , GAME_CLIENT_0024, 10 , 0},
    {25 , 2  , GAME_CLIENT_0025, 6  , 0},
    {26 , 2  , GAME_CLIENT_0026, 6  , 0},
    {27 , 3  , GAME_CLIENT_0027, 10 , 0},
    {28 , 1  , GAME_CLIENT_0028, 2  , 0},
    {29 , 4  , GAME_CLIENT_0029, 18 , 0},
    {30 , 3  , GAME_CLIENT_0030, 14 , 0},
    {31 , 5  , GAME_CLIENT_0031, 18 , 0},
    {32 , 4  , GAME_CLIENT_0032, 14 , 0},
    {33 , 2  , GAME_CLIENT_0033, 4  , 0},
    {34 , 2  , GAME_CLIENT_0034, 4  , 0},
    {35 , 2  , GAME_CLIENT_0035, 3  , 0},
    {36 , 3  , GAME_CLIENT_0036, 10 , 0},
    {37 , 3  , GAME_CLIENT_0037, 10 , 0},
    {38 , 3  , GAME_CLIENT_0038, 7  , 0},
    {39 , 1  , GAME_CLIENT_0039, 2  , 0},
    {40 , 1  , GAME_CLIENT_0040, 2  , 0},
    {41 , 1  , GAME_CLIENT_0041, 2  , 0},
    {42 , 1  , GAME_CLIENT_0042, 2  , 0},
    {43 , 3  , GAME_CLIENT_0043, 10 , 0},
    {44 , 4  , GAME_CLIENT_0044, 14 , 0},
    {45 , 3  , GAME_CLIENT_0045, 7  , 0},
    {46 , 5  , GAME_CLIENT_0046, 15 , 0},
    {47 , 1  , GAME_CLIENT_0047, 2  , 0},
    {48 , 2  , GAME_CLIENT_0048, 6  , 0},
    {49 , 2  , GAME_CLIENT_0049, 6  , 0},
    {50 , 3  , GAME_CLIENT_0050, 74 , 0},
    {51 , 3  , GAME_CLIENT_0051, 7  , 0},
    {52 , 1  , GAME_CLIENT_0052, 2  , 0},
    {53 , 1  , GAME_CLIENT_0053, 2  , 0},
    {54 , 2  , GAME_CLIENT_0054, 6  , 0},
    {55 , 2  , GAME_CLIENT_0055, 6  , 0},
    {56 , 3  , GAME_CLIENT_0056, 10 , 0},
    {57 , 2  , GAME_CLIENT_0057, 3  , 0},
    {58 , 2  , GAME_CLIENT_0058, 6  , 0},
    {59 , 4  , GAME_CLIENT_0059, 27 , 0},
    {60 , 4  , GAME_CLIENT_0060, 11 , 0},
    {61 , 4  , GAME_CLIENT_0061, 82 , 0},
    {62 , 3  , GAME_CLIENT_0062, 26 , 0},
    {63 , 9  , GAME_CLIENT_0063, 14 , 0},
    {64 , 3  , GAME_CLIENT_0064, 7  , 0},
    {65 , 3  , GAME_CLIENT_0065, 26 , 0},
    {66 , 2  , GAME_CLIENT_0066, 6  , 0},
    {67 , 2  , GAME_CLIENT_0067, 6  , 0},
    {68 , 5  , GAME_CLIENT_0068, 26 , 0},
    {69 , 3  , GAME_CLIENT_0069, 14 , 0},
    {70 , 3  , GAME_CLIENT_0070, 7  , 0},
    {71 , 3  , GAME_CLIENT_0071, 10 , 0},
    {72 , 3  , GAME_CLIENT_0072, 7  , 0},
    {73 , 2  , GAME_CLIENT_0073, 6  , 0},
    {74 , 2  , GAME_CLIENT_0074, 3  , 0},
    {75 , 2  , GAME_CLIENT_0075, 6  , 0},
    {76 , 2  , GAME_CLIENT_0076, 262, 0},
    {77 , 5  , GAME_CLIENT_0077, 15 , 0},
    {78 , 3  , GAME_CLIENT_0078, 14 , 0},
    {79 , 3  , GAME_CLIENT_0079, 14 , 0},
    {80 , 2  , GAME_CLIENT_0080, 6  , 0},
    {81 , 6  , GAME_CLIENT_0081, 147, 0},
    {82 , 2  , GAME_CLIENT_0082, 3  , 0},
    {83 , 7  , GAME_CLIENT_0083, 148, 0},
    {84 , 8  , GAME_CLIENT_0084, 187, 0},
    {85 , 3  , GAME_CLIENT_0085, 247, 0},
    {86 , 4  , GAME_CLIENT_0086, 6  , 0},
    {87 , 5  , GAME_CLIENT_0087, 10 , 0},
    {88 , 3  , GAME_CLIENT_0088, 7  , 0},
    {89 , 3  , GAME_CLIENT_0089, 10 , 0},
    {90 , 2  , GAME_CLIENT_0090, 6  , 0},
    {91 , 8  , GAME_CLIENT_0091, 15 , 0},
    {92 , 2  , GAME_CLIENT_0092, 6  , 0},
    {93 , 3  , GAME_CLIENT_0093, 8  , 0},
    {94 , 3  , GAME_CLIENT_0094, 10 , 0},
    {95 , 2  , GAME_CLIENT_0095, 6  , 0},
    {96 , 1  , GAME_CLIENT_0096, 2  , 0},
    {97 , 1  , GAME_CLIENT_0097, 2  , 0},
    {98 , 2  , GAME_CLIENT_0098, 6  , 0},
    {99 , 5  , GAME_CLIENT_0099, 18 , 0},
    {100, 3  , GAME_CLIENT_0100, 42 , 0},
    {101, 6  , GAME_CLIENT_0101, 22 , 0},
    {102, 5  , GAME_CLIENT_0102, 18 , 0},
    {103, 3  , GAME_CLIENT_0103, 4  , 0},
    {104, 2  , GAME_CLIENT_0104, 66 , 0},
    {105, 3  , GAME_CLIENT_0105, 67 , 0},
    {106, 1  , GAME_CLIENT_0106, 2  , 0},
    {107, 3  , GAME_CLIENT_0107, 282, 0},
    {108, 2  , GAME_CLIENT_0108, 6  , 0},
    {109, 4  , GAME_CLIENT_0109, 11 , 0},
    {110, 5  , GAME_CLIENT_0110, 10 , 0},
    {111, 2  , GAME_CLIENT_0111, 4  , 0},
    {112, 2  , GAME_CLIENT_0112, 6  , 0},
    {113, 3  , GAME_CLIENT_0113, 26 , 0},
    {114, 3  , GAME_CLIENT_0114, 7  , 0},
    {115, 3  , GAME_CLIENT_0115, 10 , 0},
    {116, 3  , GAME_CLIENT_0116, 10 , 0},
    {117, 3  , GAME_CLIENT_0117, 10 , 0},
    {118, 3  , GAME_CLIENT_0118, 10 , 0},
    {119, 2  , GAME_CLIENT_0119, 6  , 0},
    {120, 5  , GAME_CLIENT_0120, 37 , 0},
    {121, 4  , GAME_CLIENT_0121, 9  , 0},
    {122, 2  , GAME_CLIENT_0122, 4  , 0},
    {123, 3  , GAME_CLIENT_0123, 4  , 0},
    {124, 5  , GAME_CLIENT_0124, 13 , 0},
    {125, 1  , GAME_CLIENT_0125, 2  , 0},
    {126, 4  , GAME_CLIENT_0126, 12 , 0},
    {127, 1  , GAME_CLIENT_0127, 2  , 0},
    {128, 1  , GAME_CLIENT_0128, 2  , 0},
    {129, 1  , GAME_CLIENT_0129, 2  , 0},
    {130, 2  , GAME_CLIENT_0130, 3  , 0},
    {131, 3  , GAME_CLIENT_0131, 10 , 0},
    {132, 4  , GAME_CLIENT_0132, 9  , 0},
    {133, 2  , GAME_CLIENT_0133, 6  , 0},
    {134, 3  , GAME_CLIENT_0134, 7  , 0},
    {135, 3  , GAME_CLIENT_0135, 8  , 0},
    {136, 1  , GAME_CLIENT_0136, 2  , 0},
    {137, 1  , GAME_CLIENT_0137, 2  , 0},
    {138, 2  , GAME_CLIENT_0138, 3  , 0},
    {139, 3  , GAME_CLIENT_0139, 4  , 0},
    {140, 2  , GAME_CLIENT_0140, 4  , 0},
    {141, 7  , GAME_CLIENT_0141, 21 , 0},
    {142, 4  , GAME_CLIENT_0142, 5  , 0},
    {143, 1  , GAME_CLIENT_0143, 2  , 0},
    {144, 1  , GAME_CLIENT_0144, 2  , 0},
    {145, 1  , GAME_CLIENT_0145, 2  , 0},
    {146, 3  , GAME_CLIENT_0146, 50 , 0},
    {147, 1  , GAME_CLIENT_0147, 2  , 0},
    {148, 3  , GAME_CLIENT_0148, 5  , 0},
    {149, 2  , GAME_CLIENT_0149, 6  , 0},
    {150, 1  , GAME_CLIENT_0150, 2  , 0},
    {151, 1  , GAME_CLIENT_0151, 2  , 0},
    {152, 2  , GAME_CLIENT_0152, 18 , 0},
    {153, 3  , GAME_CLIENT_0153, 4  , 0},
    {154, 2  , GAME_CLIENT_0154, 118, 0},
    {155, 2  , GAME_CLIENT_0155, 4  , 0},
    {156, 2  , GAME_CLIENT_0156, 3  , 0},
    {157, 2  , GAME_CLIENT_0157, 3  , 0},
    {158, 4  , GAME_CLIENT_0158, 9  , 0},
    {159, 1  , GAME_CLIENT_0159, 2  , 0},
    {160, 1  , GAME_CLIENT_0160, 2  , 0},
    {161, 1  , GAME_CLIENT_0161, 2  , 0},
    {162, 1  , GAME_CLIENT_0162, 2  , 0},
    {163, 2  , GAME_CLIENT_0163, 3  , 0},
    {164, 2  , GAME_CLIENT_0164, 4  , 0},
    {165, 2  , GAME_CLIENT_0165, 4  , 0},
    {166, 2  , GAME_CLIENT_0166, 4  , 0},
    {167, 2  , GAME_CLIENT_0167, 4  , 0},
    {168, 2  , GAME_CLIENT_0168, 4  , 0},
    {169, 2  , GAME_CLIENT_0169, 42 , 0},
    {170, 1  , GAME_CLIENT_0170, 2  , 0},
    {171, 1  , GAME_CLIENT_0171, 2  , 0},
    {172, 3  , GAME_CLIENT_0172, 131, 0},
    {173, 2  , GAME_CLIENT_0173, 3  , 0},
    {174, 4  , GAME_CLIENT_0174, 9  , 0},
    {175, 1  , GAME_CLIENT_0175, 2  , 0},
    {176, 2  , GAME_CLIENT_0176, 4  , 0},
    {177, 2  , GAME_CLIENT_0177, 4  , 0},
    {178, 4  , GAME_CLIENT_0178, 69 , 0},
    {179, 1  , GAME_CLIENT_0179, 2  , 0},
    {180, 2  , GAME_CLIENT_0180, 4  , 0},
    {181, 2  , GAME_CLIENT_0181, 4  , 0},
    {182, 2  , GAME_CLIENT_0182, 3  , 0},
    {183, 2  , GAME_CLIENT_0183, 3  , 0},
    {184, 3  , GAME_CLIENT_0184, 19 , 0},
    {185, 6  , GAME_CLIENT_0185, 9  , 0},
    {186, 2  , GAME_CLIENT_0186, 3  , 0},
    {187, 3  , GAME_CLIENT_0187, 46 , 0},
    {188, 3  , GAME_CLIENT_0188, 46 , 0},
    {189, 4  , GAME_CLIENT_0189, 71 , 0},
    {190, 4  , GAME_CLIENT_0190, 23 , 0},
    {191, 4  , GAME_CLIENT_0191, 23 , 0},
    {192, 3  , GAME_CLIENT_0192, 46 , 0},
    {193, 3  , GAME_CLIENT_0193, 8  , 0},
    {194, 3  , GAME_CLIENT_0194, 46 , 0},
    {195, 2  , GAME_CLIENT_0195, 6  , 0},
    {196, 2  , GAME_CLIENT_0196, 6  , 0},
    {197, 3  , GAME_CLIENT_0197, 46 , 0},
    {198, 3  , GAME_CLIENT_0198, 518, 0},
    {199, 4  , GAME_CLIENT_0199, 71 , 0},
    {200, 3  , GAME_CLIENT_0200, 67 , 0},
};

MsgFormat GAME_SERVER_FORMATS[493] = {
// header | field_count | fields | max_size | name
    {0  , 2  , GAME_SERVER_0000, 6  , 0},
    {1  , 2  , GAME_SERVER_0001, 3  , 0},
    {2  , 3  , GAME_SERVER_0002, 7  , 0},
    {3  , 2  , GAME_SERVER_0003, 6  , 0},
    {4  , 3  , GAME_SERVER_0004, 7  , 0},
    {5  , 2  , GAME_SERVER_0005, 6  , 0},
    {6  , 1  , GAME_SERVER_0006, 2  , 0},
    {7  , 1  , GAME_SERVER_0007, 2  , 0},
    {8  , 1  , GAME_SERVER_0008, 2  , 0},
    {9  , 1  , GAME_SERVER_0009, 2  , 0},
    {10 , 3  , GAME_SERVER_0010, 10 , 0},
    {11 , 2  , GAME_SERVER_0011, 6  , 0},
    {12 , 1  , GAME_SERVER_0012, 2  , 0},
    {13 , 2  , GAME_SERVER_0013, 6  , 0},
    {14 , 5  , GAME_SERVER_0014, 1034, 0},
    {15 , 1  , GAME_SERVER_0015, 2  , 0},
    {16 , 4  , GAME_SERVER_0016, 8  , 0},
    {17 , 2  , GAME_SERVER_0017, 3  , 0},
    {18 , 2  , GAME_SERVER_0018, 4  , 0},
    {19 , 2  , GAME_SERVER_0019, 4  , 0},
    {20 , 2  , GAME_SERVER_0020, 3  , 0},
    {21 , 4  , GAME_SERVER_0021, 11 , 0},
    {22 , 3  , GAME_SERVER_0022, 7  , 0},
    {23 , 2  , GAME_SERVER_0023, 246, 0},
    {24 , 6  , GAME_SERVER_0024, 13 , 0},
    {25 , 2  , GAME_SERVER_0025, 38 , 0},
    {26 , 5  , GAME_SERVER_0026, 265, 0},
    {27 , 4  , GAME_SERVER_0027, 264, 0},
    {28 , 1  , GAME_SERVER_0028, 2  , 0},
    {29 , 3  , GAME_SERVER_0029, 5  , 0},
    {30 , 2  , GAME_SERVER_0030, 518, 0},
    {31 , 2  , GAME_SERVER_0031, 6  , 0},
    {32 , 2  , GAME_SERVER_0032, 6  , 0},
    {33 , 24 , GAME_SERVER_0033, 99 , 0},
    {34 , 2  , GAME_SERVER_0034, 6  , 0},
    {35 , 3  , GAME_SERVER_0035, 10 , 0},
    {36 , 3  , GAME_SERVER_0036, 10 , 0},
    {37 , 3  , GAME_SERVER_0037, 10 , 0},
    {38 , 4  , GAME_SERVER_0038, 15 , 0},
    {39 , 3  , GAME_SERVER_0039, 7  , 0},
    {40 , 3  , GAME_SERVER_0040, 10 , 0},
    {41 , 2  , GAME_SERVER_0041, 6  , 0},
    {42 , 5  , GAME_SERVER_0042, 18 , 0},
    {43 , 6  , GAME_SERVER_0043, 22 , 0},
    {44 , 4  , GAME_SERVER_0044, 11 , 0},
    {45 , 4  , GAME_SERVER_0045, 16 , 0},
    {46 , 2  , GAME_SERVER_0046, 6  , 0},
    {47 , 4  , GAME_SERVER_0047, 14 , 0},
    {48 , 3  , GAME_SERVER_0048, 10 , 0},
    {49 , 8  , GAME_SERVER_0049, 90 , 0},
    {50 , 2  , GAME_SERVER_0050, 66 , 0},
    {51 , 7  , GAME_SERVER_0051, 26 , 0},
    {52 , 2  , GAME_SERVER_0052, 130, 0},
    {53 , 3  , GAME_SERVER_0053, 8  , 0},
    {54 , 4  , GAME_SERVER_0054, 14 , 0},
    {55 , 3  , GAME_SERVER_0055, 10 , 0},
    {56 , 4  , GAME_SERVER_0056, 8  , 0},
    {57 , 3  , GAME_SERVER_0057, 7  , 0},
    {58 , 3  , GAME_SERVER_0058, 7  , 0},
    {59 , 3  , GAME_SERVER_0059, 202, 0},
    {60 , 5  , GAME_SERVER_0060, 9  , 0},
    {61 , 5  , GAME_SERVER_0061, 279, 0},
    {62 , 2  , GAME_SERVER_0062, 6  , 0},
    {63 , 6  , GAME_SERVER_0063, 20 , 0},
    {64 , 3  , GAME_SERVER_0064, 10 , 0},
    {65 , 6  , GAME_SERVER_0065, 20 , 0},
    {66 , 6  , GAME_SERVER_0066, 20 , 0},
    {67 , 5  , GAME_SERVER_0067, 18 , 0},
    {68 , 3  , GAME_SERVER_0068, 10 , 0},
    {69 , 3  , GAME_SERVER_0069, 10 , 0},
    {70 , 4  , GAME_SERVER_0070, 14 , 0},
    {71 , 5  , GAME_SERVER_0071, 20 , 0},
    {72 , 3  , GAME_SERVER_0072, 7  , 0},
    {73 , 10 , GAME_SERVER_0073, 72 , 0},
    {74 , 2  , GAME_SERVER_0074, 6  , 0},
    {75 , 2  , GAME_SERVER_0075, 262, 0},
    {76 , 4  , GAME_SERVER_0076, 518, 0},
    {77 , 5  , GAME_SERVER_0077, 18 , 0},
    {78 , 4  , GAME_SERVER_0078, 14 , 0},
    {79 , 1  , GAME_SERVER_0079, 2  , 0},
    {80 , 7  , GAME_SERVER_0080, 60 , 0},
    {81 , 5  , GAME_SERVER_0081, 18 , 0},
    {82 , 2  , GAME_SERVER_0082, 6  , 0},
    {83 , 5  , GAME_SERVER_0083, 18 , 0},
    {84 , 3  , GAME_SERVER_0084, 262, 0},
    {85 , 1  , GAME_SERVER_0085, 2  , 0},
    {86 , 10 , GAME_SERVER_0086, 44 , 0},
    {87 , 3  , GAME_SERVER_0087, 42 , 0},
    {88 , 3  , GAME_SERVER_0088, 70 , 0},
    {89 , 8  , GAME_SERVER_0089, 87 , 0},
    {90 , 2  , GAME_SERVER_0090, 6  , 0},
    {91 , 2  , GAME_SERVER_0091, 6  , 0},
    {92 , 4  , GAME_SERVER_0092, 14 , 0},
    {93 , 2  , GAME_SERVER_0093, 246, 0},
    {94 , 3  , GAME_SERVER_0094, 5  , 0},
    {95 , 4  , GAME_SERVER_0095, 23 , 0},
    {96 , 4  , GAME_SERVER_0096, 79 , 0},
    {97 , 3  , GAME_SERVER_0097, 5  , 0},
    {98 , 3  , GAME_SERVER_0098, 10 , 0},
    {99 , 3  , GAME_SERVER_0099, 10 , 0},
    {100, 4  , GAME_SERVER_0100, 8  , 0},
    {101, 3  , GAME_SERVER_0101, 7  , 0},
    {102, 4  , GAME_SERVER_0102, 16 , 0},
    {103, 3  , GAME_SERVER_0103, 12 , 0},
    {104, 4  , GAME_SERVER_0104, 12 , 0},
    {105, 2  , GAME_SERVER_0105, 6  , 0},
    {106, 2  , GAME_SERVER_0106, 6  , 0},
    {107, 3  , GAME_SERVER_0107, 7  , 0},
    {108, 4  , GAME_SERVER_0108, 14 , 0},
    {109, 4  , GAME_SERVER_0109, 14 , 0},
    {110, 11 , GAME_SERVER_0110, 42 , 0},
    {111, 4  , GAME_SERVER_0111, 14 , 0},
    {112, 2  , GAME_SERVER_0112, 3  , 0},
    {113, 2  , GAME_SERVER_0113, 6  , 0},
    {114, 5  , GAME_SERVER_0114, 16 , 0},
    {115, 9  , GAME_SERVER_0115, 17 , 0},
    {116, 21 , GAME_SERVER_0116, 125, 0},
    {117, 2  , GAME_SERVER_0117, 6  , 0},
    {118, 2  , GAME_SERVER_0118, 4  , 0},
    {119, 2  , GAME_SERVER_0119, 4  , 0},
    {120, 8  , GAME_SERVER_0120, 391, 0},
    {121, 3  , GAME_SERVER_0121, 8  , 0},
    {122, 6  , GAME_SERVER_0122, 34 , 0},
    {123, 2  , GAME_SERVER_0123, 6  , 0},
    {124, 2  , GAME_SERVER_0124, 6  , 0},
    {125, 2  , GAME_SERVER_0125, 6  , 0},
    {126, 5  , GAME_SERVER_0126, 267, 0},
    {127, 1  , GAME_SERVER_0127, 2  , 0},
    {128, 2  , GAME_SERVER_0128, 246, 0},
    {129, 2  , GAME_SERVER_0129, 6  , 0},
    {130, 3  , GAME_SERVER_0130, 8  , 0},
    {131, 4  , GAME_SERVER_0131, 11 , 0},
    {132, 2  , GAME_SERVER_0132, 70 , 0},
    {133, 2  , GAME_SERVER_0133, 3  , 0},
    {134, 2  , GAME_SERVER_0134, 3  , 0},
    {135, 19 , GAME_SERVER_0135, 46 , 0},
    {136, 2  , GAME_SERVER_0136, 3  , 0},
    {137, 4  , GAME_SERVER_0137, 23 , 0},
    {138, 2  , GAME_SERVER_0138, 262, 0},
    {139, 4  , GAME_SERVER_0139, 14 , 0},
    {140, 3  , GAME_SERVER_0140, 10 , 0},
    {141, 8  , GAME_SERVER_0141, 41 , 0},
    {142, 1  , GAME_SERVER_0142, 2  , 0},
    {143, 2  , GAME_SERVER_0143, 6  , 0},
    {144, 3  , GAME_SERVER_0144, 7  , 0},
    {145, 3  , GAME_SERVER_0145, 10 , 0},
    {146, 4  , GAME_SERVER_0146, 76 , 0},
    {147, 3  , GAME_SERVER_0147, 10 , 0},
    {148, 3  , GAME_SERVER_0148, 10 , 0},
    {149, 6  , GAME_SERVER_0149, 662, 0},
    {150, 3  , GAME_SERVER_0150, 8  , 0},
    {151, 6  , GAME_SERVER_0151, 22 , 0},
    {152, 3  , GAME_SERVER_0152, 259, 0},
    {153, 5  , GAME_SERVER_0153, 15 , 0},
    {154, 3  , GAME_SERVER_0154, 5  , 0},
    {155, 3  , GAME_SERVER_0155, 10 , 0},
    {156, 3  , GAME_SERVER_0156, 70 , 0},
    {157, 3  , GAME_SERVER_0157, 10 , 0},
    {158, 4  , GAME_SERVER_0158, 14 , 0},
    {159, 5  , GAME_SERVER_0159, 315, 0},
    {160, 4  , GAME_SERVER_0160, 14 , 0},
    {161, 5  , GAME_SERVER_0161, 18 , 0},
    {162, 7  , GAME_SERVER_0162, 20 , 0},
    {163, 4  , GAME_SERVER_0163, 14 , 0},
    {164, 5  , GAME_SERVER_0164, 18 , 0},
    {165, 8  , GAME_SERVER_0165, 29 , 0},
    {166, 3  , GAME_SERVER_0166, 250, 0},
    {167, 4  , GAME_SERVER_0167, 8  , 0},
    {168, 4  , GAME_SERVER_0168, 14 , 0},
    {169, 4  , GAME_SERVER_0169, 16 , 0},
    {170, 3  , GAME_SERVER_0170, 10 , 0},
    {171, 4  , GAME_SERVER_0171, 14 , 0},
    {172, 1  , GAME_SERVER_0172, 2  , 0},
    {173, 3  , GAME_SERVER_0173, 7  , 0},
    {174, 3  , GAME_SERVER_0174, 7  , 0},
    {175, 3  , GAME_SERVER_0175, 10 , 0},
    {176, 2  , GAME_SERVER_0176, 66 , 0},
    {177, 3  , GAME_SERVER_0177, 5  , 0},
    {178, 3  , GAME_SERVER_0178, 6  , 0},
    {179, 7  , GAME_SERVER_0179, 86 , 0},
    {180, 2  , GAME_SERVER_0180, 6  , 0},
    {181, 3  , GAME_SERVER_0181, 70 , 0},
    {182, 2  , GAME_SERVER_0182, 262, 0},
    {183, 3  , GAME_SERVER_0183, 10 , 0},
    {184, 5  , GAME_SERVER_0184, 9  , 0},
    {185, 1  , GAME_SERVER_0185, 2  , 0},
    {186, 3  , GAME_SERVER_0186, 262, 0},
    {187, 1  , GAME_SERVER_0187, 2  , 0},
    {188, 4  , GAME_SERVER_0188, 266, 0},
    {189, 2  , GAME_SERVER_0189, 6  , 0},
    {190, 3  , GAME_SERVER_0190, 262, 0},
    {191, 2  , GAME_SERVER_0191, 6  , 0},
    {192, 2  , GAME_SERVER_0192, 262, 0},
    {193, 6  , GAME_SERVER_0193, 526, 0},
    {194, 3  , GAME_SERVER_0194, 10 , 0},
    {195, 3  , GAME_SERVER_0195, 10 , 0},
    {196, 3  , GAME_SERVER_0196, 7  , 0},
    {197, 2  , GAME_SERVER_0197, 6  , 0},
    {198, 3  , GAME_SERVER_0198, 247, 0},
    {199, 3  , GAME_SERVER_0199, 7  , 0},
    {200, 4  , GAME_SERVER_0200, 75 , 0},
    {201, 4  , GAME_SERVER_0201, 11 , 0},
    {202, 3  , GAME_SERVER_0202, 4  , 0},
    {203, 3  , GAME_SERVER_0203, 7  , 0},
    {204, 2  , GAME_SERVER_0204, 3  , 0},
    {205, 2  , GAME_SERVER_0205, 3  , 0},
    {206, 5  , GAME_SERVER_0206, 9  , 0},
    {207, 3  , GAME_SERVER_0207, 10 , 0},
    {208, 3  , GAME_SERVER_0208, 10 , 0},
    {209, 2  , GAME_SERVER_0209, 6  , 0},
    {210, 5  , GAME_SERVER_0210, 16 , 0},
    {211, 4  , GAME_SERVER_0211, 12 , 0},
    {212, 2  , GAME_SERVER_0212, 518, 0},
    {213, 1  , GAME_SERVER_0213, 2  , 0},
    {214, 1  , GAME_SERVER_0214, 2  , 0},
    {215, 4  , GAME_SERVER_0215, 10 , 0},
    {216, 2  , GAME_SERVER_0216, 38 , 0},
    {217, 2  , GAME_SERVER_0217, 22 , 0},
    {218, 5  , GAME_SERVER_0218, 13 , 0},
    {219, 5  , GAME_SERVER_0219, 79 , 0},
    {220, 2  , GAME_SERVER_0220, 518, 0},
    {221, 3  , GAME_SERVER_0221, 8  , 0},
    {222, 3  , GAME_SERVER_0222, 8  , 0},
    {223, 2  , GAME_SERVER_0223, 4  , 0},
    {224, 3  , GAME_SERVER_0224, 10 , 0},
    {225, 3  , GAME_SERVER_0225, 71 , 0},
    {226, 2  , GAME_SERVER_0226, 3  , 0},
    {227, 4  , GAME_SERVER_0227, 12 , 0},
    {228, 4  , GAME_SERVER_0228, 12 , 0},
    {229, 4  , GAME_SERVER_0229, 12 , 0},
    {230, 5  , GAME_SERVER_0230, 16 , 0},
    {231, 4  , GAME_SERVER_0231, 12 , 0},
    {232, 4  , GAME_SERVER_0232, 12 , 0},
    {233, 6  , GAME_SERVER_0233, 20 , 0},
    {234, 16 , GAME_SERVER_0234, 62 , 0},
    {235, 2  , GAME_SERVER_0235, 6  , 0},
    {236, 2  , GAME_SERVER_0236, 6  , 0},
    {237, 2  , GAME_SERVER_0237, 6  , 0},
    {238, 2  , GAME_SERVER_0238, 6  , 0},
    {239, 3  , GAME_SERVER_0239, 10 , 0},
    {240, 3  , GAME_SERVER_0240, 10 , 0},
    {241, 3  , GAME_SERVER_0241, 10 , 0},
    {242, 3  , GAME_SERVER_0242, 10 , 0},
    {243, 2  , GAME_SERVER_0243, 6  , 0},
    {244, 5  , GAME_SERVER_0244, 30 , 0},
    {245, 3  , GAME_SERVER_0245, 8  , 0},
    {246, 3  , GAME_SERVER_0246, 10 , 0},
    {247, 12 , GAME_SERVER_0247, 70 , 0},
    {248, 3  , GAME_SERVER_0248, 10 , 0},
    {249, 2  , GAME_SERVER_0249, 6  , 0},
    {250, 2  , GAME_SERVER_0250, 70 , 0},
    {251, 2  , GAME_SERVER_0251, 134, 0},
    {252, 4  , GAME_SERVER_0252, 12 , 0},
    {253, 3  , GAME_SERVER_0253, 10 , 0},
    {254, 3  , GAME_SERVER_0254, 67 , 0},
    {255, 1  , GAME_SERVER_0255, 2  , 0},
    {256, 1  , GAME_SERVER_0256, 2  , 0},
    {257, 3  , GAME_SERVER_0257, 4  , 0},
    {258, 2  , GAME_SERVER_0258, 3  , 0},
    {259, 2  , GAME_SERVER_0259, 3  , 0},
    {260, 4  , GAME_SERVER_0260, 168, 0},
    {261, 1  , GAME_SERVER_0261, 2  , 0},
    {262, 2  , GAME_SERVER_0262, 1030, 0},
    {263, 1  , GAME_SERVER_0263, 2  , 0},
    {264, 1  , GAME_SERVER_0264, 2  , 0},
    {265, 2  , GAME_SERVER_0265, 6  , 0},
    {266, 6  , GAME_SERVER_0266, 79 , 0},
    {267, 2  , GAME_SERVER_0267, 6  , 0},
    {268, 3  , GAME_SERVER_0268, 250, 0},
    {269, 5  , GAME_SERVER_0269, 253, 0},
    {270, 2  , GAME_SERVER_0270, 246, 0},
    {271, 2  , GAME_SERVER_0271, 6  , 0},
    {272, 2  , GAME_SERVER_0272, 6  , 0},
    {273, 4  , GAME_SERVER_0273, 9  , 0},
    {274, 3  , GAME_SERVER_0274, 5  , 0},
    {275, 3  , GAME_SERVER_0275, 8  , 0},
    {276, 4  , GAME_SERVER_0276, 12 , 0},
    {277, 3  , GAME_SERVER_0277, 7  , 0},
    {278, 3  , GAME_SERVER_0278, 70 , 0},
    {279, 3  , GAME_SERVER_0279, 10 , 0},
    {280, 3  , GAME_SERVER_0280, 10 , 0},
    {281, 5  , GAME_SERVER_0281, 25 , 0},
    {282, 2  , GAME_SERVER_0282, 18 , 0},
    {283, 4  , GAME_SERVER_0283, 21 , 0},
    {284, 1  , GAME_SERVER_0284, 2  , 0},
    {285, 14 , GAME_SERVER_0285, 94 , 0},
    {286, 3  , GAME_SERVER_0286, 7  , 0},
    {287, 1  , GAME_SERVER_0287, 2  , 0},
    {288, 2  , GAME_SERVER_0288, 3  , 0},
    {289, 3  , GAME_SERVER_0289, 8  , 0},
    {290, 3  , GAME_SERVER_0290, 134, 0},
    {291, 16 , GAME_SERVER_0291, 111, 0},
    {292, 20 , GAME_SERVER_0292, 124, 0},
    {293, 4  , GAME_SERVER_0293, 9  , 0},
    {294, 8  , GAME_SERVER_0294, 143, 0},
    {295, 3  , GAME_SERVER_0295, 19 , 0},
    {296, 3  , GAME_SERVER_0296, 8  , 0},
    {297, 3  , GAME_SERVER_0297, 5  , 0},
    {298, 10 , GAME_SERVER_0298, 267, 0},
    {299, 2  , GAME_SERVER_0299, 42 , 0},
    {300, 2  , GAME_SERVER_0300, 42 , 0},
    {301, 2  , GAME_SERVER_0301, 42 , 0},
    {302, 3  , GAME_SERVER_0302, 134, 0},
    {303, 3  , GAME_SERVER_0303, 10 , 0},
    {304, 2  , GAME_SERVER_0304, 3  , 0},
    {305, 2  , GAME_SERVER_0305, 4  , 0},
    {306, 3  , GAME_SERVER_0306, 554, 0},
    {307, 3  , GAME_SERVER_0307, 8  , 0},
    {308, 1  , GAME_SERVER_0308, 2  , 0},
    {309, 3  , GAME_SERVER_0309, 7  , 0},
    {310, 2  , GAME_SERVER_0310, 6  , 0},
    {311, 1  , GAME_SERVER_0311, 2  , 0},
    {312, 4  , GAME_SERVER_0312, 12 , 0},
    {313, 2  , GAME_SERVER_0313, 6  , 0},
    {314, 3  , GAME_SERVER_0314, 10 , 0},
    {315, 7  , GAME_SERVER_0315, 71 , 0},
    {316, 3  , GAME_SERVER_0316, 10 , 0},
    {317, 3  , GAME_SERVER_0317, 70 , 0},
    {318, 3  , GAME_SERVER_0318, 10 , 0},
    {319, 3  , GAME_SERVER_0319, 7  , 0},
    {320, 4  , GAME_SERVER_0320, 9  , 0},
    {321, 5  , GAME_SERVER_0321, 11 , 0},
    {322, 7  , GAME_SERVER_0322, 13 , 0},
    {323, 3  , GAME_SERVER_0323, 8  , 0},
    {324, 3  , GAME_SERVER_0324, 8  , 0},
    {325, 2  , GAME_SERVER_0325, 4  , 0},
    {326, 3  , GAME_SERVER_0326, 6  , 0},
    {327, 3  , GAME_SERVER_0327, 5  , 0},
    {328, 2  , GAME_SERVER_0328, 4  , 0},
    {329, 6  , GAME_SERVER_0329, 12 , 0},
    {330, 5  , GAME_SERVER_0330, 13 , 0},
    {331, 3  , GAME_SERVER_0331, 5  , 0},
    {332, 4  , GAME_SERVER_0332, 7  , 0},
    {333, 1  , GAME_SERVER_0333, 2  , 0},
    {334, 5  , GAME_SERVER_0334, 11 , 0},
    {335, 4  , GAME_SERVER_0335, 6  , 0},
    {336, 3  , GAME_SERVER_0336, 8  , 0},
    {337, 3  , GAME_SERVER_0337, 6  , 0},
    {338, 3  , GAME_SERVER_0338, 8  , 0},
    {339, 3  , GAME_SERVER_0339, 8  , 0},
    {340, 3  , GAME_SERVER_0340, 8  , 0},
    {341, 4  , GAME_SERVER_0341, 12 , 0},
    {342, 1  , GAME_SERVER_0342, 2  , 0},
    {343, 5  , GAME_SERVER_0343, 11 , 0},
    {344, 4  , GAME_SERVER_0344, 8  , 0},
    {345, 3  , GAME_SERVER_0345, 10 , 0},
    {346, 2  , GAME_SERVER_0346, 6  , 0},
    {347, 5  , GAME_SERVER_0347, 18 , 0},
    {348, 3  , GAME_SERVER_0348, 4  , 0},
    {349, 3  , GAME_SERVER_0349, 8  , 0},
    {350, 3  , GAME_SERVER_0350, 7  , 0},
    {351, 3  , GAME_SERVER_0351, 10 , 0},
    {352, 10 , GAME_SERVER_0352, 92 , 0},
    {353, 3  , GAME_SERVER_0353, 10 , 0},
    {354, 10 , GAME_SERVER_0354, 25 , 0},
    {355, 10 , GAME_SERVER_0355, 25 , 0},
    {356, 7  , GAME_SERVER_0356, 402, 0},
    {357, 15 , GAME_SERVER_0357, 421, 0},
    {358, 15 , GAME_SERVER_0358, 421, 0},
    {359, 4  , GAME_SERVER_0359, 24 , 0},
    {360, 1  , GAME_SERVER_0360, 2  , 0},
    {361, 1  , GAME_SERVER_0361, 2  , 0},
    {362, 1  , GAME_SERVER_0362, 2  , 0},
    {363, 2  , GAME_SERVER_0363, 3  , 0},
    {364, 3  , GAME_SERVER_0364, 6  , 0},
    {365, 3  , GAME_SERVER_0365, 7  , 0},
    {366, 4  , GAME_SERVER_0366, 24 , 0},
    {367, 1  , GAME_SERVER_0367, 2  , 0},
    {368, 1  , GAME_SERVER_0368, 2  , 0},
    {369, 2  , GAME_SERVER_0369, 3  , 0},
    {370, 1  , GAME_SERVER_0370, 2  , 0},
    {371, 1  , GAME_SERVER_0371, 2  , 0},
    {372, 2  , GAME_SERVER_0372, 3  , 0},
    {373, 1  , GAME_SERVER_0373, 2  , 0},
    {374, 1  , GAME_SERVER_0374, 2  , 0},
    {375, 24 , GAME_SERVER_0375, 57 , 0},
    {376, 2  , GAME_SERVER_0376, 6  , 0},
    {377, 2  , GAME_SERVER_0377, 6  , 0},
    {378, 24 , GAME_SERVER_0378, 57 , 0},
    {379, 5  , GAME_SERVER_0379, 137, 0},
    {380, 3  , GAME_SERVER_0380, 8  , 0},
    {381, 5  , GAME_SERVER_0381, 137, 0},
    {382, 21 , GAME_SERVER_0382, 175, 0},
    {383, 4  , GAME_SERVER_0383, 9  , 0},
    {384, 2  , GAME_SERVER_0384, 3  , 0},
    {385, 1  , GAME_SERVER_0385, 2  , 0},
    {386, 5  , GAME_SERVER_0386, 6  , 0},
    {387, 2  , GAME_SERVER_0387, 42 , 0},
    {388, 1  , GAME_SERVER_0388, 2  , 0},
    {389, 1  , GAME_SERVER_0389, 2  , 0},
    {390, 2  , GAME_SERVER_0390, 6  , 0},
    {391, 5  , GAME_SERVER_0391, 255, 0},
    {392, 2  , GAME_SERVER_0392, 6  , 0},
    {393, 3  , GAME_SERVER_0393, 247, 0},
    {394, 3  , GAME_SERVER_0394, 262, 0},
    {395, 3  , GAME_SERVER_0395, 770, 0},
    {396, 3  , GAME_SERVER_0396, 262, 0},
    {397, 2  , GAME_SERVER_0397, 6  , 0},
    {398, 5  , GAME_SERVER_0398, 1088, 0},
    {399, 1  , GAME_SERVER_0399, 2  , 0},
    {400, 1  , GAME_SERVER_0400, 2  , 0},
    {401, 2  , GAME_SERVER_0401, 6  , 0},
    {402, 2  , GAME_SERVER_0402, 3  , 0},
    {403, 2  , GAME_SERVER_0403, 4  , 0},
    {404, 1  , GAME_SERVER_0404, 2  , 0},
    {405, 4  , GAME_SERVER_0405, 10 , 0},
    {406, 3  , GAME_SERVER_0406, 7  , 0},
    {407, 2  , GAME_SERVER_0407, 4  , 0},
    {408, 9  , GAME_SERVER_0408, 463, 0},
    {409, 3  , GAME_SERVER_0409, 5  , 0},
    {410, 2  , GAME_SERVER_0410, 3  , 0},
    {411, 7  , GAME_SERVER_0411, 26 , 0},
    {412, 2  , GAME_SERVER_0412, 1030, 0},
    {413, 4  , GAME_SERVER_0413, 9  , 0},
    {414, 2  , GAME_SERVER_0414, 3  , 0},
    {415, 7  , GAME_SERVER_0415, 15 , 0},
    {416, 2  , GAME_SERVER_0416, 6  , 0},
    {417, 2  , GAME_SERVER_0417, 4  , 0},
    {418, 2  , GAME_SERVER_0418, 246, 0},
    {419, 18 , GAME_SERVER_0419, 229, 0},
    {420, 1  , GAME_SERVER_0420, 2  , 0},
    {421, 4  , GAME_SERVER_0421, 102, 0},
    {422, 9  , GAME_SERVER_0422, 508, 0},
    {423, 2  , GAME_SERVER_0423, 3  , 0},
    {424, 7  , GAME_SERVER_0424, 20 , 0},
    {425, 4  , GAME_SERVER_0425, 491, 0},
    {426, 14 , GAME_SERVER_0426, 79 , 0},
    {427, 7  , GAME_SERVER_0427, 38 , 0},
    {428, 10 , GAME_SERVER_0428, 506, 0},
    {429, 2  , GAME_SERVER_0429, 3  , 0},
    {430, 3  , GAME_SERVER_0430, 7  , 0},
    {431, 3  , GAME_SERVER_0431, 7  , 0},
    {432, 2  , GAME_SERVER_0432, 3  , 0},
    {433, 2  , GAME_SERVER_0433, 6  , 0},
    {434, 5  , GAME_SERVER_0434, 52 , 0},
    {435, 7  , GAME_SERVER_0435, 51 , 0},
    {436, 13 , GAME_SERVER_0436, 96 , 0},
    {437, 2  , GAME_SERVER_0437, 246, 0},
    {438, 2  , GAME_SERVER_0438, 6  , 0},
    {439, 4  , GAME_SERVER_0439, 9  , 0},
    {440, 3  , GAME_SERVER_0440, 5  , 0},
    {441, 7  , GAME_SERVER_0441, 77 , 0},
    {442, 1  , GAME_SERVER_0442, 2  , 0},
    {443, 7  , GAME_SERVER_0443, 77 , 0},
    {444, 1  , GAME_SERVER_0444, 2  , 0},
    {445, 2  , GAME_SERVER_0445, 3  , 0},
    {446, 2  , GAME_SERVER_0446, 3  , 0},
    {447, 1  , GAME_SERVER_0447, 2  , 0},
    {448, 1  , GAME_SERVER_0448, 2  , 0},
    {449, 4  , GAME_SERVER_0449, 249, 0},
    {450, 2  , GAME_SERVER_0450, 3  , 0},
    {451, 2  , GAME_SERVER_0451, 6  , 0},
    {452, 2  , GAME_SERVER_0452, 3  , 0},
    {453, 6  , GAME_SERVER_0453, 48 , 0},
    {454, 3  , GAME_SERVER_0454, 6  , 0},
    {455, 2  , GAME_SERVER_0455, 4  , 0},
    {456, 6  , GAME_SERVER_0456, 10 , 0},
    {457, 4  , GAME_SERVER_0457, 8  , 0},
    {458, 2  , GAME_SERVER_0458, 4  , 0},
    {459, 2  , GAME_SERVER_0459, 4  , 0},
    {460, 2  , GAME_SERVER_0460, 4  , 0},
    {461, 2  , GAME_SERVER_0461, 4  , 0},
    {462, 2  , GAME_SERVER_0462, 4  , 0},
    {463, 2  , GAME_SERVER_0463, 4  , 0},
    {464, 2  , GAME_SERVER_0464, 3  , 0},
    {465, 4  , GAME_SERVER_0465, 7  , 0},
    {466, 3  , GAME_SERVER_0466, 6  , 0},
    {467, 3  , GAME_SERVER_0467, 6  , 0},
    {468, 3  , GAME_SERVER_0468, 6  , 0},
    {469, 3  , GAME_SERVER_0469, 6  , 0},
    {470, 3  , GAME_SERVER_0470, 6  , 0},
    {471, 4  , GAME_SERVER_0471, 7  , 0},
    {472, 2  , GAME_SERVER_0472, 4  , 0},
    {473, 2  , GAME_SERVER_0473, 4  , 0},
    {474, 2  , GAME_SERVER_0474, 246, 0},
    {475, 1  , GAME_SERVER_0475, 2  , 0},
    {476, 2  , GAME_SERVER_0476, 3  , 0},
    {477, 6  , GAME_SERVER_0477, 234, 0},
    {478, 1  , GAME_SERVER_0478, 2  , 0},
    {479, 4  , GAME_SERVER_0479, 248, 0},
    {480, 3  , GAME_SERVER_0480, 5  , 0},
    {481, 3  , GAME_SERVER_0481, 6  , 0},
    {482, 3  , GAME_SERVER_0482, 6  , 0},
    {483, 14 , GAME_SERVER_0483, 122, 0},
    {484, 2  , GAME_SERVER_0484, 4  , 0},
    {485, 2  , GAME_SERVER_0485, 4  , 0},
    {486, 4  , GAME_SERVER_0486, 6  , 0},
    {487, 1  , GAME_SERVER_0487, 2  , 0},
    {488, 4  , GAME_SERVER_0488, 6  , 0},
    {489, 2  , GAME_SERVER_0489, 3  , 0},
    {490, 2  , GAME_SERVER_0490, 246, 0},
    {491, 2  , GAME_SERVER_0491, 3  , 0},
    {492, 2  , GAME_SERVER_0492, 3  , 0},
};
