#pragma once
#include <cstdint>
#include "FEnemy_AttackSpecificData.hpp"
#pragma pack(push, 1)
struct FEnemy_BallisticData : public FEnemy_AttackSpecificData {
    char pad_1[0x3];
    float OverrideGravity; // 0x4
    float ArcParam; // 0x8
    float DilateMult; // 0xc
}; // Size: 0x10
#pragma pack(pop)
