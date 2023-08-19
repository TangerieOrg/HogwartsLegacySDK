#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FNPC_MobilityAbilityData.hpp"
#include "FNPC_MobilityAnimBlendSpaceData.hpp"
#include "FNPC_MobilityAnimSpeedData.hpp"
class UClass;
#pragma pack(push, 1)
struct FNPC_MobilityAnimData {
    UClass* IdleAbilityPtr; // 0x0
    UClass* MoveAbilityPtr; // 0x8
    FGameplayTagContainer MoveTags; // 0x10
    FNPC_MobilityAbilityData MoveStart; // 0x30
    FNPC_MobilityAbilityData MoveStop; // 0x60
    FNPC_MobilityAbilityData MovePivot; // 0x90
    TArray<FNPC_MobilityAnimSpeedData> AnimSpeedData; // 0xc0
    TArray<FNPC_MobilityAnimBlendSpaceData> BlendSpaceData; // 0xd0
}; // Size: 0xe0
#pragma pack(pop)
