#pragma once
#include <cstdint>
#include "EWLightProbeCompressionType.hpp"
#include "EWLightProbesBlendType.hpp"
#include "EWLightProbesCorrectionType.hpp"
#include "EWLightProbesCullType.hpp"
#include "EWLightProbesLandscapeUsage.hpp"
#include "EWLightProbesShapeType.hpp"
#include "EWLightProbesSkylightUsage.hpp"
#include "FGuid.hpp"
#include "USceneComponent.hpp"
class UWLightProbesVolumeCaptureSetup;
#pragma pack(push, 1)
class UWLightProbesVolumeComponent : public USceneComponent {
public:
    EWLightProbesShapeType ShapeType; // 0x220
    char pad_221[0x3];
    float PositiveXFadeRatio; // 0x224
    float NegativeXFadeRatio; // 0x228
    float PositiveYFadeRatio; // 0x22c
    float NegativeYFadeRatio; // 0x230
    float PositiveZFadeRatio; // 0x234
    float NegativeZFadeRatio; // 0x238
    float fade; // 0x23c
    EWLightProbesBlendType BlendType; // 0x240
    EWLightProbesCorrectionType CorrectionType; // 0x244
    float LightLeakingCorrection; // 0x248
    float SkyLeakingCorrection; // 0x24c
    float IgnoreLeakingCorrection; // 0x250
    float RingingCorrection; // 0x254
    float SkyLightRingingCorrection; // 0x258
    float ColorSaturation; // 0x25c
    float BounceBoost; // 0x260
    float SpecularBoost; // 0x264
    float DirectionalBoost; // 0x268
    float DirectionalRingingCorrection; // 0x26c
    float VolumetricSizeBias; // 0x270
    bool bHighPriority; // 0x274
    char pad_275[0x3];
    float Priority; // 0x278
    float FadeMin; // 0x27c
    float FadeMax; // 0x280
    bool bCaptureTimeOfDay; // 0x284
    char pad_285[0x3];
    EWLightProbeCompressionType CompressionType; // 0x288
    EWLightProbesCullType CullType; // 0x28c
    bool bLightScenarioOnly; // 0x290
    char pad_291[0x3];
    float OverrideLightAttenuationRadius; // 0x294
    EWLightProbesSkylightUsage SkylightUsage; // 0x298
    EWLightProbesLandscapeUsage LandscapeUsage; // 0x29c
    bool ExcludeFromAutoBake; // 0x2a0
    bool bInjectInTranslucentLightingVolume; // 0x2a1
    char pad_2a2[0x2];
    FGuid Guid; // 0x2a4
    char pad_2b4[0x1c];
    static UWLightProbesVolumeComponent* StaticClass();
    void SetFade(float fade);
    void SetBounceBoost(float NewBoostValue);
}; // Size: 0x2d0
#pragma pack(pop)
