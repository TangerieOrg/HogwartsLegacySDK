#pragma once
#include <cstdint>
#include "EAntiAliasingMode.hpp"
#include "EColorVisionDeficiency.hpp"
#include "EDifficulty.hpp"
#include "EHighContrastMode.hpp"
#include "ENvidiaLatencyMode.hpp"
#include "EUpscaleMode.hpp"
#include "FIntPoint.hpp"
#include "FNvidiaLatencyModeInfo.hpp"
#include "FPhoenixCameraSettingsData.hpp"
#include "UGameUserSettings.hpp"
class UPopupScreen;
struct FGraphicsAdapterDesc;
class UObject;
#pragma pack(push, 1)
class UPhoenixGameSettings : public UGameUserSettings {
public:
    char pad_138[0x4];
    float EffectsSoundVolume; // 0x13c
    float MusicSoundVolume; // 0x140
    float VoiceSoundVolume; // 0x144
    bool SoundMuted; // 0x148
    bool MonoAudio; // 0x149
    char pad_14a[0x2];
    float DynamicRange; // 0x14c
    FString MasteringSuite; // 0x150
    bool bEnableRaytracingShadows; // 0x160
    bool bEnableRaytracingReflections; // 0x161
    bool bEnableRaytracingAO; // 0x162
    char pad_163[0x5];
    FString PerformanceMode; // 0x168
    char pad_178[0x1];
    bool bFrameRateUncapped; // 0x179
    char pad_17a[0x36];
    FPhoenixCameraSettingsData CameraSettings; // 0x1b0
    bool MenuReaderEnabled; // 0x238
    char pad_239[0x7];
    FString MenuReaderVoiceID; // 0x240
    FString MenuReaderVoiceDescription; // 0x250
    FString MenuReaderVoiceGender; // 0x260
    float MenuReaderVolume; // 0x270
    EColorVisionDeficiency ColorVisionDeficiencyType; // 0x274
    char pad_275[0x3];
    float CursorSpeedMultiplier; // 0x278
    int32_t MiniMapSize; // 0x27c
    float MiniMapOpacity; // 0x280
    bool PathLineEnabled; // 0x284
    char pad_285[0x3];
    float AccessibilityAudioCueOpacity; // 0x288
    float AccessibilityAudioCueScale; // 0x28c
    bool UseMinimalHud; // 0x290
    bool ShowTargetHighlights; // 0x291
    bool ShowTargetName; // 0x292
    bool ShowHudBeacons; // 0x293
    bool ShowNotificationElements; // 0x294
    bool ShowXPElements; // 0x295
    bool ShowMissionElements; // 0x296
    bool ShowSpellElements; // 0x297
    bool ShowMeterElements; // 0x298
    bool ShowMapElements; // 0x299
    bool ShowTargetElements; // 0x29a
    bool ShowSpecialNotificationElements; // 0x29b
    bool ShowTutorialElements; // 0x29c
    bool ShowToolWheelElements; // 0x29d
    bool ShowEnemyDamageElements; // 0x29e
    bool ShowBeastControls; // 0x29f
    int32_t FontSizeOffset; // 0x2a0
    int32_t FontIndex; // 0x2a4
    int32_t HighContrastMode; // 0x2a8
    bool AudioVisualizer; // 0x2ac
    bool bEnableKeyboardSprintWalkToggle; // 0x2ad
    bool bAccessibilitySpellToggle; // 0x2ae
    bool SubtitlesEnabled; // 0x2af
    bool ArachnophobiaModeEnabled; // 0x2b0
    bool ControllerRumble; // 0x2b1
    bool RGBPeripheralsEnabled; // 0x2b2
    bool AlwaysUseCameraAiming; // 0x2b3
    char pad_2b4[0x4];
    FString INILanguageSetting; // 0x2b8
    FString SwitchTextLanguageSetting; // 0x2c8
    bool TiltControls; // 0x2d8
    char pad_2d9[0x3];
    float TiltSensitivity; // 0x2dc
    bool bIsUpscaleModeModified; // 0x2e0
    EUpscaleMode UpscaleMode; // 0x2e1
    char pad_2e2[0x2];
    float UpscaleSoftness; // 0x2e4
    bool bIsUpscaleSoftnessModified; // 0x2e8
    char pad_2e9[0x17];
    EAntiAliasingMode AntiAliasingMode; // 0x300
    EAntiAliasingMode DefaultAntiAliasingMode; // 0x301
    char pad_302[0x1];
    ENvidiaLatencyMode NvidiaLatencyMode; // 0x303
    bool NvidiaFrameGeneration; // 0x304
    char pad_305[0x3];
    float Brightness; // 0x308
    float MinToneMapLuminance; // 0x30c
    float MidToneMapLuminance; // 0x310
    float MaxToneMapLuminance; // 0x314
    float UIBrightness; // 0x318
    bool bAutomaticHDRCalibration; // 0x31c
    char pad_31d[0x3];
    int32_t MonitorIdx; // 0x320
    bool bHardwareBenchmarkApplied; // 0x324
    char pad_325[0x3];
    int32_t GPUConfigPreset; // 0x328
    int32_t RecViewDistanceQuality; // 0x32c
    int32_t RecAntiAliasingQuality; // 0x330
    int32_t RecShadowQuality; // 0x334
    int32_t RecPostProcessQuality; // 0x338
    int32_t RecTextureQuality; // 0x33c
    int32_t RecEffectsQuality; // 0x340
    int32_t RecFoliageQuality; // 0x344
    int32_t RecShadingQuality; // 0x348
    int32_t RecFogQuality; // 0x34c
    int32_t RecSkyQuality; // 0x350
    int32_t RecPopulationQuality; // 0x354
    int32_t RecRaytracingQuality; // 0x358
    bool bAltTooltipsEnabled; // 0x35c
    bool bPauseOnFocusLoss; // 0x35d
    char pad_35e[0x2];
    float FrameRateLimitMinimized; // 0x360
    uint32_t SubVersion; // 0x364
    char pad_368[0xd8];
    static UPhoenixGameSettings* StaticClass();
    void TriggerAutoReboot();
    bool TestHighContrastMode(EHighContrastMode inContrastMode);
    UPopupScreen* ShowRaytracingRebootPopup();
    bool ShouldShowRGBPeripheralsButton();
    bool ShouldControllerRumble();
    void SetVoiceSoundVolume(float NewVal);
    void SetUseMinimalHud(bool NewVal);
    void SetUpscaleSoftness(float NewSharpness);
    void SetUpscaleMode(EUpscaleMode UpscaleModeInput);
    void SetUncapFrameRate(bool InUncapFrameRate);
    void SetTiltSensitivity(float NewVal);
    void SetTiltControls(bool NewVal);
    static void SetSwitchTextLanguage(FString Lang);
    void SetSubtitlesEnabled(bool NewVal);
    void SetSoundMuted(bool NewVal);
    void SetSkyQuality(int32_t Value);
    void SetShowXPElements(bool NewVal);
    void SetShowTutorialElements(bool NewVal);
    void SetShowToolWheelElements(bool NewVal);
    void SetShowTargetName(bool NewVal);
    void SetShowTargetHighlights(bool NewVal);
    void SetShowTargetElements(bool NewVal);
    void SetShowSpellElements(bool NewVal);
    void SetShowSpecialNotificationElements(bool NewVal);
    void SetShowNotificationElements(bool NewVal);
    void SetShowMissionElements(bool NewVal);
    void SetShowMeterElements(bool NewVal);
    void SetShowMapElements(bool NewVal);
    void SetShowHudBeacons(bool NewVal);
    void SetShowEnemyDamageElements(bool NewVal);
    void SetShowBeastControls(bool NewVal);
    bool SetSelectedMonitor(int32_t SelectedMonitorIdx, bool bForceFullscreen);
    void SetSelectedGPU(FGraphicsAdapterDesc& GpuDesc);
    void SetRGBPeripheralsEnabled(bool NewVal);
    void SetRaytracingSupported(bool bShouldSupport);
    void SetRaytracingShadows(bool bInEnableRaytracingShadows);
    void SetRaytracingReflections(bool bInEnableRaytracingReflections);
    void SetRaytracingQuality(int32_t Value);
    void SetRaytracingAmbientOcclusion(bool bInEnableRaytracingAO);
    void SetPopulationQuality(int32_t Value);
    void SetPerformanceMode(FString InPerformanceMode);
    void SetPauseOnFocusLoss(bool bEnable);
    void SetNvidiaLatencyMode(ENvidiaLatencyMode InMode);
    void SetNvidiaFrameGeneration(bool bEnabled);
    void SetMusicSoundVolume(float NewVal);
    void SetMonoAudio(bool NewVal);
    void SetMiniMapSize(int32_t Size);
    void SetMiniMapPathEnabled(bool Enabled);
    void SetMiniMapOpacity(float Opacity);
    void SetMenuReaderVolume(float InVolume);
    void SetMenuReaderVoice(FString InVoiceID, FString InDescription, FString InGender);
    void SetMenuReaderEnabled(bool Enabled);
    void SetMasteringSuite(FString NewVal);
    void SetINILanguageSetting(FString NewVal);
    void SetIgnoreConfirmVideoMode(bool bIgnore);
    void SetHighContrastModeBits(int32_t inContrastMode);
    void SetHighContrastMode(EHighContrastMode inContrastMode);
    void SetHideNonCinematicElements(bool bHide, UObject* InInstigator);
    bool SetHDRToneMapParameters(bool bAutomatic, float MinToneMapLuminance, float MidToneMapLuminance, float MaxToneMapLuminance, float UIBrightness);
    void SetFontSizeOffset(int32_t NewVal);
    void SetFontIndex(int32_t NewVal);
    void SetFogQuality(int32_t Value);
    void SetEnableKeyboardSprintWalkToggle(bool NewVal);
    void SetEffectSoundVolume(float NewVal);
    void SetDynamicRange(float NewVal);
    void SetDLSSSharpness(float NewSharpness);
    void SetCursorSpeedMultiplier(float NewVal);
    void SetControllerRumble(bool NewVal);
    void SetColorVisionDeficiencyType(EColorVisionDeficiency NewVal);
    void SetBrightness(float NewBrightness);
    void SetAudioVisualizer(bool NewVal);
    void SetArachnophobiaModeEnabled(bool NewVal);
    void SetAntiAliasMode(EAntiAliasingMode Mode);
    void SetAlwaysUseCameraAiming(bool NewVal);
    void SetAltTooltipsEnabled(bool bEnable);
    void SetAccessibilitySpellToggle(bool ToggleOn);
    void SetAccessibilityAudioCueScale(float Scale);
    void SetAccessibilityAudioCueOpacity(float Opacity);
    void ResetUISettings();
    void ResetHDRCalibrationSettings();
    void ResetHardwareBenchmark();
    void ResetGraphicsSettings();
    void ResetGameplaySettings();
    void ResetDisplaySettings();
    void ResetConsoleDisplaySettings();
    void ResetBrightnessSetting();
    void ResetAudioSettings();
    void ResetAccessibilitySettings();
    void RequestTooltipsUpdate();
    bool PerformanceModeChangeRequiresReboot(FString NewPerformanceMode);
    void OnRaytracingRebootPopupButtonPressed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    bool IsUncapFrameRateSupported();
    bool IsPerformanceModeSwitchingAvailable();
    bool IsNvidiaLatencySupported();
    bool IsNvidiaFrameGenerationSupported();
    bool IsNvidiaFrameGenerationLatencyModeCurrentlySupported(ENvidiaLatencyMode InMode);
    bool IsInRaytracingPerformanceMode();
    bool IsHDTextureInstallationAllowed();
    bool IsHardwareBenchmarkApplied();
    bool IsFidelityFXCasEnabled();
    bool IsDLSSEnabled();
    bool HasHardwareBenchmark();
    void HandleFrameRateCapOnPerformanceModeChanged();
    float GetVoiceSoundVolume();
    bool GetUseMinimalHud();
    float GetUpscaleSoftness();
    EUpscaleMode GetUpscaleMode();
    float GetTiltSensitivity();
    bool GetTiltControls();
    static FString GetSwitchTextLanguage();
    bool GetSubtitlesEnabled();
    static int32_t GetSteamDeckV1_GPUDeviceID();
    bool GetSoundMuted();
    int32_t GetSkyQuality();
    bool GetShowXPElements();
    bool GetShowTutorialElements();
    bool GetShowToolWheelElements();
    bool GetShowTargetName();
    bool GetShowTargetHighlights();
    bool GetShowTargetElements();
    bool GetShowSpellElements();
    bool GetShowSpecialNotificationElements();
    bool GetShowNotificationElements();
    bool GetShowMissionElements();
    bool GetShowMeterElements();
    bool GetShowMapElements();
    bool GetShowHudBeacons();
    bool GetShowEnemyDamageElements();
    bool GetShowBeastControls();
    int32_t GetSelectedMonitor();
    bool GetSelectedGPU(FGraphicsAdapterDesc& OutGpuDesc);
    bool GetRGBPeripheralsEnabled();
    bool GetRaytracingShadows();
    bool GetRaytracingReflections();
    int32_t GetRaytracingQuality();
    bool GetRaytracingAmbientOcclusion();
    int32_t GetPopulationQuality();
    static UPhoenixGameSettings* GetPhoenixGameSettings();
    FString GetPerformanceMode();
    bool GetPauseOnFocusLoss();
    TArray<FNvidiaLatencyModeInfo> GetNvidiaLatencyPermittedModes();
    ENvidiaLatencyMode GetNvidiaLatencyMode(bool bDoCheck);
    bool GetNvidiaFrameGeneration(bool bDoCheck);
    FIntPoint GetNativeResolutionOfCurrentMonitor(int32_t OverrideMonitorIdx);
    float GetMusicSoundVolume();
    bool GetMonoAudio();
    int32_t GetMiniMapSize();
    bool GetMiniMapPathEnabled();
    float GetMiniMapOpacity();
    float GetMenuReaderVolume();
    void GetMenuReaderVoice(FString& OutVoiceID, FString& OutDescription, FString& OutGender);
    bool GetMenuReaderEnabled();
    FString GetMasteringSuite();
    FString GetINILanguageSetting();
    int32_t GetHighContrastMode();
    void GetHDRToneMapParameters(float& OutMinToneMapLuminance, float& OutMidToneMapLuminance, float& OutMaxToneMapLuminance, float& UIBrightness);
    static void GetGPUDeviceIDandRev(int32_t& OutDeviceID, int32_t& OutDeviceRevision);
    bool GetFrameRateUncapped();
    int32_t GetFontSizeOffset();
    int32_t GetFontIndex();
    int32_t GetFogQuality();
    bool GetEnableKeyboardSprintWalkToggle();
    float GetEffectsSoundVolume();
    float GetDynamicRange();
    float GetDLSSSharpness();
    void GetDifficultyGamePreset(EDifficulty& Difficulty);
    EAntiAliasingMode GetDefaultAntiAliasMode();
    float GetCursorSpeedMultiplier();
    bool GetControllerRumble();
    EColorVisionDeficiency GetColorVisionDeficiencyType();
    float GetBrightness();
    TArray<FString> GetAvailablePerformanceModesForBootFlow();
    TArray<FString> GetAvailablePerformanceModes();
    bool GetAudioVisualizer();
    bool GetArachnophobiaModeEnabled();
    EAntiAliasingMode GetAntiAliasMode();
    bool GetAlwaysUseCameraAiming();
    bool GetAltTooltipsEnabled();
    bool GetAccessibilitySpellToggle();
    float GetAccessibilityAudioCueScale();
    float GetAccessibilityAudioCueOpacity();
    void FinalizeMinimapSettings();
    static bool EqualEqual_GraphicsAdapterDesc(FGraphicsAdapterDesc& A, FGraphicsAdapterDesc& B);
    void EnableFidelityFXCas(bool bShouldEnable);
    FString CreatePerformanceModesOptionDesc();
    void ClearHighContrastMode(EHighContrastMode inContrastMode);
    bool CanUncapFrameRate();
    bool CanPerformAutoReboot();
    void AttemptToApplyPerformanceMode(bool IsGameBootup);
    bool AreNonCinematicElementsHidden();
    void ApplySettingsDetailed(bool bApplyResolutionSettings, bool bApplyNonResolutionSettings, bool bRequestUIUpdate, bool bSaveSettings, bool bCheckForCommandLineOverrides);
    bool AllowOptionToSetAlwaysUseCameraAiming();
}; // Size: 0x440
#pragma pack(pop)
