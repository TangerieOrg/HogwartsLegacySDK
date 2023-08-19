#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeOverrideBase.hpp"
#include "UTimeOverrideBlueprintLibrary.hpp"
void UTimeOverrideBlueprintLibrary::IsTimeOverrideRegistered(UObject* WorldContextObject, UTimeOverrideBase* TimeOverride, bool& bRegistered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBlueprintLibrary.IsTimeOverrideRegistered"));
    struct Params_IsTimeOverrideRegistered {
        UObject* WorldContextObject; // 0x0
        UTimeOverrideBase* TimeOverride; // 0x8
        bool bRegistered; // 0x10
    }; // Size: 0x11
    Params_IsTimeOverrideRegistered params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TimeOverride = (UTimeOverrideBase*)TimeOverride;
    params.bRegistered = (bool)bRegistered;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bRegistered = params.bRegistered;
}
UTimeOverrideBlueprintLibrary* UTimeOverrideBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideBlueprintLibrary");
    return (UTimeOverrideBlueprintLibrary*)res;
}
void UTimeOverrideBlueprintLibrary::RegisterTimeOverride(UObject* WorldContextObject, UTimeOverrideBase* TimeOverride, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBlueprintLibrary.RegisterTimeOverride"));
    struct Params_RegisterTimeOverride {
        UObject* WorldContextObject; // 0x0
        UTimeOverrideBase* TimeOverride; // 0x8
        bool bSuccess; // 0x10
    }; // Size: 0x11
    Params_RegisterTimeOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TimeOverride = (UTimeOverrideBase*)TimeOverride;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UTimeOverrideBlueprintLibrary::DeregisterTimeOverride(UObject* WorldContextObject, UTimeOverrideBase* TimeOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBlueprintLibrary.DeregisterTimeOverride"));
    struct Params_DeregisterTimeOverride {
        UObject* WorldContextObject; // 0x0
        UTimeOverrideBase* TimeOverride; // 0x8
    }; // Size: 0x10
    Params_DeregisterTimeOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TimeOverride = (UTimeOverrideBase*)TimeOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
