#pragma once
#include <cstdint>
#include "FCinematicAvatarSettings.hpp"
#include "FTimeInput.hpp"
#include "FWeatherDefinitionName.hpp"
class UClass;
#pragma pack(push, 1)
struct FCinematicRenderJob {
    FString Suffix; // 0x0
    FCinematicAvatarSettings AvatarOverrides; // 0x10
    FTimeInput TimeOfDayOverride; // 0x80
    char pad_8c[0x4];
    FWeatherDefinitionName WeatherOverride; // 0x90
    UClass* Overlay; // 0xa0
    bool bIsDisabled; // 0xa8
    bool bAddToShotgun; // 0xa9
    bool bUseViewmodeUnlit; // 0xaa
    char pad_ab[0x5];
}; // Size: 0xb0
#pragma pack(pop)
