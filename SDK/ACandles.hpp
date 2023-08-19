#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "ELightUnits.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FWCullingPlane.hpp"
class UObjectStateInfo;
class UTexture;
class USpotLightComponent;
class UStaticMeshComponent;
class UPointLightComponent;
class UAnimatedLightComponent;
class UDayNightLocalLightControllerComponent;
class UMaterialBillboardComponent;
class UMaterialInstance;
class UObjectStateComponent;
#pragma pack(push, 1)
class ACandles : public AStaticMeshActor {
public:
    bool bStartLit; // 0x258
    bool bGIOnlyLight; // 0x259
    bool bSimulatePhysics; // 0x25a
    bool bStartAsleep; // 0x25b
    bool bDestructible; // 0x25c
    char pad_25d[0x3];
    FLinearColor LightColor; // 0x260
    bool bLightTemperature; // 0x270
    char pad_271[0x3];
    float LightTemperature; // 0x274
    bool bCastShadow; // 0x278
    bool bCastVolumetricShadow; // 0x279
    ELightUnits PointLightUnit; // 0x27a
    char pad_27b[0x1];
    float PointLightIntensity; // 0x27c
    float CustomLightRadius; // 0x280
    float SourceRadius_PL; // 0x284
    float ShadowResolution_PL; // 0x288
    float ContactShadowLength_PL; // 0x28c
    float MSRShadowCaster_PL; // 0x290
    float VolumetricScattering_PL; // 0x294
    float IndirectLighting_PL; // 0x298
    float MinDistance_PL; // 0x29c
    float MaxDrawDistance_PL; // 0x2a0
    bool bCustomLightPosition; // 0x2a4
    char pad_2a5[0x3];
    FVector CustomLightPosition; // 0x2a8
    bool bCustomLightRotation; // 0x2b4
    char pad_2b5[0x3];
    FRotator CustomLightRotation; // 0x2b8
    bool bUseLightTexture; // 0x2c4
    char pad_2c5[0x3];
    UTexture* LightTexture; // 0x2c8
    TArray<FWCullingPlane> CullingPlanes; // 0x2d0
    bool bSpotlight; // 0x2e0
    bool bSpotlightVolumetricShadow; // 0x2e1
    ELightUnits SpotlightUnit; // 0x2e2
    char pad_2e3[0x1];
    float SpotlightIntensity; // 0x2e4
    float AttenuationRadius_SL; // 0x2e8
    float SourceRadius_SL; // 0x2ec
    float ShadowResolution_SL; // 0x2f0
    float ShadowBias_SL; // 0x2f4
    float ShadowSlopeBias_SL; // 0x2f8
    float InnerConeAngle; // 0x2fc
    float OuterConeAngle; // 0x300
    float ContactShadowLength_SL; // 0x304
    float MSRShadowCaster_SL; // 0x308
    float VolumetricScattering_SL; // 0x30c
    float IndirectLighting_SL; // 0x310
    float MaxDrawDistance_SL; // 0x314
    FVector SpotlightLocation; // 0x318
    FRotator SpotlightRotation; // 0x324
    TArray<FWCullingPlane> SpotlightCullingPlanes; // 0x330
    float WaveSpeed1; // 0x340
    float WaveSpeed2; // 0x344
    float MinIntensity; // 0x348
    float IntensityNoiseSpeed; // 0x34c
    float IntensityNoiseFactor; // 0x350
    bool bDayNightModulate; // 0x354
    char pad_355[0x3];
    float DayIntensityMod; // 0x358
    FLinearColor DayColorMod; // 0x35c
    float NightIntensityMod; // 0x36c
    FLinearColor NightColorMod; // 0x370
    UStaticMeshComponent* CandleMeshComp; // 0x380
    UPointLightComponent* PointLightComp; // 0x388
    USpotLightComponent* SpotLightComp; // 0x390
    UAnimatedLightComponent* AnimatedLightComp; // 0x398
    UDayNightLocalLightControllerComponent* LightControllerComp; // 0x3a0
    UObjectStateInfo* CandleObjectState; // 0x3a8
    TArray<UStaticMeshComponent*> CandleList; // 0x3b0
    TArray<UMaterialBillboardComponent*> FlameMatList; // 0x3c0
    bool bMovable; // 0x3d0
    char pad_3d1[0x7];
    UMaterialInstance* NoGlowMaterial; // 0x3d8
    FTransform DPC_InitialTransform; // 0x3e0
    ELightUnits PreviousPLUnit; // 0x410
    ELightUnits PreviousSLUnit; // 0x411
    char pad_412[0xe];
    static ACandles* StaticClass();
    void SetUpLights(UPointLightComponent* curPL, USpotLightComponent* curSL);
    void ResetLightColor();
    void CrossLightTickRange(bool bin);
    void ChangeLightColor(FLinearColor i_Color, float i_temperature);
    bool CandleSetup(UObjectStateComponent* i_ObjectStateComp, uint8_t i_CandleType, UAnimatedLightComponent* i_AnimatedLight, UPointLightComponent* i_PL, USpotLightComponent* i_SL);
}; // Size: 0x420
#pragma pack(pop)
