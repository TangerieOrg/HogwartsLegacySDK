#pragma once
#include <cstdint>
#include "ELastWandCastState\Type.hpp"
#include "EPreWandCastState\Type.hpp"
#include "EWandCastType\Type.hpp"
#pragma pack(push, 1)
struct FWandCastInfo {
    EWandCastType::Type WandCastType; // 0x0
    EWandCastType::Type LastWandCastType; // 0x1
    EPreWandCastState::Type PreWandCastState; // 0x2
    EPreWandCastState::Type AnticipationWandCastState; // 0x3
    ELastWandCastState::Type LastWandCastState; // 0x4
    char pad_5[0x3];
    float TimeAtLastAttack; // 0x8
    float LastDiscreteAngle; // 0xc
    int32_t LastBaseAttackIndex; // 0x10
    int32_t AttackCount; // 0x14
    bool bMelee; // 0x18
    bool bComboFinisher; // 0x19
    bool bTransitionAnimation; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
