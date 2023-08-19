#include "EWindowMode\Type.hpp"
#include "FIntPoint.hpp"
#include "UFunction.hpp"
#include "UGameUserSettings.hpp"
#include "UObject.hpp"
UGameUserSettings* UGameUserSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameUserSettings");
    return (UGameUserSettings*)res;
}
void UGameUserSettings::ValidateSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ValidateSettings"));
    struct Params_ValidateSettings {
    }; // Size: 0x0
    Params_ValidateSettings params{};
    ProcessEvent(func, &params);
}
bool UGameUserSettings::SupportsHDRDisplayOutput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SupportsHDRDisplayOutput"));
    struct Params_SupportsHDRDisplayOutput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsHDRDisplayOutput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameUserSettings::SetCustomQuality(FString InScalabilityGroupName, int32_t InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetCustomQuality"));
    struct Params_SetCustomQuality {
        FString InScalabilityGroupName; // 0x0
        int32_t InValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_SetCustomQuality params{};
    params.InScalabilityGroupName = (FString)InScalabilityGroupName;
    params.InValue = (int32_t)InValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameUserSettings::IsFullscreenModeDirty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsFullscreenModeDirty"));
    struct Params_IsFullscreenModeDirty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFullscreenModeDirty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameUserSettings::SetVSyncEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetVSyncEnabled"));
    struct Params_SetVSyncEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetVSyncEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetShadowQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetShadowQuality"));
    struct Params_SetShadowQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetShadowQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetTextureQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetTextureQuality"));
    struct Params_SetTextureQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetTextureQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetVisualEffectQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetVisualEffectQuality"));
    struct Params_SetVisualEffectQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetVisualEffectQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::LoadSettings(bool bForceReload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.LoadSettings"));
    struct Params_LoadSettings {
        bool bForceReload; // 0x0
    }; // Size: 0x1
    Params_LoadSettings params{};
    params.bForceReload = (bool)bForceReload;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetPostProcessingQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetPostProcessingQuality"));
    struct Params_SetPostProcessingQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetPostProcessingQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetViewDistanceQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetViewDistanceQuality"));
    struct Params_SetViewDistanceQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetViewDistanceQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetToDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetToDefaults"));
    struct Params_SetToDefaults {
    }; // Size: 0x0
    Params_SetToDefaults params{};
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetBenchmarkFallbackValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetBenchmarkFallbackValues"));
    struct Params_SetBenchmarkFallbackValues {
    }; // Size: 0x0
    Params_SetBenchmarkFallbackValues params{};
    ProcessEvent(func, &params);
}
int32_t UGameUserSettings::GetShadowQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetShadowQuality"));
    struct Params_GetShadowQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetShadowQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameUserSettings::SetShadingQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetShadingQuality"));
    struct Params_SetShadingQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetShadingQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetScreenResolution(FIntPoint Resolution) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetScreenResolution"));
    struct Params_SetScreenResolution {
        FIntPoint Resolution; // 0x0
    }; // Size: 0x8
    Params_SetScreenResolution params{};
    params.Resolution = (FIntPoint)Resolution;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetAudioQualityLevel(int32_t QualityLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetAudioQualityLevel"));
    struct Params_SetAudioQualityLevel {
        int32_t QualityLevel; // 0x0
    }; // Size: 0x4
    Params_SetAudioQualityLevel params{};
    params.QualityLevel = (int32_t)QualityLevel;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetResolutionScaleValueEx(float NewScaleValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetResolutionScaleValueEx"));
    struct Params_SetResolutionScaleValueEx {
        float NewScaleValue; // 0x0
    }; // Size: 0x4
    Params_SetResolutionScaleValueEx params{};
    params.NewScaleValue = (float)NewScaleValue;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetResolutionScaleValue(int32_t NewScaleValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetResolutionScaleValue"));
    struct Params_SetResolutionScaleValue {
        int32_t NewScaleValue; // 0x0
    }; // Size: 0x4
    Params_SetResolutionScaleValue params{};
    params.NewScaleValue = (int32_t)NewScaleValue;
    ProcessEvent(func, &params);
}
bool UGameUserSettings::IsScreenResolutionDirty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsScreenResolutionDirty"));
    struct Params_IsScreenResolutionDirty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsScreenResolutionDirty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameUserSettings::SetResolutionScaleNormalized(float NewScaleNormalized) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetResolutionScaleNormalized"));
    struct Params_SetResolutionScaleNormalized {
        float NewScaleNormalized; // 0x0
    }; // Size: 0x4
    Params_SetResolutionScaleNormalized params{};
    params.NewScaleNormalized = (float)NewScaleNormalized;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetAntiAliasingQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetAntiAliasingQuality"));
    struct Params_SetAntiAliasingQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetAntiAliasingQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetOverallScalabilityLevel(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetOverallScalabilityLevel"));
    struct Params_SetOverallScalabilityLevel {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetOverallScalabilityLevel params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetFullscreenMode(EWindowMode::Type InFullscreenMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetFullscreenMode"));
    struct Params_SetFullscreenMode {
        EWindowMode::Type InFullscreenMode; // 0x0
    }; // Size: 0x1
    Params_SetFullscreenMode params{};
    params.InFullscreenMode = (EWindowMode::Type)InFullscreenMode;
    ProcessEvent(func, &params);
}
int32_t UGameUserSettings::GetOverallScalabilityLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetOverallScalabilityLevel"));
    struct Params_GetOverallScalabilityLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetOverallScalabilityLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameUserSettings::SetFrameRateLimit(float NewLimit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetFrameRateLimit"));
    struct Params_SetFrameRateLimit {
        float NewLimit; // 0x0
    }; // Size: 0x4
    Params_SetFrameRateLimit params{};
    params.NewLimit = (float)NewLimit;
    ProcessEvent(func, &params);
}
bool UGameUserSettings::IsDirty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsDirty"));
    struct Params_IsDirty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDirty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameUserSettings::SetFoliageQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetFoliageQuality"));
    struct Params_SetFoliageQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetFoliageQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameUserSettings::SetDynamicResolutionEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SetDynamicResolutionEnabled"));
    struct Params_SetDynamicResolutionEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetDynamicResolutionEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UGameUserSettings::GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetResolutionScaleInformation"));
    struct Params_GetResolutionScaleInformation {
        float CurrentScaleNormalized; // 0x0
        int32_t CurrentScaleValue; // 0x4
        int32_t MinScaleValue; // 0x8
        int32_t MaxScaleValue; // 0xc
    }; // Size: 0x10
    Params_GetResolutionScaleInformation params{};
    params.CurrentScaleNormalized = (float)CurrentScaleNormalized;
    params.CurrentScaleValue = (int32_t)CurrentScaleValue;
    params.MinScaleValue = (int32_t)MinScaleValue;
    params.MaxScaleValue = (int32_t)MaxScaleValue;
    ProcessEvent(func, &params);
    CurrentScaleNormalized = params.CurrentScaleNormalized;
    CurrentScaleValue = params.CurrentScaleValue;
    MinScaleValue = params.MinScaleValue;
    MaxScaleValue = params.MaxScaleValue;
}
int32_t UGameUserSettings::GetTextureQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetTextureQuality"));
    struct Params_GetTextureQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTextureQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameUserSettings::SaveSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.SaveSettings"));
    struct Params_SaveSettings {
    }; // Size: 0x0
    Params_SaveSettings params{};
    ProcessEvent(func, &params);
}
FIntPoint UGameUserSettings::GetDefaultWindowPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetDefaultWindowPosition"));
    struct Params_GetDefaultWindowPosition {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDefaultWindowPosition params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
void UGameUserSettings::RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.RunHardwareBenchmark"));
    struct Params_RunHardwareBenchmark {
        int32_t WorkScale; // 0x0
        float CPUMultiplier; // 0x4
        float GPUMultiplier; // 0x8
    }; // Size: 0xc
    Params_RunHardwareBenchmark params{};
    params.WorkScale = (int32_t)WorkScale;
    params.CPUMultiplier = (float)CPUMultiplier;
    params.GPUMultiplier = (float)GPUMultiplier;
    ProcessEvent(func, &params);
}
bool UGameUserSettings::IsDynamicResolutionEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsDynamicResolutionEnabled"));
    struct Params_IsDynamicResolutionEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDynamicResolutionEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameUserSettings::RevertVideoMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.RevertVideoMode"));
    struct Params_RevertVideoMode {
    }; // Size: 0x0
    Params_RevertVideoMode params{};
    ProcessEvent(func, &params);
}
void UGameUserSettings::ResetToCurrentSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ResetToCurrentSettings"));
    struct Params_ResetToCurrentSettings {
    }; // Size: 0x0
    Params_ResetToCurrentSettings params{};
    ProcessEvent(func, &params);
}
bool UGameUserSettings::IsDynamicResolutionDirty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsDynamicResolutionDirty"));
    struct Params_IsDynamicResolutionDirty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDynamicResolutionDirty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UGameUserSettings::GetVisualEffectQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetVisualEffectQuality"));
    struct Params_GetVisualEffectQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVisualEffectQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UGameUserSettings::IsVSyncEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsVSyncEnabled"));
    struct Params_IsVSyncEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVSyncEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameUserSettings::GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetResolutionScaleInformationEx"));
    struct Params_GetResolutionScaleInformationEx {
        float CurrentScaleNormalized; // 0x0
        float CurrentScaleValue; // 0x4
        float MinScaleValue; // 0x8
        float MaxScaleValue; // 0xc
    }; // Size: 0x10
    Params_GetResolutionScaleInformationEx params{};
    params.CurrentScaleNormalized = (float)CurrentScaleNormalized;
    params.CurrentScaleValue = (float)CurrentScaleValue;
    params.MinScaleValue = (float)MinScaleValue;
    params.MaxScaleValue = (float)MaxScaleValue;
    ProcessEvent(func, &params);
    CurrentScaleValue = params.CurrentScaleValue;
    CurrentScaleNormalized = params.CurrentScaleNormalized;
    MaxScaleValue = params.MaxScaleValue;
    MinScaleValue = params.MinScaleValue;
}
bool UGameUserSettings::IsVSyncDirty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsVSyncDirty"));
    struct Params_IsVSyncDirty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVSyncDirty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameUserSettings::IsHDREnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.IsHDREnabled"));
    struct Params_IsHDREnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHDREnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UGameUserSettings::GetViewDistanceQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetViewDistanceQuality"));
    struct Params_GetViewDistanceQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetViewDistanceQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EWindowMode::Type UGameUserSettings::GetPreferredFullscreenMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetPreferredFullscreenMode"));
    struct Params_GetPreferredFullscreenMode {
        EWindowMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPreferredFullscreenMode params{};
    ProcessEvent(func, &params);
    return (EWindowMode::Type)params.ReturnValue;
}
int32_t UGameUserSettings::GetSyncInterval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetSyncInterval"));
    struct Params_GetSyncInterval {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSyncInterval params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UGameUserSettings::GetShadingQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetShadingQuality"));
    struct Params_GetShadingQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetShadingQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FIntPoint UGameUserSettings::GetScreenResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetScreenResolution"));
    struct Params_GetScreenResolution {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetScreenResolution params{};
    ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
float UGameUserSettings::GetResolutionScaleNormalized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetResolutionScaleNormalized"));
    struct Params_GetResolutionScaleNormalized {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetResolutionScaleNormalized params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EWindowMode::Type UGameUserSettings::GetFullscreenMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetFullscreenMode"));
    struct Params_GetFullscreenMode {
        EWindowMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFullscreenMode params{};
    ProcessEvent(func, &params);
    return (EWindowMode::Type)params.ReturnValue;
}
float UGameUserSettings::GetRecommendedResolutionScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetRecommendedResolutionScale"));
    struct Params_GetRecommendedResolutionScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRecommendedResolutionScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FIntPoint UGameUserSettings::GetDesktopResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetDesktopResolution"));
    struct Params_GetDesktopResolution {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDesktopResolution params{};
    ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
int32_t UGameUserSettings::GetPostProcessingQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetPostProcessingQuality"));
    struct Params_GetPostProcessingQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPostProcessingQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FIntPoint UGameUserSettings::GetDefaultResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetDefaultResolution"));
    struct Params_GetDefaultResolution {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDefaultResolution params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FIntPoint UGameUserSettings::GetLastConfirmedScreenResolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetLastConfirmedScreenResolution"));
    struct Params_GetLastConfirmedScreenResolution {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastConfirmedScreenResolution params{};
    ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
EWindowMode::Type UGameUserSettings::GetLastConfirmedFullscreenMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetLastConfirmedFullscreenMode"));
    struct Params_GetLastConfirmedFullscreenMode {
        EWindowMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLastConfirmedFullscreenMode params{};
    ProcessEvent(func, &params);
    return (EWindowMode::Type)params.ReturnValue;
}
UGameUserSettings* UGameUserSettings::GetGameUserSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetGameUserSettings"));
    struct Params_GetGameUserSettings {
        UGameUserSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameUserSettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameUserSettings*)params.ReturnValue;
}
float UGameUserSettings::GetFrameRateLimit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetFrameRateLimit"));
    struct Params_GetFrameRateLimit {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFrameRateLimit params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UGameUserSettings::GetFramePace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetFramePace"));
    struct Params_GetFramePace {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFramePace params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UGameUserSettings::GetCustomQuality(FString InScalabilityGroupName, int32_t& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetCustomQuality"));
    struct Params_GetCustomQuality {
        FString InScalabilityGroupName; // 0x0
        int32_t OutValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetCustomQuality params{};
    params.InScalabilityGroupName = (FString)InScalabilityGroupName;
    params.OutValue = (int32_t)OutValue;
    ProcessEvent(func, &params);
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
int32_t UGameUserSettings::GetFoliageQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetFoliageQuality"));
    struct Params_GetFoliageQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFoliageQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UGameUserSettings::GetDefaultResolutionScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetDefaultResolutionScale"));
    struct Params_GetDefaultResolutionScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDefaultResolutionScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EWindowMode::Type UGameUserSettings::GetDefaultWindowMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetDefaultWindowMode"));
    struct Params_GetDefaultWindowMode {
        EWindowMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultWindowMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EWindowMode::Type)params.ReturnValue;
}
int32_t UGameUserSettings::GetCurrentHDRDisplayNits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetCurrentHDRDisplayNits"));
    struct Params_GetCurrentHDRDisplayNits {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentHDRDisplayNits params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UGameUserSettings::GetAudioQualityLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetAudioQualityLevel"));
    struct Params_GetAudioQualityLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioQualityLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UGameUserSettings::GetAntiAliasingQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.GetAntiAliasingQuality"));
    struct Params_GetAntiAliasingQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAntiAliasingQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameUserSettings::ApplyHardwareBenchmarkResults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ApplyHardwareBenchmarkResults"));
    struct Params_ApplyHardwareBenchmarkResults {
    }; // Size: 0x0
    Params_ApplyHardwareBenchmarkResults params{};
    ProcessEvent(func, &params);
}
void UGameUserSettings::EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.EnableHDRDisplayOutput"));
    struct Params_EnableHDRDisplayOutput {
        bool bEnable; // 0x0
        char pad_1[0x3];
        int32_t DisplayNits; // 0x4
    }; // Size: 0x8
    Params_EnableHDRDisplayOutput params{};
    params.bEnable = (bool)bEnable;
    params.DisplayNits = (int32_t)DisplayNits;
    ProcessEvent(func, &params);
}
void UGameUserSettings::ConfirmVideoMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ConfirmVideoMode"));
    struct Params_ConfirmVideoMode {
    }; // Size: 0x0
    Params_ConfirmVideoMode params{};
    ProcessEvent(func, &params);
}
void UGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ApplySettings"));
    struct Params_ApplySettings {
        bool bCheckForCommandLineOverrides; // 0x0
    }; // Size: 0x1
    Params_ApplySettings params{};
    params.bCheckForCommandLineOverrides = (bool)bCheckForCommandLineOverrides;
    ProcessEvent(func, &params);
}
void UGameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ApplyResolutionSettings"));
    struct Params_ApplyResolutionSettings {
        bool bCheckForCommandLineOverrides; // 0x0
    }; // Size: 0x1
    Params_ApplyResolutionSettings params{};
    params.bCheckForCommandLineOverrides = (bool)bCheckForCommandLineOverrides;
    ProcessEvent(func, &params);
}
void UGameUserSettings::ApplyNonResolutionSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameUserSettings.ApplyNonResolutionSettings"));
    struct Params_ApplyNonResolutionSettings {
    }; // Size: 0x0
    Params_ApplyNonResolutionSettings params{};
    ProcessEvent(func, &params);
}
