#include "EAntiAliasingMode.hpp"
#include "EUpscaleBrand.hpp"
#include "EUpscaleMode.hpp"
#include "FGraphicsAdapterDesc.hpp"
#include "FIntPoint.hpp"
#include "FSimpleMonitorInformation.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVideoSettingsBlueprintFunctionLibrary.hpp"
UVideoSettingsBlueprintFunctionLibrary* UVideoSettingsBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary");
    return (UVideoSettingsBlueprintFunctionLibrary*)res;
}
bool UVideoSettingsBlueprintFunctionLibrary::ShouldEnableRenderingResolutionsDropdown(EUpscaleMode UpscaleMode, EAntiAliasingMode AntiAliasingMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.ShouldEnableRenderingResolutionsDropdown"));
    struct Params_ShouldEnableRenderingResolutionsDropdown {
        EUpscaleMode UpscaleMode; // 0x0
        EAntiAliasingMode AntiAliasingMode; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_ShouldEnableRenderingResolutionsDropdown params{};
    params.UpscaleMode = (EUpscaleMode)UpscaleMode;
    params.AntiAliasingMode = (EAntiAliasingMode)AntiAliasingMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<EUpscaleBrand> UVideoSettingsBlueprintFunctionLibrary::GetAvailableUpscaleBrands() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableUpscaleBrands"));
    struct Params_GetAvailableUpscaleBrands {
        TArray<EUpscaleBrand> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableUpscaleBrands params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<EUpscaleBrand>)params.ReturnValue;
}
void UVideoSettingsBlueprintFunctionLibrary::SetCalibrationScreenMode(UObject* WorldContextObject, bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.SetCalibrationScreenMode"));
    struct Params_SetCalibrationScreenMode {
        UObject* WorldContextObject; // 0x0
        bool bEnabled; // 0x8
    }; // Size: 0x9
    Params_SetCalibrationScreenMode params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FIntPoint> UVideoSettingsBlueprintFunctionLibrary::SortResolutions(TArray<FIntPoint>& Resolutions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.SortResolutions"));
    struct Params_SortResolutions {
        TArray<FIntPoint> Resolutions; // 0x0
        TArray<FIntPoint> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortResolutions params{};
    params.Resolutions = (TArray<FIntPoint>)Resolutions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Resolutions = params.Resolutions;
    return (TArray<FIntPoint>)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::GetDefaultUpscaleSharpnessIfChanged(EUpscaleMode InOldMode, EUpscaleMode InNewMode, float& OutSharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetDefaultUpscaleSharpnessIfChanged"));
    struct Params_GetDefaultUpscaleSharpnessIfChanged {
        EUpscaleMode InOldMode; // 0x0
        EUpscaleMode InNewMode; // 0x1
        char pad_2[0x2];
        float OutSharpness; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetDefaultUpscaleSharpnessIfChanged params{};
    params.InOldMode = (EUpscaleMode)InOldMode;
    params.InNewMode = (EUpscaleMode)InNewMode;
    params.OutSharpness = (float)OutSharpness;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutSharpness = params.OutSharpness;
    return (bool)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::ShouldEnableUpscaleSharpnessSlider(EUpscaleMode UpscaleMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.ShouldEnableUpscaleSharpnessSlider"));
    struct Params_ShouldEnableUpscaleSharpnessSlider {
        EUpscaleMode UpscaleMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ShouldEnableUpscaleSharpnessSlider params{};
    params.UpscaleMode = (EUpscaleMode)UpscaleMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::ShouldEnableUpscaleModes(EAntiAliasingMode AntiAliasingMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.ShouldEnableUpscaleModes"));
    struct Params_ShouldEnableUpscaleModes {
        EAntiAliasingMode AntiAliasingMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ShouldEnableUpscaleModes params{};
    params.AntiAliasingMode = (EAntiAliasingMode)AntiAliasingMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::ShouldEnableAntiAliasingDropdown(EUpscaleMode UpscaleMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.ShouldEnableAntiAliasingDropdown"));
    struct Params_ShouldEnableAntiAliasingDropdown {
        EUpscaleMode UpscaleMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ShouldEnableAntiAliasingDropdown params{};
    params.UpscaleMode = (EUpscaleMode)UpscaleMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::IsRaytracedShadowsEnabledInGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.IsRaytracedShadowsEnabledInGame"));
    struct Params_IsRaytracedShadowsEnabledInGame {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRaytracedShadowsEnabledInGame params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::IsRaytracingEnabledInEngine() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.IsRaytracingEnabledInEngine"));
    struct Params_IsRaytracingEnabledInEngine {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRaytracingEnabledInEngine params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::IsRayTracingAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.IsRayTracingAvailable"));
    struct Params_IsRayTracingAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRayTracingAvailable params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EUpscaleMode UVideoSettingsBlueprintFunctionLibrary::IndexToUpscaleMode(int32_t SelectedIdx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.IndexToUpscaleMode"));
    struct Params_IndexToUpscaleMode {
        int32_t SelectedIdx; // 0x0
        EUpscaleMode ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IndexToUpscaleMode params{};
    params.SelectedIdx = (int32_t)SelectedIdx;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUpscaleMode)params.ReturnValue;
}
float UVideoSettingsBlueprintFunctionLibrary::GetUpscaleModePercentage(EUpscaleMode UpscaleMode, FIntPoint Resolution) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetUpscaleModePercentage"));
    struct Params_GetUpscaleModePercentage {
        EUpscaleMode UpscaleMode; // 0x0
        char pad_1[0x3];
        FIntPoint Resolution; // 0x4
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetUpscaleModePercentage params{};
    params.UpscaleMode = (EUpscaleMode)UpscaleMode;
    params.Resolution = (FIntPoint)Resolution;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<float> UVideoSettingsBlueprintFunctionLibrary::GetAvailableRatios() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableRatios"));
    struct Params_GetAvailableRatios {
        TArray<float> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableRatios params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
EUpscaleBrand UVideoSettingsBlueprintFunctionLibrary::GetUpscaleBrandForMode(EUpscaleMode InMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetUpscaleBrandForMode"));
    struct Params_GetUpscaleBrandForMode {
        EUpscaleMode InMode; // 0x0
        EUpscaleBrand ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetUpscaleBrandForMode params{};
    params.InMode = (EUpscaleMode)InMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUpscaleBrand)params.ReturnValue;
}
FIntPoint UVideoSettingsBlueprintFunctionLibrary::GetMinResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetMinResolution"));
    struct Params_GetMinResolution {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMinResolution params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FIntPoint UVideoSettingsBlueprintFunctionLibrary::GetHighestAvailableResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetHighestAvailableResolution"));
    struct Params_GetHighestAvailableResolution {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHighestAvailableResolution params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::GetHDRToneMapParameters(float& MinToneMapLuminance, float& MaxToneMapLuminance, float& MaxFullFrameTonemapLuminance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetHDRToneMapParameters"));
    struct Params_GetHDRToneMapParameters {
        float MinToneMapLuminance; // 0x0
        float MaxToneMapLuminance; // 0x4
        float MaxFullFrameTonemapLuminance; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetHDRToneMapParameters params{};
    params.MinToneMapLuminance = (float)MinToneMapLuminance;
    params.MaxToneMapLuminance = (float)MaxToneMapLuminance;
    params.MaxFullFrameTonemapLuminance = (float)MaxFullFrameTonemapLuminance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaxFullFrameTonemapLuminance = params.MaxFullFrameTonemapLuminance;
    MinToneMapLuminance = params.MinToneMapLuminance;
    MaxToneMapLuminance = params.MaxToneMapLuminance;
    return (bool)params.ReturnValue;
}
TArray<int32_t> UVideoSettingsBlueprintFunctionLibrary::GetAvailableFramerateLimits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableFramerateLimits"));
    struct Params_GetAvailableFramerateLimits {
        TArray<int32_t> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableFramerateLimits params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
TArray<EUpscaleMode> UVideoSettingsBlueprintFunctionLibrary::GetAvailableUpscaleModesForBrand(EUpscaleBrand InBrand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableUpscaleModesForBrand"));
    struct Params_GetAvailableUpscaleModesForBrand {
        EUpscaleBrand InBrand; // 0x0
        char pad_1[0x7];
        TArray<EUpscaleMode> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAvailableUpscaleModesForBrand params{};
    params.InBrand = (EUpscaleBrand)InBrand;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<EUpscaleMode>)params.ReturnValue;
}
TArray<EUpscaleMode> UVideoSettingsBlueprintFunctionLibrary::GetAvailableUpscaleModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableUpscaleModes"));
    struct Params_GetAvailableUpscaleModes {
        TArray<EUpscaleMode> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableUpscaleModes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<EUpscaleMode>)params.ReturnValue;
}
TArray<FIntPoint> UVideoSettingsBlueprintFunctionLibrary::GetAvailableResolutions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableResolutions"));
    struct Params_GetAvailableResolutions {
        TArray<FIntPoint> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableResolutions params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FIntPoint>)params.ReturnValue;
}
void UVideoSettingsBlueprintFunctionLibrary::GetAvailableRenderingResolutions(FIntPoint MonitorNativeResolution) {}
TArray<FSimpleMonitorInformation> UVideoSettingsBlueprintFunctionLibrary::GetAvailableMonitors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableMonitors"));
    struct Params_GetAvailableMonitors {
        TArray<FSimpleMonitorInformation> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableMonitors params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSimpleMonitorInformation>)params.ReturnValue;
}
bool UVideoSettingsBlueprintFunctionLibrary::GetAvailableGPUs(TArray<FGraphicsAdapterDesc>& OutGPUs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableGPUs"));
    struct Params_GetAvailableGPUs {
        TArray<FGraphicsAdapterDesc> OutGPUs; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetAvailableGPUs params{};
    params.OutGPUs = (TArray<FGraphicsAdapterDesc>)OutGPUs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutGPUs = params.OutGPUs;
    return (bool)params.ReturnValue;
}
TArray<EAntiAliasingMode> UVideoSettingsBlueprintFunctionLibrary::GetAvailableAntiAliasingModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.GetAvailableAntiAliasingModes"));
    struct Params_GetAvailableAntiAliasingModes {
        TArray<EAntiAliasingMode> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableAntiAliasingModes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<EAntiAliasingMode>)params.ReturnValue;
}
EUpscaleMode UVideoSettingsBlueprintFunctionLibrary::ConvertModeToEquivBrandMode(EUpscaleMode InMode, EUpscaleBrand InBrand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VideoSettingsBlueprintFunctionLibrary.ConvertModeToEquivBrandMode"));
    struct Params_ConvertModeToEquivBrandMode {
        EUpscaleMode InMode; // 0x0
        EUpscaleBrand InBrand; // 0x1
        EUpscaleMode ReturnValue; // 0x2
    }; // Size: 0x3
    Params_ConvertModeToEquivBrandMode params{};
    params.InMode = (EUpscaleMode)InMode;
    params.InBrand = (EUpscaleBrand)InBrand;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUpscaleMode)params.ReturnValue;
}
