#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAISenseAffiliationFilter {
    uint8_t bDetectEnemies : 1; // 0x0
    uint8_t bDetectNeutrals : 1; // 0x0
    uint8_t bDetectFriendlies : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
