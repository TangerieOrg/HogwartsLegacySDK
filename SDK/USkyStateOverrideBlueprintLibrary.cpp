#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkyStateOverride.hpp"
#include "USkyStateOverrideBlueprintLibrary.hpp"
USkyStateOverrideBlueprintLibrary* USkyStateOverrideBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverrideBlueprintLibrary");
    return (USkyStateOverrideBlueprintLibrary*)res;
}
void USkyStateOverrideBlueprintLibrary::RegisterSkyStateOverride(UObject* WorldContextObject, USkyStateOverride* SkyStateOverride, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideBlueprintLibrary.RegisterSkyStateOverride"));
    struct Params_RegisterSkyStateOverride {
        UObject* WorldContextObject; // 0x0
        USkyStateOverride* SkyStateOverride; // 0x8
        bool bSuccess; // 0x10
    }; // Size: 0x11
    Params_RegisterSkyStateOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SkyStateOverride = (USkyStateOverride*)SkyStateOverride;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void USkyStateOverrideBlueprintLibrary::IsSkyStateOverrideRegistered(UObject* WorldContextObject, USkyStateOverride* SkyStateOverride, bool& bRegistered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideBlueprintLibrary.IsSkyStateOverrideRegistered"));
    struct Params_IsSkyStateOverrideRegistered {
        UObject* WorldContextObject; // 0x0
        USkyStateOverride* SkyStateOverride; // 0x8
        bool bRegistered; // 0x10
    }; // Size: 0x11
    Params_IsSkyStateOverrideRegistered params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SkyStateOverride = (USkyStateOverride*)SkyStateOverride;
    params.bRegistered = (bool)bRegistered;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bRegistered = params.bRegistered;
}
void USkyStateOverrideBlueprintLibrary::DeregisterSkyStateOverride(UObject* WorldContextObject, USkyStateOverride* SkyStateOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideBlueprintLibrary.DeregisterSkyStateOverride"));
    struct Params_DeregisterSkyStateOverride {
        UObject* WorldContextObject; // 0x0
        USkyStateOverride* SkyStateOverride; // 0x8
    }; // Size: 0x10
    Params_DeregisterSkyStateOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SkyStateOverride = (USkyStateOverride*)SkyStateOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
