#pragma once
#include <cstdint>
#include "FAvatarHouse.hpp"
#include "FFullbodyAvatarPreset.hpp"
#include "FGearBackSlotName.hpp"
#include "FGearHandSlotName.hpp"
#include "FGearHeadSlotName.hpp"
#include "FGearNeckSlotName.hpp"
#include "FGearOutfitSlotName.hpp"
#include "FGenderVoice.hpp"
#include "FHumanCharacterId.hpp"
#pragma pack(push, 1)
struct FCinematicAvatarSettings {
    FHumanCharacterId Character; // 0x0
    FFullbodyAvatarPreset FullBodyPreset; // 0x8
    FGenderVoice GenderVoice; // 0x10
    FGearHeadSlotName HeadGear; // 0x18
    FGearOutfitSlotName OutfitGear; // 0x28
    FGearBackSlotName BackGear; // 0x38
    FGearNeckSlotName NeckGear; // 0x48
    FGearHandSlotName HandGear; // 0x58
    FAvatarHouse House; // 0x68
}; // Size: 0x70
#pragma pack(pop)
