#pragma once
#include <cstdint>
#include "EAntiAliasingMode.hpp"
#include "EUpscaleBrand.hpp"
#include "EUpscaleMode.hpp"
#include "FGraphicsAdapterDesc.hpp"
#include "FIntPoint.hpp"
#include "FSimpleMonitorInformation.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UVideoSettingsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UVideoSettingsBlueprintFunctionLibrary* StaticClass();
    static TArray<FIntPoint> SortResolutions(TArray<FIntPoint>& Resolutions);
    static bool ShouldEnableUpscaleSharpnessSlider(EUpscaleMode UpscaleMode);
    static bool ShouldEnableUpscaleModes(EAntiAliasingMode AntiAliasingMode);
    static bool ShouldEnableRenderingResolutionsDropdown(EUpscaleMode UpscaleMode, EAntiAliasingMode AntiAliasingMode);
    static bool ShouldEnableAntiAliasingDropdown(EUpscaleMode UpscaleMode);
    static void SetCalibrationScreenMode(UObject* WorldContextObject, bool bEnabled);
    static bool IsRaytracingEnabledInEngine();
    static bool IsRayTracingAvailable();
    static bool IsRaytracedShadowsEnabledInGame();
    static EUpscaleMode IndexToUpscaleMode(int32_t SelectedIdx);
    static float GetUpscaleModePercentage(EUpscaleMode UpscaleMode, FIntPoint Resolution);
    static EUpscaleBrand GetUpscaleBrandForMode(EUpscaleMode InMode);
    static FIntPoint GetMinResolution();
    static FIntPoint GetHighestAvailableResolution();
    static bool GetHDRToneMapParameters(float& MinToneMapLuminance, float& MaxToneMapLuminance, float& MaxFullFrameTonemapLuminance);
    static bool GetDefaultUpscaleSharpnessIfChanged(EUpscaleMode InOldMode, EUpscaleMode InNewMode, float& OutSharpness);
    static TArray<EUpscaleMode> GetAvailableUpscaleModesForBrand(EUpscaleBrand InBrand);
    static TArray<EUpscaleMode> GetAvailableUpscaleModes();
    static TArray<EUpscaleBrand> GetAvailableUpscaleBrands();
    static TArray<FIntPoint> GetAvailableResolutions();
    static void GetAvailableRenderingResolutions(FIntPoint MonitorNativeResolution);
    static TArray<float> GetAvailableRatios();
    static TArray<FSimpleMonitorInformation> GetAvailableMonitors();
    static bool GetAvailableGPUs(TArray<FGraphicsAdapterDesc>& OutGPUs);
    static TArray<int32_t> GetAvailableFramerateLimits();
    static TArray<EAntiAliasingMode> GetAvailableAntiAliasingModes();
    static EUpscaleMode ConvertModeToEquivBrandMode(EUpscaleMode InMode, EUpscaleBrand InBrand);
}; // Size: 0x28
#pragma pack(pop)
