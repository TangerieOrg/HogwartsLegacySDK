#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNavAgentSelector {
    uint8_t bSupportsAgent0 : 1; // 0x0
    uint8_t bSupportsAgent1 : 1; // 0x0
    uint8_t bSupportsAgent2 : 1; // 0x0
    uint8_t bSupportsAgent3 : 1; // 0x0
    uint8_t bSupportsAgent4 : 1; // 0x0
    uint8_t bSupportsAgent5 : 1; // 0x0
    uint8_t bSupportsAgent6 : 1; // 0x0
    uint8_t bSupportsAgent7 : 1; // 0x0
    uint8_t bSupportsAgent8 : 1; // 0x1
    uint8_t bSupportsAgent9 : 1; // 0x1
    uint8_t bSupportsAgent10 : 1; // 0x1
    uint8_t bSupportsAgent11 : 1; // 0x1
    uint8_t bSupportsAgent12 : 1; // 0x1
    uint8_t bSupportsAgent13 : 1; // 0x1
    uint8_t bSupportsAgent14 : 1; // 0x1
    uint8_t bSupportsAgent15 : 1; // 0x1
    char pad_2[0x2];
}; // Size: 0x4
#pragma pack(pop)
