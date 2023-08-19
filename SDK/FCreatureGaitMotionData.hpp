#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCreatureGaitMotionData {
    float StoppingDistance; // 0x0
    float TurnRadius; // 0x4
    float TurnRadius180; // 0x8
    float TurnLength180; // 0xc
}; // Size: 0x10
#pragma pack(pop)
