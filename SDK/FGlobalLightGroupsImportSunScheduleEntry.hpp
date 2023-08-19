#pragma once
#include <cstdint>
#include "EGlobalLightGroupsSunAngle.hpp"
#include "EGlobalLightGroupsSunDirection.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsImportSunScheduleEntry : public FTableRowBase {
    FName GroupName; // 0x8
    EGlobalLightGroupsSunAngle OnAngle; // 0x10
    EGlobalLightGroupsSunDirection OnDirection; // 0x11
    char pad_12[0x2];
    float OnAngleOffset; // 0x14
    float OnRandMinutesMin; // 0x18
    float OnRandMinutesMax; // 0x1c
    EGlobalLightGroupsSunAngle OffAngle; // 0x20
    EGlobalLightGroupsSunDirection OffDirection; // 0x21
    char pad_22[0x2];
    float OffAngleOffset; // 0x24
    float OffRandMinutesMin; // 0x28
    float OffRandMinutesMax; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
