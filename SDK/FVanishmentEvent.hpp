#pragma once
#include <cstdint>
#include "EVanishmentEventType.hpp"
#pragma pack(push, 1)
struct FVanishmentEvent {
    FName SurfaceTag; // 0x0
    EVanishmentEventType EventType; // 0x8
    char pad_9[0x3];
    float DesiredDurationSeconds; // 0xc
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
