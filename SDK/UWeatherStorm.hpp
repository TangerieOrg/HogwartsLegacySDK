#pragma once
#include <cstdint>
#include "FMaterialPermuterKey.hpp"
#include "FWeatherStormState.hpp"
#include "UObject.hpp"
class UWeatherSurfaceDataAsset;
class AFullScreenWeatherDecalActor;
class AWeatherAnimationBlueprint;
class AWeatherCoverageBlueprint;
class UMaterialSwapSphereSelectionComponent;
class UMaterialPermuterLoadingBundle;
#pragma pack(push, 1)
class UWeatherStorm : public UObject {
public:
    char pad_28[0x10];
    UWeatherSurfaceDataAsset* SurfaceData; // 0x38
    FWeatherStormState StormState; // 0x40
    AFullScreenWeatherDecalActor* WeatherDecal; // 0x60
    AWeatherAnimationBlueprint* WeatherAnimationActor; // 0x68
    AWeatherCoverageBlueprint* WeatherCoverageActor; // 0x70
    UMaterialSwapSphereSelectionComponent* WeatherSwapper; // 0x78
    UMaterialPermuterLoadingBundle* CharacterFXLoadingBundle; // 0x80
    char pad_88[0x58];
    FMaterialPermuterKey WeatherGroupKey; // 0xe0
    static UWeatherStorm* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
