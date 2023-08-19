#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FDynamicCharacterLightRigAltitudeFollowLight.hpp"
#include "FDynamicCharacterLightRigAzimuthFollowLight.hpp"
#include "FDynamicCharacterLightRigFillLight.hpp"
class ULightComponent;
#pragma pack(push, 1)
struct FDynamicCharacterLightRigLight {
    ULightComponent* Light; // 0x0
    FName ComponentName; // 0x8
    float DayIntensity; // 0x10
    float NightIntensity; // 0x14
    FDynamicCharacterLightRigFillLight FillLight; // 0x18
    FDynamicCharacterLightRigAzimuthFollowLight AzimuthFollow; // 0x20
    FDynamicCharacterLightRigAltitudeFollowLight AltitudeFollow; // 0x24
    bool bOffAtNight; // 0x30
    bool bFillLight; // 0x31
    bool bAzimuthFollow; // 0x32
    bool bAltitudeFollow; // 0x33
    bool bModulateWithTemperature; // 0x34
    bool bDisableDirectionalLightBelowHorizon; // 0x35
    bool bAllowAdaptation; // 0x36
    bool bEnable; // 0x37
    FColor DebugColor; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
