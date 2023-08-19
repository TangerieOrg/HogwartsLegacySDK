#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ERenderSettingsIndoorsType.hpp"
#include "FBlendDomainState.hpp"
#include "FDistanceFog.hpp"
#include "FDistanceFogCompute.hpp"
#include "FEmissiveAdaptationStateCompute.hpp"
#include "FLastRenderedExposure.hpp"
#include "FLastRenderedExposurePair.hpp"
#include "FLightAdaptationTracker.hpp"
#include "FPlayerCentricPostProcessingOverrides.hpp"
#include "FPostProcessSettings.hpp"
#include "FRenderSettingsEmissiveAdaptation.hpp"
#include "FRenderSettingsPostProcessingGroup.hpp"
#include "FVector.hpp"
class UPlayerCentricPostProcessingComponent;
class UPostProcessComponent;
class UObject;
class UDirectionalLightComponent;
#pragma pack(push, 1)
class ARenderSettingsSingleton : public AActor {
public:
    char pad_248[0x8];
    FRenderSettingsPostProcessingGroup DefaultPostProcessing; // 0x250
    char pad_2ac[0x4];
    FLightAdaptationTracker LightAdaptation; // 0x2b0
    bool bCreatedInInactiveWorld; // 0x348
    char pad_349[0x7];
    FPostProcessSettings EnginePostProcessSettings; // 0x350
    FDistanceFog DefaultDistanceFog; // 0x940
    FDistanceFogCompute DistanceFog; // 0xb00
    FRenderSettingsEmissiveAdaptation DefaultEmissiveAdaptation; // 0xb10
    FEmissiveAdaptationStateCompute EmissiveAdaptation; // 0xba0
    FPlayerCentricPostProcessingOverrides PlayerCentricViewpointOverrides; // 0xc80
    UPlayerCentricPostProcessingComponent* PlayerCentricPostProcessing; // 0xc90
    FBlendDomainState ViewpointState; // 0xc98
    FBlendDomainState CameraState; // 0xd90
    FBlendDomainState PlayerState; // 0xe88
    FLastRenderedExposurePair LastFrameExposure; // 0xf80
    FLastRenderedExposure LastValidExposure; // 0xfe8
    float ViewpointEye0Player1Lerp; // 0x1008
    int32_t ActiveEditorViewport; // 0x100c
    uint32_t LastCameraCutFrame; // 0x1010
    uint32_t LastExposureRenderCutFrame; // 0x1014
    bool bInExposureRenderingCut; // 0x1018
    bool bIsFixedExposure; // 0x1019
    char pad_101a[0x6];
    UPostProcessComponent* DebugPostProcessComponent; // 0x1020
    char pad_1028[0x8];
    static ARenderSettingsSingleton* StaticClass();
    static float RenderSettingsGetOvercast(UObject* WorldContextObject);
    static float RenderSettingsGetIndoors(UObject* WorldContextObject, ERenderSettingsIndoorsType IndoorsType);
    static float RenderSettingsGetDayNight(UObject* WorldContextObject);
    static void PushPlayerViewpointOverride(UObject* WorldContextObject, UObject* ViewpointOverrideOwner, float PostProcessingViewpointOverride, float LerpAlpha);
    static void PopPlayerViewpointOverride(UObject* WorldContextObject, UObject* ViewpointOverrideOwner);
    static void IsPlayerIndoors(UObject* WorldContextObject, float& Indoors0To1, bool& bIsIndoors);
    static void IsCameraIndoors(UObject* WorldContextObject, float& Indoors0To1, bool& bIsIndoors);
    static void HasPlayerViewpointOverride(UObject* WorldContextObject, UObject* ViewpointOverrideOwner, bool& bExists);
    static void GetViewpointIsInside(UObject* WorldContextObject, float& Indoors, ERenderSettingsIndoorsType IndoorsType);
    static void GetViewpointBlendDomain(UObject* WorldContextObject, FBlendDomainState& BlendDomainState);
    static void GetPlayerIsInside(UObject* WorldContextObject, float& Indoors, ERenderSettingsIndoorsType IndoorsType);
    static void GetPlayerBlendDomain(UObject* WorldContextObject, FBlendDomainState& BlendDomainState);
    static float GetOvercast(UObject* WorldContextObject);
    static float GetIndoors(UObject* WorldContextObject);
    static float GetFilteredIndoors(UObject* WorldContextObject);
    static float GetDayNight(UObject* WorldContextObject);
    static void GetCameraIsInside(UObject* WorldContextObject, float& Indoors, ERenderSettingsIndoorsType IndoorsType);
    static void GetCameraBlendDomain(UObject* WorldContextObject, FBlendDomainState& BlendDomainState);
    static void GetBlendDomainValueBool(FBlendDomainState& BlendDomainState, FName BlendDomain, bool& bValue);
    static void GetBlendDomainValue(FBlendDomainState& BlendDomainState, FName BlendDomain, float& Value);
    static void GetBlendDomainIndoors(FBlendDomainState& BlendDomainState, float& Indoors, ERenderSettingsIndoorsType IndoorsType);
    static UDirectionalLightComponent* GetBestDirectionalLight(UObject* WorldContextObject);
    static void CustomBlendDomainSetOverride(UObject* WorldContextObject, FName CustomBlendDomainName, float Value);
    static void CustomBlendDomainHasOverride(UObject* WorldContextObject, FName CustomBlendDomainName, bool& bExists);
    static void CustomBlendDomainGetOverride(UObject* WorldContextObject, FName CustomBlendDomainName, float& Value, bool& bExists);
    static void CustomBlendDomainGetBool(UObject* WorldContextObject, FName CustomBlendDomainName, bool& bValue, bool bDefaultValue);
    static void CustomBlendDomainGet(UObject* WorldContextObject, FName CustomBlendDomainName, float& Value, bool& bExists);
    static void CustomBlendDomainExists(UObject* WorldContextObject, FName CustomBlendDomainName, bool& bExists);
    static void CustomBlendDomainClearOverride(UObject* WorldContextObject, FName CustomBlendDomainName);
    static float CurrentPlayerViewpointOverride(UObject* WorldContextObject);
    static void ComputeIsInside(UObject* WorldContextObject, FVector Position, float& Indoors, ERenderSettingsIndoorsType IndoorsType, bool bHighQuality);
    static void ComputeBlendDomain(UObject* WorldContextObject, FVector Position, FBlendDomainState& BlendDomainState, bool bHighQuality);
}; // Size: 0x1030
#pragma pack(pop)
