#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FCentaurAttackDescriptor {
    float AttackWeight; // 0x0
    FVector2D TargetRange; // 0x4
    FVector2D HeadingToTargetRange; // 0xc
    FVector2D AttackCooldownRange; // 0x14
    FVector2D GroupAttackCooldownRange; // 0x1c
    FName GroupAttackTagName; // 0x24
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
