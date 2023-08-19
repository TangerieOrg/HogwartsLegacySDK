#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FWorldFXSpawnOverrideTransform {
    FVector Position; // 0x0
    FRotator Rotator; // 0xc
    FVector Scale; // 0x18
    bool bOverride_Position; // 0x24
    bool bOverride_Rotator; // 0x25
    bool bOverride_Scale; // 0x26
    char pad_27[0x1];
}; // Size: 0x28
#pragma pack(pop)
