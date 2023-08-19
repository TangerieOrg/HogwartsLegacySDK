#pragma once
#include <cstdint>
#include "EWindowMode\Type.hpp"
#include "FIntPoint.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameUserSettings : public UObject {
public:
    bool bUseVSync; // 0x28
    bool bUseDynamicResolution; // 0x29
    char pad_2a[0x66];
    uint32_t ResolutionSizeX; // 0x90
    uint32_t ResolutionSizeY; // 0x94
    uint32_t LastUserConfirmedResolutionSizeX; // 0x98
    uint32_t LastUserConfirmedResolutionSizeY; // 0x9c
    int32_t WindowPosX; // 0xa0
    int32_t WindowPosY; // 0xa4
    int32_t FullscreenMode; // 0xa8
    int32_t LastConfirmedFullscreenMode; // 0xac
    int32_t PreferredFullscreenMode; // 0xb0
    uint32_t Version; // 0xb4
    int32_t AudioQualityLevel; // 0xb8
    int32_t LastConfirmedAudioQualityLevel; // 0xbc
    float FrameRateLimit; // 0xc0
    char pad_c4[0x4];
    int32_t DesiredScreenWidth; // 0xc8
    bool bUseDesiredScreenHeight; // 0xcc
    char pad_cd[0x3];
    int32_t DesiredScreenHeight; // 0xd0
    int32_t LastUserConfirmedDesiredScreenWidth; // 0xd4
    int32_t LastUserConfirmedDesiredScreenHeight; // 0xd8
    float LastRecommendedScreenWidth; // 0xdc
    float LastRecommendedScreenHeight; // 0xe0
    float LastCPUBenchmarkResult; // 0xe4
    float LastGPUBenchmarkResult; // 0xe8
    char pad_ec[0x4];
    TArray<float> LastCPUBenchmarkSteps; // 0xf0
    TArray<float> LastGPUBenchmarkSteps; // 0x100
    float LastGPUBenchmarkMultiplier; // 0x110
    bool bUseHDRDisplayOutput; // 0x114
    char pad_115[0x3];
    int32_t HDRDisplayOutputNits; // 0x118
    char pad_11c[0x1c];
    static UGameUserSettings* StaticClass();
    void ValidateSettings();
    bool SupportsHDRDisplayOutput();
    void SetVSyncEnabled(bool bEnable);
    void SetVisualEffectQuality(int32_t Value);
    void SetViewDistanceQuality(int32_t Value);
    void SetToDefaults();
    void SetTextureQuality(int32_t Value);
    void SetShadowQuality(int32_t Value);
    void SetShadingQuality(int32_t Value);
    void SetScreenResolution(FIntPoint Resolution);
    void SetResolutionScaleValueEx(float NewScaleValue);
    void SetResolutionScaleValue(int32_t NewScaleValue);
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    void SetPostProcessingQuality(int32_t Value);
    void SetOverallScalabilityLevel(int32_t Value);
    void SetFullscreenMode(EWindowMode::Type InFullscreenMode);
    void SetFrameRateLimit(float NewLimit);
    void SetFoliageQuality(int32_t Value);
    void SetDynamicResolutionEnabled(bool bEnable);
    bool SetCustomQuality(FString InScalabilityGroupName, int32_t InValue);
    void SetBenchmarkFallbackValues();
    void SetAudioQualityLevel(int32_t QualityLevel);
    void SetAntiAliasingQuality(int32_t Value);
    void SaveSettings();
    void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);
    void RevertVideoMode();
    void ResetToCurrentSettings();
    void LoadSettings(bool bForceReload);
    bool IsVSyncEnabled();
    bool IsVSyncDirty();
    bool IsScreenResolutionDirty();
    bool IsHDREnabled();
    bool IsFullscreenModeDirty();
    bool IsDynamicResolutionEnabled();
    bool IsDynamicResolutionDirty();
    bool IsDirty();
    int32_t GetVisualEffectQuality();
    int32_t GetViewDistanceQuality();
    int32_t GetTextureQuality();
    static int32_t GetSyncInterval();
    int32_t GetShadowQuality();
    int32_t GetShadingQuality();
    FIntPoint GetScreenResolution();
    float GetResolutionScaleNormalized();
    void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue);
    void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue);
    float GetRecommendedResolutionScale();
    EWindowMode::Type GetPreferredFullscreenMode();
    int32_t GetPostProcessingQuality();
    int32_t GetOverallScalabilityLevel();
    FIntPoint GetLastConfirmedScreenResolution();
    EWindowMode::Type GetLastConfirmedFullscreenMode();
    static UGameUserSettings* GetGameUserSettings();
    EWindowMode::Type GetFullscreenMode();
    float GetFrameRateLimit();
    static int32_t GetFramePace();
    int32_t GetFoliageQuality();
    FIntPoint GetDesktopResolution();
    static FIntPoint GetDefaultWindowPosition();
    static EWindowMode::Type GetDefaultWindowMode();
    float GetDefaultResolutionScale();
    static FIntPoint GetDefaultResolution();
    bool GetCustomQuality(FString InScalabilityGroupName, int32_t& OutValue);
    int32_t GetCurrentHDRDisplayNits();
    int32_t GetAudioQualityLevel();
    int32_t GetAntiAliasingQuality();
    void EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits);
    void ConfirmVideoMode();
    void ApplySettings(bool bCheckForCommandLineOverrides);
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    void ApplyNonResolutionSettings();
    void ApplyHardwareBenchmarkResults();
}; // Size: 0x138
#pragma pack(pop)
