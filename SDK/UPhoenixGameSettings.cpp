#include "EAntiAliasingMode.hpp"
#include "EColorVisionDeficiency.hpp"
#include "EDifficulty.hpp"
#include "EHighContrastMode.hpp"
#include "ENvidiaLatencyMode.hpp"
#include "EUpscaleMode.hpp"
#include "FGraphicsAdapterDesc.hpp"
#include "FIntPoint.hpp"
#include "FNvidiaLatencyModeInfo.hpp"
#include "FPhoenixCameraSettingsData.hpp"
#include "UFunction.hpp"
#include "UGameUserSettings.hpp"
#include "UObject.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPopupScreen.hpp"
void UPhoenixGameSettings::SetSubtitlesEnabled(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetSubtitlesEnabled"));
    struct Params_SetSubtitlesEnabled {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetSubtitlesEnabled params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::IsHardwareBenchmarkApplied() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsHardwareBenchmarkApplied"));
    struct Params_IsHardwareBenchmarkApplied {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHardwareBenchmarkApplied params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetVoiceSoundVolume(float NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetVoiceSoundVolume"));
    struct Params_SetVoiceSoundVolume {
        float NewVal; // 0x0
    }; // Size: 0x4
    Params_SetVoiceSoundVolume params{};
    params.NewVal = (float)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetAccessibilitySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetAccessibilitySettings"));
    struct Params_ResetAccessibilitySettings {
    }; // Size: 0x0
    Params_ResetAccessibilitySettings params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetAccessibilityAudioCueOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAccessibilityAudioCueOpacity"));
    struct Params_SetAccessibilityAudioCueOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetAccessibilityAudioCueOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
UPhoenixGameSettings* UPhoenixGameSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixGameSettings");
    return (UPhoenixGameSettings*)res;
}
void UPhoenixGameSettings::SetTiltSensitivity(float NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetTiltSensitivity"));
    struct Params_SetTiltSensitivity {
        float NewVal; // 0x0
    }; // Size: 0x4
    Params_SetTiltSensitivity params{};
    params.NewVal = (float)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowXPElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowXPElements"));
    struct Params_SetShowXPElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowXPElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetUseMinimalHud(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetUseMinimalHud"));
    struct Params_SetUseMinimalHud {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetUseMinimalHud params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetINILanguageSetting(FString NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetINILanguageSetting"));
    struct Params_SetINILanguageSetting {
        FString NewVal; // 0x0
    }; // Size: 0x10
    Params_SetINILanguageSetting params{};
    params.NewVal = (FString)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::TriggerAutoReboot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.TriggerAutoReboot"));
    struct Params_TriggerAutoReboot {
    }; // Size: 0x0
    Params_TriggerAutoReboot params{};
    ProcessEvent(func, &params);
}
UPopupScreen* UPhoenixGameSettings::ShowRaytracingRebootPopup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ShowRaytracingRebootPopup"));
    struct Params_ShowRaytracingRebootPopup {
        UPopupScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowRaytracingRebootPopup params{};
    ProcessEvent(func, &params);
    return (UPopupScreen*)params.ReturnValue;
}
void UPhoenixGameSettings::SetPerformanceMode(FString InPerformanceMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetPerformanceMode"));
    struct Params_SetPerformanceMode {
        FString InPerformanceMode; // 0x0
    }; // Size: 0x10
    Params_SetPerformanceMode params{};
    params.InPerformanceMode = (FString)InPerformanceMode;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::TestHighContrastMode(EHighContrastMode inContrastMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.TestHighContrastMode"));
    struct Params_TestHighContrastMode {
        EHighContrastMode inContrastMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_TestHighContrastMode params{};
    params.inContrastMode = (EHighContrastMode)inContrastMode;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetUpscaleSoftness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetUpscaleSoftness"));
    struct Params_GetUpscaleSoftness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUpscaleSoftness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixGameSettings::ShouldControllerRumble() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ShouldControllerRumble"));
    struct Params_ShouldControllerRumble {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldControllerRumble params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetFogQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetFogQuality"));
    struct Params_SetFogQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetFogQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::IsHDTextureInstallationAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsHDTextureInstallationAllowed"));
    struct Params_IsHDTextureInstallationAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHDTextureInstallationAllowed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::ShouldShowRGBPeripheralsButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ShouldShowRGBPeripheralsButton"));
    struct Params_ShouldShowRGBPeripheralsButton {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldShowRGBPeripheralsButton params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowBeastControls() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowBeastControls"));
    struct Params_GetShowBeastControls {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowBeastControls params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowToolWheelElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowToolWheelElements"));
    struct Params_SetShowToolWheelElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowToolWheelElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetUpscaleSoftness(float NewSharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetUpscaleSoftness"));
    struct Params_SetUpscaleSoftness {
        float NewSharpness; // 0x0
    }; // Size: 0x4
    Params_SetUpscaleSoftness params{};
    params.NewSharpness = (float)NewSharpness;
    ProcessEvent(func, &params);
}
FString UPhoenixGameSettings::GetPerformanceMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetPerformanceMode"));
    struct Params_GetPerformanceMode {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPerformanceMode params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UPhoenixGameSettings::GetRaytracingReflections() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetRaytracingReflections"));
    struct Params_GetRaytracingReflections {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetRaytracingReflections params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::ResetGraphicsSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetGraphicsSettings"));
    struct Params_ResetGraphicsSettings {
    }; // Size: 0x0
    Params_ResetGraphicsSettings params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetUpscaleMode(EUpscaleMode UpscaleModeInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetUpscaleMode"));
    struct Params_SetUpscaleMode {
        EUpscaleMode UpscaleModeInput; // 0x0
    }; // Size: 0x1
    Params_SetUpscaleMode params{};
    params.UpscaleModeInput = (EUpscaleMode)UpscaleModeInput;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowSpecialNotificationElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowSpecialNotificationElements"));
    struct Params_SetShowSpecialNotificationElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowSpecialNotificationElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetUncapFrameRate(bool InUncapFrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetUncapFrameRate"));
    struct Params_SetUncapFrameRate {
        bool InUncapFrameRate; // 0x0
    }; // Size: 0x1
    Params_SetUncapFrameRate params{};
    params.InUncapFrameRate = (bool)InUncapFrameRate;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetControllerRumble() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetControllerRumble"));
    struct Params_GetControllerRumble {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetControllerRumble params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetHighContrastModeBits(int32_t inContrastMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetHighContrastModeBits"));
    struct Params_SetHighContrastModeBits {
        int32_t inContrastMode; // 0x0
    }; // Size: 0x4
    Params_SetHighContrastModeBits params{};
    params.inContrastMode = (int32_t)inContrastMode;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetTiltControls(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetTiltControls"));
    struct Params_SetTiltControls {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetTiltControls params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetSwitchTextLanguage(FString Lang) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetSwitchTextLanguage"));
    struct Params_SetSwitchTextLanguage {
        FString Lang; // 0x0
    }; // Size: 0x10
    Params_SetSwitchTextLanguage params{};
    params.Lang = (FString)Lang;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMenuReaderVolume(float InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMenuReaderVolume"));
    struct Params_SetMenuReaderVolume {
        float InVolume; // 0x0
    }; // Size: 0x4
    Params_SetMenuReaderVolume params{};
    params.InVolume = (float)InVolume;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetSoundMuted(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetSoundMuted"));
    struct Params_SetSoundMuted {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetSoundMuted params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
int32_t UPhoenixGameSettings::GetMiniMapSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMiniMapSize"));
    struct Params_GetMiniMapSize {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMiniMapSize params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPhoenixGameSettings::SetSkyQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetSkyQuality"));
    struct Params_SetSkyQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetSkyQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetShowSpellElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowSpellElements"));
    struct Params_GetShowSpellElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowSpellElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowTutorialElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowTutorialElements"));
    struct Params_SetShowTutorialElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowTutorialElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowTargetName(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowTargetName"));
    struct Params_SetShowTargetName {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowTargetName params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetShowSpecialNotificationElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowSpecialNotificationElements"));
    struct Params_GetShowSpecialNotificationElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowSpecialNotificationElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowTargetHighlights(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowTargetHighlights"));
    struct Params_SetShowTargetHighlights {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowTargetHighlights params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
EUpscaleMode UPhoenixGameSettings::GetUpscaleMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetUpscaleMode"));
    struct Params_GetUpscaleMode {
        EUpscaleMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUpscaleMode params{};
    ProcessEvent(func, &params);
    return (EUpscaleMode)params.ReturnValue;
}
bool UPhoenixGameSettings::IsFidelityFXCasEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsFidelityFXCasEnabled"));
    struct Params_IsFidelityFXCasEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFidelityFXCasEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowTargetElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowTargetElements"));
    struct Params_SetShowTargetElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowTargetElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetArachnophobiaModeEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetArachnophobiaModeEnabled"));
    struct Params_GetArachnophobiaModeEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetArachnophobiaModeEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetPopulationQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetPopulationQuality"));
    struct Params_SetPopulationQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetPopulationQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowSpellElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowSpellElements"));
    struct Params_SetShowSpellElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowSpellElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowNotificationElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowNotificationElements"));
    struct Params_SetShowNotificationElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowNotificationElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::HasHardwareBenchmark() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.HasHardwareBenchmark"));
    struct Params_HasHardwareBenchmark {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasHardwareBenchmark params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowMissionElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowMissionElements"));
    struct Params_SetShowMissionElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowMissionElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetRaytracingReflections(bool bInEnableRaytracingReflections) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetRaytracingReflections"));
    struct Params_SetRaytracingReflections {
        bool bInEnableRaytracingReflections; // 0x0
    }; // Size: 0x1
    Params_SetRaytracingReflections params{};
    params.bInEnableRaytracingReflections = (bool)bInEnableRaytracingReflections;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowMeterElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowMeterElements"));
    struct Params_SetShowMeterElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowMeterElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowMapElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowMapElements"));
    struct Params_SetShowMapElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowMapElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
int32_t UPhoenixGameSettings::GetSkyQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSkyQuality"));
    struct Params_GetSkyQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSkyQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPhoenixGameSettings::SetRaytracingShadows(bool bInEnableRaytracingShadows) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetRaytracingShadows"));
    struct Params_SetRaytracingShadows {
        bool bInEnableRaytracingShadows; // 0x0
    }; // Size: 0x1
    Params_SetRaytracingShadows params{};
    params.bInEnableRaytracingShadows = (bool)bInEnableRaytracingShadows;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetShowHudBeacons(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowHudBeacons"));
    struct Params_SetShowHudBeacons {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowHudBeacons params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetRGBPeripheralsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetRGBPeripheralsEnabled"));
    struct Params_GetRGBPeripheralsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetRGBPeripheralsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowEnemyDamageElements(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowEnemyDamageElements"));
    struct Params_SetShowEnemyDamageElements {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowEnemyDamageElements params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetShowMeterElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowMeterElements"));
    struct Params_GetShowMeterElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowMeterElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetShowBeastControls(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetShowBeastControls"));
    struct Params_SetShowBeastControls {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetShowBeastControls params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetAudioSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetAudioSettings"));
    struct Params_ResetAudioSettings {
    }; // Size: 0x0
    Params_ResetAudioSettings params{};
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::SetSelectedMonitor(int32_t SelectedMonitorIdx, bool bForceFullscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetSelectedMonitor"));
    struct Params_SetSelectedMonitor {
        int32_t SelectedMonitorIdx; // 0x0
        bool bForceFullscreen; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_SetSelectedMonitor params{};
    params.SelectedMonitorIdx = (int32_t)SelectedMonitorIdx;
    params.bForceFullscreen = (bool)bForceFullscreen;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::HandleFrameRateCapOnPerformanceModeChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.HandleFrameRateCapOnPerformanceModeChanged"));
    struct Params_HandleFrameRateCapOnPerformanceModeChanged {
    }; // Size: 0x0
    Params_HandleFrameRateCapOnPerformanceModeChanged params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetSelectedGPU(FGraphicsAdapterDesc& GpuDesc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetSelectedGPU"));
    struct Params_SetSelectedGPU {
        FGraphicsAdapterDesc GpuDesc; // 0x0
    }; // Size: 0x18
    Params_SetSelectedGPU params{};
    params.GpuDesc = (FGraphicsAdapterDesc)GpuDesc;
    ProcessEvent(func, &params);
    GpuDesc = params.GpuDesc;
}
void UPhoenixGameSettings::SetRGBPeripheralsEnabled(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetRGBPeripheralsEnabled"));
    struct Params_SetRGBPeripheralsEnabled {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetRGBPeripheralsEnabled params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetRaytracingSupported(bool bShouldSupport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetRaytracingSupported"));
    struct Params_SetRaytracingSupported {
        bool bShouldSupport; // 0x0
    }; // Size: 0x1
    Params_SetRaytracingSupported params{};
    params.bShouldSupport = (bool)bShouldSupport;
    ProcessEvent(func, &params);
}
float UPhoenixGameSettings::GetDLSSSharpness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetDLSSSharpness"));
    struct Params_GetDLSSSharpness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDLSSSharpness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixGameSettings::SetRaytracingQuality(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetRaytracingQuality"));
    struct Params_SetRaytracingQuality {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetRaytracingQuality params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetRaytracingAmbientOcclusion(bool bInEnableRaytracingAO) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetRaytracingAmbientOcclusion"));
    struct Params_SetRaytracingAmbientOcclusion {
        bool bInEnableRaytracingAO; // 0x0
    }; // Size: 0x1
    Params_SetRaytracingAmbientOcclusion params{};
    params.bInEnableRaytracingAO = (bool)bInEnableRaytracingAO;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMonoAudio(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMonoAudio"));
    struct Params_SetMonoAudio {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetMonoAudio params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetTiltControls() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetTiltControls"));
    struct Params_GetTiltControls {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTiltControls params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetPauseOnFocusLoss(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetPauseOnFocusLoss"));
    struct Params_SetPauseOnFocusLoss {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetPauseOnFocusLoss params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetNvidiaLatencyMode(ENvidiaLatencyMode InMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetNvidiaLatencyMode"));
    struct Params_SetNvidiaLatencyMode {
        ENvidiaLatencyMode InMode; // 0x0
    }; // Size: 0x1
    Params_SetNvidiaLatencyMode params{};
    params.InMode = (ENvidiaLatencyMode)InMode;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMiniMapPathEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMiniMapPathEnabled"));
    struct Params_SetMiniMapPathEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetMiniMapPathEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetCursorSpeedMultiplier(float NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetCursorSpeedMultiplier"));
    struct Params_SetCursorSpeedMultiplier {
        float NewVal; // 0x0
    }; // Size: 0x4
    Params_SetCursorSpeedMultiplier params{};
    params.NewVal = (float)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetNvidiaFrameGeneration(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetNvidiaFrameGeneration"));
    struct Params_SetNvidiaFrameGeneration {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetNvidiaFrameGeneration params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetHighContrastMode(EHighContrastMode inContrastMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetHighContrastMode"));
    struct Params_SetHighContrastMode {
        EHighContrastMode inContrastMode; // 0x0
    }; // Size: 0x1
    Params_SetHighContrastMode params{};
    params.inContrastMode = (EHighContrastMode)inContrastMode;
    ProcessEvent(func, &params);
}
FIntPoint UPhoenixGameSettings::GetNativeResolutionOfCurrentMonitor(int32_t OverrideMonitorIdx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetNativeResolutionOfCurrentMonitor"));
    struct Params_GetNativeResolutionOfCurrentMonitor {
        int32_t OverrideMonitorIdx; // 0x0
        FIntPoint ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetNativeResolutionOfCurrentMonitor params{};
    params.OverrideMonitorIdx = (int32_t)OverrideMonitorIdx;
    ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
void UPhoenixGameSettings::SetMusicSoundVolume(float NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMusicSoundVolume"));
    struct Params_SetMusicSoundVolume {
        float NewVal; // 0x0
    }; // Size: 0x4
    Params_SetMusicSoundVolume params{};
    params.NewVal = (float)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMiniMapSize(int32_t Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMiniMapSize"));
    struct Params_SetMiniMapSize {
        int32_t Size; // 0x0
    }; // Size: 0x4
    Params_SetMiniMapSize params{};
    params.Size = (int32_t)Size;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMiniMapOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMiniMapOpacity"));
    struct Params_SetMiniMapOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetMiniMapOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMenuReaderVoice(FString InVoiceID, FString InDescription, FString InGender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMenuReaderVoice"));
    struct Params_SetMenuReaderVoice {
        FString InVoiceID; // 0x0
        FString InDescription; // 0x10
        FString InGender; // 0x20
    }; // Size: 0x30
    Params_SetMenuReaderVoice params{};
    params.InVoiceID = (FString)InVoiceID;
    params.InDescription = (FString)InDescription;
    params.InGender = (FString)InGender;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMenuReaderEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMenuReaderEnabled"));
    struct Params_SetMenuReaderEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetMenuReaderEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetMasteringSuite(FString NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetMasteringSuite"));
    struct Params_SetMasteringSuite {
        FString NewVal; // 0x0
    }; // Size: 0x10
    Params_SetMasteringSuite params{};
    params.NewVal = (FString)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetAlwaysUseCameraAiming(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAlwaysUseCameraAiming"));
    struct Params_SetAlwaysUseCameraAiming {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysUseCameraAiming params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetIgnoreConfirmVideoMode(bool bIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetIgnoreConfirmVideoMode"));
    struct Params_SetIgnoreConfirmVideoMode {
        bool bIgnore; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreConfirmVideoMode params{};
    params.bIgnore = (bool)bIgnore;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetHideNonCinematicElements(bool bHide, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetHideNonCinematicElements"));
    struct Params_SetHideNonCinematicElements {
        bool bHide; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_SetHideNonCinematicElements params{};
    params.bHide = (bool)bHide;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::SetHDRToneMapParameters(bool bAutomatic, float MinToneMapLuminance, float MidToneMapLuminance, float MaxToneMapLuminance, float UIBrightness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetHDRToneMapParameters"));
    struct Params_SetHDRToneMapParameters {
        bool bAutomatic; // 0x0
        char pad_1[0x3];
        float MinToneMapLuminance; // 0x4
        float MidToneMapLuminance; // 0x8
        float MaxToneMapLuminance; // 0xc
        float UIBrightness; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_SetHDRToneMapParameters params{};
    params.bAutomatic = (bool)bAutomatic;
    params.MinToneMapLuminance = (float)MinToneMapLuminance;
    params.MidToneMapLuminance = (float)MidToneMapLuminance;
    params.MaxToneMapLuminance = (float)MaxToneMapLuminance;
    params.UIBrightness = (float)UIBrightness;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetFontSizeOffset(int32_t NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetFontSizeOffset"));
    struct Params_SetFontSizeOffset {
        int32_t NewVal; // 0x0
    }; // Size: 0x4
    Params_SetFontSizeOffset params{};
    params.NewVal = (int32_t)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetFontIndex(int32_t NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetFontIndex"));
    struct Params_SetFontIndex {
        int32_t NewVal; // 0x0
    }; // Size: 0x4
    Params_SetFontIndex params{};
    params.NewVal = (int32_t)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetEnableKeyboardSprintWalkToggle(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetEnableKeyboardSprintWalkToggle"));
    struct Params_SetEnableKeyboardSprintWalkToggle {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetEnableKeyboardSprintWalkToggle params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetEffectSoundVolume(float NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetEffectSoundVolume"));
    struct Params_SetEffectSoundVolume {
        float NewVal; // 0x0
    }; // Size: 0x4
    Params_SetEffectSoundVolume params{};
    params.NewVal = (float)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetDynamicRange(float NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetDynamicRange"));
    struct Params_SetDynamicRange {
        float NewVal; // 0x0
    }; // Size: 0x4
    Params_SetDynamicRange params{};
    params.NewVal = (float)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetSelectedGPU(FGraphicsAdapterDesc& OutGpuDesc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSelectedGPU"));
    struct Params_GetSelectedGPU {
        FGraphicsAdapterDesc OutGpuDesc; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetSelectedGPU params{};
    params.OutGpuDesc = (FGraphicsAdapterDesc)OutGpuDesc;
    ProcessEvent(func, &params);
    OutGpuDesc = params.OutGpuDesc;
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetDLSSSharpness(float NewSharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetDLSSSharpness"));
    struct Params_SetDLSSSharpness {
        float NewSharpness; // 0x0
    }; // Size: 0x4
    Params_SetDLSSSharpness params{};
    params.NewSharpness = (float)NewSharpness;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetAccessibilitySpellToggle(bool ToggleOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAccessibilitySpellToggle"));
    struct Params_SetAccessibilitySpellToggle {
        bool ToggleOn; // 0x0
    }; // Size: 0x1
    Params_SetAccessibilitySpellToggle params{};
    params.ToggleOn = (bool)ToggleOn;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetControllerRumble(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetControllerRumble"));
    struct Params_SetControllerRumble {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetControllerRumble params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
FString UPhoenixGameSettings::GetSwitchTextLanguage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSwitchTextLanguage"));
    struct Params_GetSwitchTextLanguage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSwitchTextLanguage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPhoenixGameSettings::SetColorVisionDeficiencyType(EColorVisionDeficiency NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetColorVisionDeficiencyType"));
    struct Params_SetColorVisionDeficiencyType {
        EColorVisionDeficiency NewVal; // 0x0
    }; // Size: 0x1
    Params_SetColorVisionDeficiencyType params{};
    params.NewVal = (EColorVisionDeficiency)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetBrightness(float NewBrightness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetBrightness"));
    struct Params_SetBrightness {
        float NewBrightness; // 0x0
    }; // Size: 0x4
    Params_SetBrightness params{};
    params.NewBrightness = (float)NewBrightness;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetAudioVisualizer(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAudioVisualizer"));
    struct Params_SetAudioVisualizer {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetAudioVisualizer params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetArachnophobiaModeEnabled(bool NewVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetArachnophobiaModeEnabled"));
    struct Params_SetArachnophobiaModeEnabled {
        bool NewVal; // 0x0
    }; // Size: 0x1
    Params_SetArachnophobiaModeEnabled params{};
    params.NewVal = (bool)NewVal;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetShowMissionElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowMissionElements"));
    struct Params_GetShowMissionElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowMissionElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::SetAntiAliasMode(EAntiAliasingMode Mode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAntiAliasMode"));
    struct Params_SetAntiAliasMode {
        EAntiAliasingMode Mode; // 0x0
    }; // Size: 0x1
    Params_SetAntiAliasMode params{};
    params.Mode = (EAntiAliasingMode)Mode;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetAltTooltipsEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAltTooltipsEnabled"));
    struct Params_SetAltTooltipsEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetAltTooltipsEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::SetAccessibilityAudioCueScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.SetAccessibilityAudioCueScale"));
    struct Params_SetAccessibilityAudioCueScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetAccessibilityAudioCueScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetUISettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetUISettings"));
    struct Params_ResetUISettings {
    }; // Size: 0x0
    Params_ResetUISettings params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetHDRCalibrationSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetHDRCalibrationSettings"));
    struct Params_ResetHDRCalibrationSettings {
    }; // Size: 0x0
    Params_ResetHDRCalibrationSettings params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetHardwareBenchmark() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetHardwareBenchmark"));
    struct Params_ResetHardwareBenchmark {
    }; // Size: 0x0
    Params_ResetHardwareBenchmark params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetGameplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetGameplaySettings"));
    struct Params_ResetGameplaySettings {
    }; // Size: 0x0
    Params_ResetGameplaySettings params{};
    ProcessEvent(func, &params);
}
FString UPhoenixGameSettings::CreatePerformanceModesOptionDesc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.CreatePerformanceModesOptionDesc"));
    struct Params_CreatePerformanceModesOptionDesc {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_CreatePerformanceModesOptionDesc params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPhoenixGameSettings::ResetDisplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetDisplaySettings"));
    struct Params_ResetDisplaySettings {
    }; // Size: 0x0
    Params_ResetDisplaySettings params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::ResetConsoleDisplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetConsoleDisplaySettings"));
    struct Params_ResetConsoleDisplaySettings {
    }; // Size: 0x0
    Params_ResetConsoleDisplaySettings params{};
    ProcessEvent(func, &params);
}
TArray<FNvidiaLatencyModeInfo> UPhoenixGameSettings::GetNvidiaLatencyPermittedModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetNvidiaLatencyPermittedModes"));
    struct Params_GetNvidiaLatencyPermittedModes {
        TArray<FNvidiaLatencyModeInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNvidiaLatencyPermittedModes params{};
    ProcessEvent(func, &params);
    return (TArray<FNvidiaLatencyModeInfo>)params.ReturnValue;
}
void UPhoenixGameSettings::ResetBrightnessSetting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ResetBrightnessSetting"));
    struct Params_ResetBrightnessSetting {
    }; // Size: 0x0
    Params_ResetBrightnessSetting params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameSettings::RequestTooltipsUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.RequestTooltipsUpdate"));
    struct Params_RequestTooltipsUpdate {
    }; // Size: 0x0
    Params_RequestTooltipsUpdate params{};
    ProcessEvent(func, &params);
}
float UPhoenixGameSettings::GetMusicSoundVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMusicSoundVolume"));
    struct Params_GetMusicSoundVolume {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMusicSoundVolume params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixGameSettings::PerformanceModeChangeRequiresReboot(FString NewPerformanceMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.PerformanceModeChangeRequiresReboot"));
    struct Params_PerformanceModeChangeRequiresReboot {
        FString NewPerformanceMode; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PerformanceModeChangeRequiresReboot params{};
    params.NewPerformanceMode = (FString)NewPerformanceMode;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::OnRaytracingRebootPopupButtonPressed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.OnRaytracingRebootPopupButtonPressed"));
    struct Params_OnRaytracingRebootPopupButtonPressed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnRaytracingRebootPopupButtonPressed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::IsUncapFrameRateSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsUncapFrameRateSupported"));
    struct Params_IsUncapFrameRateSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUncapFrameRateSupported params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::GetHDRToneMapParameters(float& OutMinToneMapLuminance, float& OutMidToneMapLuminance, float& OutMaxToneMapLuminance, float& UIBrightness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetHDRToneMapParameters"));
    struct Params_GetHDRToneMapParameters {
        float OutMinToneMapLuminance; // 0x0
        float OutMidToneMapLuminance; // 0x4
        float OutMaxToneMapLuminance; // 0x8
        float UIBrightness; // 0xc
    }; // Size: 0x10
    Params_GetHDRToneMapParameters params{};
    params.OutMinToneMapLuminance = (float)OutMinToneMapLuminance;
    params.OutMidToneMapLuminance = (float)OutMidToneMapLuminance;
    params.OutMaxToneMapLuminance = (float)OutMaxToneMapLuminance;
    params.UIBrightness = (float)UIBrightness;
    ProcessEvent(func, &params);
    OutMidToneMapLuminance = params.OutMidToneMapLuminance;
    OutMinToneMapLuminance = params.OutMinToneMapLuminance;
    OutMaxToneMapLuminance = params.OutMaxToneMapLuminance;
    UIBrightness = params.UIBrightness;
}
bool UPhoenixGameSettings::IsPerformanceModeSwitchingAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsPerformanceModeSwitchingAvailable"));
    struct Params_IsPerformanceModeSwitchingAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPerformanceModeSwitchingAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::IsNvidiaLatencySupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsNvidiaLatencySupported"));
    struct Params_IsNvidiaLatencySupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNvidiaLatencySupported params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::IsNvidiaFrameGenerationSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsNvidiaFrameGenerationSupported"));
    struct Params_IsNvidiaFrameGenerationSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNvidiaFrameGenerationSupported params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::IsNvidiaFrameGenerationLatencyModeCurrentlySupported(ENvidiaLatencyMode InMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsNvidiaFrameGenerationLatencyModeCurrentlySupported"));
    struct Params_IsNvidiaFrameGenerationLatencyModeCurrentlySupported {
        ENvidiaLatencyMode InMode; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsNvidiaFrameGenerationLatencyModeCurrentlySupported params{};
    params.InMode = (ENvidiaLatencyMode)InMode;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::IsInRaytracingPerformanceMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsInRaytracingPerformanceMode"));
    struct Params_IsInRaytracingPerformanceMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInRaytracingPerformanceMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::IsDLSSEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.IsDLSSEnabled"));
    struct Params_IsDLSSEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDLSSEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetVoiceSoundVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetVoiceSoundVolume"));
    struct Params_GetVoiceSoundVolume {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVoiceSoundVolume params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowTargetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowTargetName"));
    struct Params_GetShowTargetName {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowTargetName params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetUseMinimalHud() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetUseMinimalHud"));
    struct Params_GetUseMinimalHud {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUseMinimalHud params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetTiltSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetTiltSensitivity"));
    struct Params_GetTiltSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTiltSensitivity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowToolWheelElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowToolWheelElements"));
    struct Params_GetShowToolWheelElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowToolWheelElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetSubtitlesEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSubtitlesEnabled"));
    struct Params_GetSubtitlesEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSubtitlesEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetSteamDeckV1_GPUDeviceID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSteamDeckV1_GPUDeviceID"));
    struct Params_GetSteamDeckV1_GPUDeviceID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSteamDeckV1_GPUDeviceID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UPhoenixGameSettings::GetSoundMuted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSoundMuted"));
    struct Params_GetSoundMuted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSoundMuted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowXPElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowXPElements"));
    struct Params_GetShowXPElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowXPElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowTutorialElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowTutorialElements"));
    struct Params_GetShowTutorialElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowTutorialElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowTargetHighlights() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowTargetHighlights"));
    struct Params_GetShowTargetHighlights {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowTargetHighlights params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowTargetElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowTargetElements"));
    struct Params_GetShowTargetElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowTargetElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowNotificationElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowNotificationElements"));
    struct Params_GetShowNotificationElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowNotificationElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::EnableFidelityFXCas(bool bShouldEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.EnableFidelityFXCas"));
    struct Params_EnableFidelityFXCas {
        bool bShouldEnable; // 0x0
    }; // Size: 0x1
    Params_EnableFidelityFXCas params{};
    params.bShouldEnable = (bool)bShouldEnable;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetShowMapElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowMapElements"));
    struct Params_GetShowMapElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowMapElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowHudBeacons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowHudBeacons"));
    struct Params_GetShowHudBeacons {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowHudBeacons params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetMenuReaderVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMenuReaderVolume"));
    struct Params_GetMenuReaderVolume {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMenuReaderVolume params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixGameSettings::GetShowEnemyDamageElements() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetShowEnemyDamageElements"));
    struct Params_GetShowEnemyDamageElements {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowEnemyDamageElements params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetSelectedMonitor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetSelectedMonitor"));
    struct Params_GetSelectedMonitor {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSelectedMonitor params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UPhoenixGameSettings::GetRaytracingShadows() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetRaytracingShadows"));
    struct Params_GetRaytracingShadows {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetRaytracingShadows params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetRaytracingQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetRaytracingQuality"));
    struct Params_GetRaytracingQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRaytracingQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPhoenixGameSettings::AttemptToApplyPerformanceMode(bool IsGameBootup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.AttemptToApplyPerformanceMode"));
    struct Params_AttemptToApplyPerformanceMode {
        bool IsGameBootup; // 0x0
    }; // Size: 0x1
    Params_AttemptToApplyPerformanceMode params{};
    params.IsGameBootup = (bool)IsGameBootup;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::GetRaytracingAmbientOcclusion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetRaytracingAmbientOcclusion"));
    struct Params_GetRaytracingAmbientOcclusion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetRaytracingAmbientOcclusion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetPopulationQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetPopulationQuality"));
    struct Params_GetPopulationQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPopulationQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UPhoenixGameSettings* UPhoenixGameSettings::GetPhoenixGameSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetPhoenixGameSettings"));
    struct Params_GetPhoenixGameSettings {
        UPhoenixGameSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhoenixGameSettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPhoenixGameSettings*)params.ReturnValue;
}
bool UPhoenixGameSettings::GetPauseOnFocusLoss() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetPauseOnFocusLoss"));
    struct Params_GetPauseOnFocusLoss {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPauseOnFocusLoss params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ENvidiaLatencyMode UPhoenixGameSettings::GetNvidiaLatencyMode(bool bDoCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetNvidiaLatencyMode"));
    struct Params_GetNvidiaLatencyMode {
        bool bDoCheck; // 0x0
        ENvidiaLatencyMode ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetNvidiaLatencyMode params{};
    params.bDoCheck = (bool)bDoCheck;
    ProcessEvent(func, &params);
    return (ENvidiaLatencyMode)params.ReturnValue;
}
bool UPhoenixGameSettings::GetNvidiaFrameGeneration(bool bDoCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetNvidiaFrameGeneration"));
    struct Params_GetNvidiaFrameGeneration {
        bool bDoCheck; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetNvidiaFrameGeneration params{};
    params.bDoCheck = (bool)bDoCheck;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetMonoAudio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMonoAudio"));
    struct Params_GetMonoAudio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMonoAudio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetMiniMapPathEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMiniMapPathEnabled"));
    struct Params_GetMiniMapPathEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMiniMapPathEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetMiniMapOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMiniMapOpacity"));
    struct Params_GetMiniMapOpacity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMiniMapOpacity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixGameSettings::GetMenuReaderVoice(FString& OutVoiceID, FString& OutDescription, FString& OutGender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMenuReaderVoice"));
    struct Params_GetMenuReaderVoice {
        FString OutVoiceID; // 0x0
        FString OutDescription; // 0x10
        FString OutGender; // 0x20
    }; // Size: 0x30
    Params_GetMenuReaderVoice params{};
    params.OutVoiceID = (FString)OutVoiceID;
    params.OutDescription = (FString)OutDescription;
    params.OutGender = (FString)OutGender;
    ProcessEvent(func, &params);
    OutVoiceID = params.OutVoiceID;
    OutDescription = params.OutDescription;
    OutGender = params.OutGender;
}
bool UPhoenixGameSettings::GetMenuReaderEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMenuReaderEnabled"));
    struct Params_GetMenuReaderEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMenuReaderEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::GetDifficultyGamePreset(EDifficulty& Difficulty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetDifficultyGamePreset"));
    struct Params_GetDifficultyGamePreset {
        EDifficulty Difficulty; // 0x0
    }; // Size: 0x1
    Params_GetDifficultyGamePreset params{};
    params.Difficulty = (EDifficulty)Difficulty;
    ProcessEvent(func, &params);
    Difficulty = params.Difficulty;
}
FString UPhoenixGameSettings::GetMasteringSuite() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetMasteringSuite"));
    struct Params_GetMasteringSuite {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMasteringSuite params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UPhoenixGameSettings::GetINILanguageSetting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetINILanguageSetting"));
    struct Params_GetINILanguageSetting {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetINILanguageSetting params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetHighContrastMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetHighContrastMode"));
    struct Params_GetHighContrastMode {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHighContrastMode params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPhoenixGameSettings::GetGPUDeviceIDandRev(int32_t& OutDeviceID, int32_t& OutDeviceRevision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetGPUDeviceIDandRev"));
    struct Params_GetGPUDeviceIDandRev {
        int32_t OutDeviceID; // 0x0
        int32_t OutDeviceRevision; // 0x4
    }; // Size: 0x8
    Params_GetGPUDeviceIDandRev params{};
    params.OutDeviceID = (int32_t)OutDeviceID;
    params.OutDeviceRevision = (int32_t)OutDeviceRevision;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDeviceID = params.OutDeviceID;
    OutDeviceRevision = params.OutDeviceRevision;
}
bool UPhoenixGameSettings::GetFrameRateUncapped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetFrameRateUncapped"));
    struct Params_GetFrameRateUncapped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFrameRateUncapped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetFontSizeOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetFontSizeOffset"));
    struct Params_GetFontSizeOffset {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFontSizeOffset params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UPhoenixGameSettings::GetFontIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetFontIndex"));
    struct Params_GetFontIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFontIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPhoenixGameSettings::FinalizeMinimapSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.FinalizeMinimapSettings"));
    struct Params_FinalizeMinimapSettings {
    }; // Size: 0x0
    Params_FinalizeMinimapSettings params{};
    ProcessEvent(func, &params);
}
int32_t UPhoenixGameSettings::GetFogQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetFogQuality"));
    struct Params_GetFogQuality {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFogQuality params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UPhoenixGameSettings::GetEnableKeyboardSprintWalkToggle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetEnableKeyboardSprintWalkToggle"));
    struct Params_GetEnableKeyboardSprintWalkToggle {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetEnableKeyboardSprintWalkToggle params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetEffectsSoundVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetEffectsSoundVolume"));
    struct Params_GetEffectsSoundVolume {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEffectsSoundVolume params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixGameSettings::GetDynamicRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetDynamicRange"));
    struct Params_GetDynamicRange {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDynamicRange params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EAntiAliasingMode UPhoenixGameSettings::GetDefaultAntiAliasMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetDefaultAntiAliasMode"));
    struct Params_GetDefaultAntiAliasMode {
        EAntiAliasingMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultAntiAliasMode params{};
    ProcessEvent(func, &params);
    return (EAntiAliasingMode)params.ReturnValue;
}
float UPhoenixGameSettings::GetCursorSpeedMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetCursorSpeedMultiplier"));
    struct Params_GetCursorSpeedMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCursorSpeedMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EColorVisionDeficiency UPhoenixGameSettings::GetColorVisionDeficiencyType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetColorVisionDeficiencyType"));
    struct Params_GetColorVisionDeficiencyType {
        EColorVisionDeficiency ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetColorVisionDeficiencyType params{};
    ProcessEvent(func, &params);
    return (EColorVisionDeficiency)params.ReturnValue;
}
float UPhoenixGameSettings::GetBrightness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetBrightness"));
    struct Params_GetBrightness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBrightness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FString> UPhoenixGameSettings::GetAvailablePerformanceModesForBootFlow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAvailablePerformanceModesForBootFlow"));
    struct Params_GetAvailablePerformanceModesForBootFlow {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailablePerformanceModesForBootFlow params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
TArray<FString> UPhoenixGameSettings::GetAvailablePerformanceModes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAvailablePerformanceModes"));
    struct Params_GetAvailablePerformanceModes {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailablePerformanceModes params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
bool UPhoenixGameSettings::GetAudioVisualizer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAudioVisualizer"));
    struct Params_GetAudioVisualizer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAudioVisualizer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetAccessibilityAudioCueOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAccessibilityAudioCueOpacity"));
    struct Params_GetAccessibilityAudioCueOpacity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAccessibilityAudioCueOpacity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EAntiAliasingMode UPhoenixGameSettings::GetAntiAliasMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAntiAliasMode"));
    struct Params_GetAntiAliasMode {
        EAntiAliasingMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAntiAliasMode params{};
    ProcessEvent(func, &params);
    return (EAntiAliasingMode)params.ReturnValue;
}
bool UPhoenixGameSettings::GetAlwaysUseCameraAiming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAlwaysUseCameraAiming"));
    struct Params_GetAlwaysUseCameraAiming {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAlwaysUseCameraAiming params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetAltTooltipsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAltTooltipsEnabled"));
    struct Params_GetAltTooltipsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAltTooltipsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::GetAccessibilitySpellToggle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAccessibilitySpellToggle"));
    struct Params_GetAccessibilitySpellToggle {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAccessibilitySpellToggle params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixGameSettings::GetAccessibilityAudioCueScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.GetAccessibilityAudioCueScale"));
    struct Params_GetAccessibilityAudioCueScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAccessibilityAudioCueScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixGameSettings::EqualEqual_GraphicsAdapterDesc(FGraphicsAdapterDesc& A, FGraphicsAdapterDesc& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.EqualEqual_GraphicsAdapterDesc"));
    struct Params_EqualEqual_GraphicsAdapterDesc {
        FGraphicsAdapterDesc A; // 0x0
        FGraphicsAdapterDesc B; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_EqualEqual_GraphicsAdapterDesc params{};
    params.A = (FGraphicsAdapterDesc)A;
    params.B = (FGraphicsAdapterDesc)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::ClearHighContrastMode(EHighContrastMode inContrastMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ClearHighContrastMode"));
    struct Params_ClearHighContrastMode {
        EHighContrastMode inContrastMode; // 0x0
    }; // Size: 0x1
    Params_ClearHighContrastMode params{};
    params.inContrastMode = (EHighContrastMode)inContrastMode;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::CanUncapFrameRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.CanUncapFrameRate"));
    struct Params_CanUncapFrameRate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanUncapFrameRate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::CanPerformAutoReboot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.CanPerformAutoReboot"));
    struct Params_CanPerformAutoReboot {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPerformAutoReboot params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixGameSettings::AreNonCinematicElementsHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.AreNonCinematicElementsHidden"));
    struct Params_AreNonCinematicElementsHidden {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreNonCinematicElementsHidden params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameSettings::ApplySettingsDetailed(bool bApplyResolutionSettings, bool bApplyNonResolutionSettings, bool bRequestUIUpdate, bool bSaveSettings, bool bCheckForCommandLineOverrides) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.ApplySettingsDetailed"));
    struct Params_ApplySettingsDetailed {
        bool bApplyResolutionSettings; // 0x0
        bool bApplyNonResolutionSettings; // 0x1
        bool bRequestUIUpdate; // 0x2
        bool bSaveSettings; // 0x3
        bool bCheckForCommandLineOverrides; // 0x4
    }; // Size: 0x5
    Params_ApplySettingsDetailed params{};
    params.bApplyResolutionSettings = (bool)bApplyResolutionSettings;
    params.bApplyNonResolutionSettings = (bool)bApplyNonResolutionSettings;
    params.bRequestUIUpdate = (bool)bRequestUIUpdate;
    params.bSaveSettings = (bool)bSaveSettings;
    params.bCheckForCommandLineOverrides = (bool)bCheckForCommandLineOverrides;
    ProcessEvent(func, &params);
}
bool UPhoenixGameSettings::AllowOptionToSetAlwaysUseCameraAiming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameSettings.AllowOptionToSetAlwaysUseCameraAiming"));
    struct Params_AllowOptionToSetAlwaysUseCameraAiming {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AllowOptionToSetAlwaysUseCameraAiming params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
