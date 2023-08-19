#pragma once
#include <cstdint>
#include "EEnemy_AttackApparateMode.hpp"
#include "FEnemy_AttackSpecificData.hpp"
class UClass;
#pragma pack(push, 1)
struct FEnemy_ApparateToData : public FEnemy_AttackSpecificData {
    char pad_1[0x7];
    UClass* ApparateAbilityPtr; // 0x8
    EEnemy_AttackApparateMode ApparateMode; // 0x10
    char pad_11[0x3];
    float RangeMin; // 0x14
    float RangeMax; // 0x18
    float DistTolerance; // 0x1c
    float TravelSpeed; // 0x20
    float OffsetZDist; // 0x24
}; // Size: 0x28
#pragma pack(pop)
