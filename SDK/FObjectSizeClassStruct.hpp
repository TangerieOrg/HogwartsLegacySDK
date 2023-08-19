#pragma once
#include <cstdint>
#include "ENoiseSize.hpp"
#include "FTableRowBase.hpp"
class UClass;
#pragma pack(push, 1)
struct FObjectSizeClassStruct : public FTableRowBase {
    float Width; // 0x8
    float DamagePerSecondMultiplier; // 0xc
    UClass* OnFireDestroyedAOE; // 0x10
    float OnFireDestroyedDamage; // 0x18
    ENoiseSize ObjectNoiseSize; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
