#pragma once
#include <cstdint>
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
class USceneComponent;
#pragma pack(push, 1)
struct FMasterTickThrottlerSettings {
    float FullTickRadiusMeters; // 0x0
    float FullTickInterval; // 0x4
    float NoTickRadiusMeters; // 0x8
    float NoTickInterval; // 0xc
    float KeepAliveInterval; // 0x10
    char pad_14[0x4];
    USceneComponent* ComparisonComponent; // 0x18
    FMasterTickThrottlerSettingsAdvanced Advanced; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
