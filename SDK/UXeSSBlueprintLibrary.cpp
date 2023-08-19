#include "EXeSSQualityMode.hpp"
#include "FIntPoint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UXeSSBlueprintLibrary.hpp"
UXeSSBlueprintLibrary* UXeSSBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/XeSSBlueprint.XeSSBlueprintLibrary");
    return (UXeSSBlueprintLibrary*)res;
}
void UXeSSBlueprintLibrary::SetXeSSQualityMode(EXeSSQualityMode QualityMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode"));
    struct Params_SetXeSSQualityMode {
        EXeSSQualityMode QualityMode; // 0x0
    }; // Size: 0x1
    Params_SetXeSSQualityMode params{};
    params.QualityMode = (EXeSSQualityMode)QualityMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EXeSSQualityMode UXeSSBlueprintLibrary::GetXeSSQualityMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode"));
    struct Params_GetXeSSQualityMode {
        EXeSSQualityMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetXeSSQualityMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EXeSSQualityMode)params.ReturnValue;
}
bool UXeSSBlueprintLibrary::IsXeSSSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported"));
    struct Params_IsXeSSSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsXeSSSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation"));
    struct Params_GetXeSSQualityModeInformation {
        EXeSSQualityMode QualityMode; // 0x0
        char pad_1[0x3];
        float ScreenPercentage; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetXeSSQualityModeInformation params{};
    params.QualityMode = (EXeSSQualityMode)QualityMode;
    params.ScreenPercentage = (float)ScreenPercentage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScreenPercentage = params.ScreenPercentage;
    return (bool)params.ReturnValue;
}
EXeSSQualityMode UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(FIntPoint ScreenResolution) {
    static auto func = (UFunction*)(find_uobject("Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode"));
    struct Params_GetDefaultXeSSQualityMode {
        FIntPoint ScreenResolution; // 0x0
        EXeSSQualityMode ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetDefaultXeSSQualityMode params{};
    params.ScreenResolution = (FIntPoint)ScreenResolution;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EXeSSQualityMode)params.ReturnValue;
}
TArray<EXeSSQualityMode> UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes"));
    struct Params_GetSupportedXeSSQualityModes {
        TArray<EXeSSQualityMode> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSupportedXeSSQualityModes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<EXeSSQualityMode>)params.ReturnValue;
}
