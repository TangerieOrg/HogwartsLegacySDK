#pragma once
#include <cstdint>
#include "FWeatherDecalSetup.hpp"
#include "FWeatherStormSurfaceParams.hpp"
#include "FWeatherSurfaceCharacterFXSettings.hpp"
#include "UDataAsset.hpp"
class UClass;
#pragma pack(push, 1)
class UWeatherSurfaceDataAsset : public UDataAsset {
public:
    FWeatherDecalSetup Decal; // 0x30
    UClass* BPWeatherAnimationClass; // 0x50
    UClass* BPWeatherCoverageClass; // 0x58
    FWeatherStormSurfaceParams SurfaceParameters; // 0x60
    FName PermuterName; // 0xd0
    float SwapRadius; // 0xd8
    char pad_dc[0x4];
    FWeatherSurfaceCharacterFXSettings CharacterFX; // 0xe0
    bool bDoWeatherSwap; // 0x180
    char pad_181[0x7];
    static UWeatherSurfaceDataAsset* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
