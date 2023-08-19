#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMercunaWorldData {
    FString MapPath; // 0x0
    FVector Position; // 0x10
    uint16_t Yaw; // 0x1c
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
