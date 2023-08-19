#pragma once
#include <cstdint>
#include "ETickingGroup.hpp"
#pragma pack(push, 1)
struct FTickFunction {
    char pad_0[0x8];
    ETickingGroup TickGroup; // 0x8
    ETickingGroup EndTickGroup; // 0x9
    uint8_t bTickEvenWhenPaused : 1; // 0xa
    uint8_t bCanEverTick : 1; // 0xa
    uint8_t bStartWithTickEnabled : 1; // 0xa
    uint8_t bAllowTickOnDedicatedServer : 1; // 0xa
    uint8_t pad_bitfield_a_4 : 4;
    char pad_b[0x1];
    float TickInterval; // 0xc
    char pad_10[0x30];
}; // Size: 0x40
#pragma pack(pop)
