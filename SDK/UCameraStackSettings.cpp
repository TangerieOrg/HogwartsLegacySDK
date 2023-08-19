#include "FCameraStackData.hpp"
#include "UCameraStackSettings.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraStackSettings* UCameraStackSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackSettings");
    return (UCameraStackSettings*)res;
}
FCameraStackData UCameraStackSettings::GetStackData(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSettings.GetStackData"));
    struct Params_GetStackData {
        UObject* WorldContextObject; // 0x0
        FCameraStackData ReturnValue; // 0x8
    }; // Size: 0x20
    Params_GetStackData params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (FCameraStackData)params.ReturnValue;
}
