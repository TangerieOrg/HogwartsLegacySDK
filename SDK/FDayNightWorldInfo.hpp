#pragma once
#include <cstdint>
#include "FDayNightEventSystem.hpp"
#include "FSkyStateOverrides.hpp"
#include "FTimeOverrides.hpp"
class UEphemerisBasis;
class UDayNightMasterComponent;
#pragma pack(push, 1)
struct FDayNightWorldInfo {
    UEphemerisBasis* LevelDefaultBasis; // 0x0
    UEphemerisBasis* ForceBasis; // 0x8
    UEphemerisBasis* OverrideBasis; // 0x10
    UDayNightMasterComponent* Master; // 0x18
    char pad_20[0x18];
    TArray<void*> DayNightOverrides; // 0x38
    TArray<void*> BasisOverrides; // 0x48
    char pad_58[0x50];
    FTimeOverrides TimeOverrides; // 0xa8
    FSkyStateOverrides SkyStateOverrides; // 0xb8
    FDayNightEventSystem EventSystem; // 0xc8
    bool bEventSystemReset; // 0x278
    bool bMissingComputeMasterTemplate; // 0x279
    char pad_27a[0x6];
}; // Size: 0x280
#pragma pack(pop)
