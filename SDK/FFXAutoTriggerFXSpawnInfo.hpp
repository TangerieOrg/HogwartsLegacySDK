#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FFXAutoTriggerFXSpawnInfo {
    char pad_0[0x8];
    FVector Location; // 0x8
    FRotator Rotation; // 0x14
    FName AttachPointName; // 0x20
}; // Size: 0x28
#pragma pack(pop)
