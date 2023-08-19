#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FMilkyWay.hpp"
#include "FMoonDisk.hpp"
#include "FPlanet.hpp"
#include "FPlanetParams.hpp"
#include "FStarrySkyCurveParameters.hpp"
#include "FStarrySkyParameters.hpp"
#include "FSunDisk.hpp"
#include "FVector2D.hpp"
class UDayNightMasterComponent;
class USceneComponent;
class UGlobalLightingBlendableDayNightSky;
class UNiagaraStarrySkySwitchableHighlightComponent;
class URenderSettingsBlendDomainAsset;
class UDayNightCompass;
class UObject;
#pragma pack(push, 1)
class ADayNightSky : public AActor {
public:
    char pad_248[0x8];
    UDayNightMasterComponent* DayNightMaster; // 0x250
    USceneComponent* TrackEyeXYRoot; // 0x258
    UGlobalLightingBlendableDayNightSky* GlobalLightingBlendable; // 0x260
    float GlobalLightingBlendablePriority; // 0x268
    char pad_26c[0x4];
    FSunDisk SunDisk; // 0x270
    FMoonDisk MoonDisk; // 0x388
    FPlanetParams Planets; // 0x458
    FPlanet Venus; // 0x460
    FPlanet Mars; // 0x498
    FPlanet Jupiter; // 0x4d0
    FPlanet Saturn; // 0x508
    FMilkyWay MilkyWay; // 0x540
    char pad_5c0[0x50];
    UNiagaraStarrySkySwitchableHighlightComponent* StarField; // 0x610
    FStarrySkyCurveParameters MoonParameters; // 0x618
    FStarrySkyParameters CurrentMoonParameters; // 0x650
    FVector2D HideStarsNormalizedTime; // 0x670
    URenderSettingsBlendDomainAsset* NightSkyVisibilityBlendDomain; // 0x678
    float NightSkyVisibilityBlendDomainThreshold; // 0x680
    bool bEnableSunDisk; // 0x684
    bool bUseActorZForWorldOrigin; // 0x685
    bool bUseHideStarsNormalizedTime; // 0x686
    char pad_687[0x1];
    UDayNightCompass* Compass; // 0x688
    static ADayNightSky* StaticClass();
    static void GetDayNightSky(UObject* WorldContextObject, ADayNightSky*& DayNightSkyActor);
    void EditLightRig();
    void EditBasis();
}; // Size: 0x690
#pragma pack(pop)
