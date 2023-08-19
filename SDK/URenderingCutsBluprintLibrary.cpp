#include "FRenderingCutBits.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URenderingCutsBluprintLibrary.hpp"
void URenderingCutsBluprintLibrary::TriggerRenderingCut(UObject* WorldContextObject, FRenderingCutBits RenderingCuts) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RenderingCutsBluprintLibrary.TriggerRenderingCut"));
    struct Params_TriggerRenderingCut {
        UObject* WorldContextObject; // 0x0
        FRenderingCutBits RenderingCuts; // 0x8
    }; // Size: 0x10
    Params_TriggerRenderingCut params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.RenderingCuts = (FRenderingCutBits)RenderingCuts;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
URenderingCutsBluprintLibrary* URenderingCutsBluprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderingCutsBluprintLibrary");
    return (URenderingCutsBluprintLibrary*)res;
}
void URenderingCutsBluprintLibrary::TriggerCameraCut(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RenderingCutsBluprintLibrary.TriggerCameraCut"));
    struct Params_TriggerCameraCut {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_TriggerCameraCut params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
