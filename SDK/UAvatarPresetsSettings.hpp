#pragma once
#include <cstdint>
#include "EHoodPosition.hpp"
#include "FAvatarHouse.hpp"
#include "FFullbodyAvatarPreset.hpp"
#include "FGearBackSlotName.hpp"
#include "FGearFaceSlotName.hpp"
#include "FGearHandSlotName.hpp"
#include "FGearHeadSlotName.hpp"
#include "FGearNeckSlotName.hpp"
#include "FGearOutfitSlotName.hpp"
#include "FHumanCharacterId.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAvatarPresetsSettings : public UObject {
public:
    FHumanCharacterId DefaultPIECharacter; // 0x28
    FFullbodyAvatarPreset DefaultPIEFullBodyPreset; // 0x30
    FGearHeadSlotName DefaultPIEHeadGear; // 0x38
    FGearOutfitSlotName DefaultPIEOutfitGear; // 0x48
    FGearBackSlotName DefaultPIEBackGear; // 0x58
    EHoodPosition DefaultPIEHoodPosition; // 0x68
    char pad_69[0x7];
    FGearNeckSlotName DefaultPIENeckGear; // 0x70
    FGearHandSlotName DefaultPIEHandGear; // 0x80
    FGearFaceSlotName DefaultPIEFaceGear; // 0x90
    FAvatarHouse DefaultPIEHouse; // 0xa0
    static UAvatarPresetsSettings* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
