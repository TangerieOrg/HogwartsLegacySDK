#include "AActor.hpp"
#include "AGlobalLightingMaster.hpp"
#include "FExpHeightFogParameters.hpp"
#include "FGlobalLightingDirectionalLightState.hpp"
#include "FProbeLightingParameters.hpp"
#include "FSkyAtmosphereParameters.hpp"
#include "FSkyLightLightingParameters.hpp"
#include "FVolumetricCloudsLightingParameters.hpp"
#include "FVolumetricCloudsPresetParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
#include "UDirectionalLightComponent.hpp"
#include "UExponentialHeightFogComponent.hpp"
#include "UFunction.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingDefaults.hpp"
#include "UObject.hpp"
#include "UPostProcessComponent.hpp"
#include "USkyAtmosphereComponent.hpp"
#include "USkyLightComponent.hpp"
#include "USkyOnlyComponent.hpp"
AGlobalLightingMaster* AGlobalLightingMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingMaster");
    return (AGlobalLightingMaster*)res;
}
void AGlobalLightingMaster::GetGlobalLightingMaster(UObject* WorldContextObject, AGlobalLightingMaster*& GlobalLightingMaster) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingMaster.GetGlobalLightingMaster"));
    struct Params_GetGlobalLightingMaster {
        UObject* WorldContextObject; // 0x0
        AGlobalLightingMaster* GlobalLightingMaster; // 0x8
    }; // Size: 0x10
    Params_GetGlobalLightingMaster params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalLightingMaster = (AGlobalLightingMaster*)GlobalLightingMaster;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GlobalLightingMaster = params.GlobalLightingMaster;
}
void AGlobalLightingMaster::SetCinematicDefaults(UObject* WorldContextObject, UGlobalLightingDefaults* CinematicDefaults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingMaster.SetCinematicDefaults"));
    struct Params_SetCinematicDefaults {
        UObject* WorldContextObject; // 0x0
        UGlobalLightingDefaults* CinematicDefaults; // 0x8
    }; // Size: 0x10
    Params_SetCinematicDefaults params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CinematicDefaults = (UGlobalLightingDefaults*)CinematicDefaults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AGlobalLightingMaster::GetCinematicDefaults(UObject* WorldContextObject, UGlobalLightingDefaults*& CinematicDefaults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingMaster.GetCinematicDefaults"));
    struct Params_GetCinematicDefaults {
        UObject* WorldContextObject; // 0x0
        UGlobalLightingDefaults* CinematicDefaults; // 0x8
    }; // Size: 0x10
    Params_GetCinematicDefaults params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CinematicDefaults = (UGlobalLightingDefaults*)CinematicDefaults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CinematicDefaults = params.CinematicDefaults;
}
void AGlobalLightingMaster::ClearCinematicDefaults(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingMaster.ClearCinematicDefaults"));
    struct Params_ClearCinematicDefaults {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_ClearCinematicDefaults params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AGlobalLightingMaster::CheckWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingMaster.CheckWorld"));
    struct Params_CheckWorld {
    }; // Size: 0x0
    Params_CheckWorld params{};
    ProcessEvent(func, &params);
}
void AGlobalLightingMaster::CaptureSkyLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingMaster.CaptureSkyLight"));
    struct Params_CaptureSkyLight {
    }; // Size: 0x0
    Params_CaptureSkyLight params{};
    ProcessEvent(func, &params);
}
