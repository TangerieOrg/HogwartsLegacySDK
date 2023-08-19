#pragma once
#include <cstdint>
#include "EMobilityModeState\Type.hpp"
#include "FEnemy_MobilityAbilityData.hpp"
#include "FEnemy_MobilityMovementData.hpp"
#pragma pack(push, 1)
struct FEnemy_MobilityData {
    float SpeedMin; // 0x0
    float SpeedMax; // 0x4
    float MoveDistThreshold; // 0x8
    FEnemy_MobilityMovementData Movement; // 0xc
    EMobilityModeState::Type MobilityModeState; // 0x18
    char pad_19[0x7];
    FEnemy_MobilityAbilityData AbilityData; // 0x20
}; // Size: 0x40
#pragma pack(pop)
