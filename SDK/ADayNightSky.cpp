#include "AActor.hpp"
#include "ADayNightSky.hpp"
#include "FMilkyWay.hpp"
#include "FMoonDisk.hpp"
#include "FPlanet.hpp"
#include "FPlanetParams.hpp"
#include "FStarrySkyCurveParameters.hpp"
#include "FStarrySkyParameters.hpp"
#include "FSunDisk.hpp"
#include "FVector2D.hpp"
#include "UDayNightCompass.hpp"
#include "UDayNightMasterComponent.hpp"
#include "UFunction.hpp"
#include "UGlobalLightingBlendableDayNightSky.hpp"
#include "UNiagaraStarrySkySwitchableHighlightComponent.hpp"
#include "UObject.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
#include "USceneComponent.hpp"
ADayNightSky* ADayNightSky::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightSky");
    return (ADayNightSky*)res;
}
void ADayNightSky::GetDayNightSky(UObject* WorldContextObject, ADayNightSky*& DayNightSkyActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightSky.GetDayNightSky"));
    struct Params_GetDayNightSky {
        UObject* WorldContextObject; // 0x0
        ADayNightSky* DayNightSkyActor; // 0x8
    }; // Size: 0x10
    Params_GetDayNightSky params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightSkyActor = (ADayNightSky*)DayNightSkyActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DayNightSkyActor = params.DayNightSkyActor;
}
void ADayNightSky::EditBasis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightSky.EditBasis"));
    struct Params_EditBasis {
    }; // Size: 0x0
    Params_EditBasis params{};
    ProcessEvent(func, &params);
}
void ADayNightSky::EditLightRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightSky.EditLightRig"));
    struct Params_EditLightRig {
    }; // Size: 0x0
    Params_EditLightRig params{};
    ProcessEvent(func, &params);
}
