#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "ELightUnits.hpp"
#include "EObjectTypeQuery.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FWCullingPlane.hpp"
class USpotLightComponent;
class UTexture;
class UObjectStateInfo;
class UAnimatedLightComponent;
class UNiagaraSystem;
class UAkComponent;
class UStaticMeshComponent;
class UPointLightComponent;
class UDayNightLocalLightControllerComponent;
class UNiagaraComponent;
class USphereComponent;
class UTimelineComponent;
class UAkAudioEvent;
struct FHitResult;
class AActor;
class UObjectStateComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ATorch : public AStaticMeshActor {
public:
    bool bStartLit; // 0x258
    bool bUseMesh; // 0x259
    bool bSimulatePhysics; // 0x25a
    bool bStartAsleep; // 0x25b
    bool bTargetable; // 0x25c
    char pad_25d[0x3];
    FLinearColor LightColor; // 0x260
    bool bLightTemperature; // 0x270
    char pad_271[0x3];
    float LightTemperature; // 0x274
    bool bPropagate; // 0x278
    bool bCustomPropagateRadius; // 0x279
    char pad_27a[0x2];
    float CustomPropagateRadius; // 0x27c
    bool bReceiveSequentialLighting; // 0x280
    bool bSendSequentialLighting; // 0x281
    char pad_282[0x2];
    float SequentialLightSpreadRadius; // 0x284
    bool bLightProxPlayer; // 0x288
    char pad_289[0x3];
    float ProxToPlayer; // 0x28c
    bool bAncientMagic; // 0x290
    bool bExternalBoiler; // 0x291
    bool bCastShadow; // 0x292
    bool bCastVolumetricShadow; // 0x293
    bool bCastShadowOnlyFromStaticObjects; // 0x294
    ELightUnits PointLightUnit; // 0x295
    char pad_296[0x2];
    float PointLightIntensity; // 0x298
    float PointLightOffIntensity; // 0x29c
    float CustomLightRadius; // 0x2a0
    float SourceRadius_PL; // 0x2a4
    float ShadowResolution_PL; // 0x2a8
    float ContactShadowLength_PL; // 0x2ac
    float MSRShadowCaster_PL; // 0x2b0
    float VolumetricScattering_PL; // 0x2b4
    float IndirectLighting_PL; // 0x2b8
    float MinDistance_PL; // 0x2bc
    float MaxDrawDistance_PL; // 0x2c0
    bool bCustomLightPosition; // 0x2c4
    char pad_2c5[0x3];
    FVector CustomLightPosition; // 0x2c8
    bool bCustomLightRotation; // 0x2d4
    char pad_2d5[0x3];
    FRotator CustomLightRotation; // 0x2d8
    bool bUseLightTexture; // 0x2e4
    char pad_2e5[0x3];
    UTexture* LightTexture; // 0x2e8
    TArray<FWCullingPlane> CullingPlanes; // 0x2f0
    bool bSpotlight; // 0x300
    bool bSpotlightShadow; // 0x301
    bool bSpotlightVolumetricShadow; // 0x302
    bool bSpotlightCastShadowOnlyFromStaticObjects; // 0x303
    ELightUnits SpotlightUnit; // 0x304
    char pad_305[0x3];
    float SpotlightIntensity; // 0x308
    float AttenuationRadius_SL; // 0x30c
    float SourceRadius_SL; // 0x310
    float ShadowResolution_SL; // 0x314
    float ShadowBias_SL; // 0x318
    float ShadowSlopeBias_SL; // 0x31c
    float InnerConeAngle; // 0x320
    float OuterConeAngle; // 0x324
    float ContactShadowLength_SL; // 0x328
    float MSRShadowCaster_SL; // 0x32c
    float VolumetricScattering_SL; // 0x330
    float IndirectLighting_SL; // 0x334
    float MaxDrawDistance_SL; // 0x338
    FVector SpotlightLocation; // 0x33c
    FRotator SpotlightRotation; // 0x348
    bool bUseLightTexture_SL; // 0x354
    char pad_355[0x3];
    UTexture* SpotlightTexture; // 0x358
    TArray<FWCullingPlane> SpotlightCullingPlanes; // 0x360
    bool bIndirectLight; // 0x370
    ELightUnits IndirectLightUnit; // 0x371
    char pad_372[0x2];
    float IndirectIntensity; // 0x374
    float CustomLightRadius_IL; // 0x378
    float MaxDrawDistance_IL; // 0x37c
    bool bCustomFireParticle; // 0x380
    char pad_381[0x7];
    UNiagaraSystem* CustomFireParticle; // 0x388
    FTransform CustomParticleTransform; // 0x390
    float WaveSpeed1; // 0x3c0
    float WaveSpeed2; // 0x3c4
    float MinIntensity; // 0x3c8
    float IntensityNoiseSpeed; // 0x3cc
    float IntensityNoiseFactor; // 0x3d0
    bool bDayNightModulate; // 0x3d4
    char pad_3d5[0x3];
    float DayIntensityMod; // 0x3d8
    FLinearColor DayColorMod; // 0x3dc
    float NightIntensityMod; // 0x3ec
    FLinearColor NightColorMod; // 0x3f0
    UStaticMeshComponent* TorchMeshComp; // 0x400
    UPointLightComponent* PointLightComp; // 0x408
    USpotLightComponent* SpotLightComp; // 0x410
    UPointLightComponent* IndirectLightComp; // 0x418
    UAnimatedLightComponent* AnimatedLightComp; // 0x420
    UDayNightLocalLightControllerComponent* LightControllerComp; // 0x428
    UAkComponent* AkComp; // 0x430
    UNiagaraComponent* ParticleComp; // 0x438
    USphereComponent* PropagateSphere; // 0x440
    USphereComponent* ProximitySphere; // 0x448
    UTimelineComponent* LightLerp_Timeline; // 0x450
    UAkAudioEvent* Ak_Light; // 0x458
    UAkAudioEvent* Ak_Extinguish; // 0x460
    bool bIsLit; // 0x468
    bool bLightTick; // 0x469
    bool bMovable; // 0x46a
    bool bCanSound; // 0x46b
    FVector FlameLocation; // 0x46c
    char pad_478[0x8];
    FTransform DPC_InitialTransform; // 0x480
    TArray<EObjectTypeQuery> ObjectTypes; // 0x4b0
    TArray<AActor*> PropagateObjects; // 0x4c0
    UObjectStateInfo* TorchObjectState; // 0x4d0
    ELightUnits PreviousPLUnit; // 0x4d8
    ELightUnits PreviousSLUnit; // 0x4d9
    ELightUnits PreviousILUnit; // 0x4da
    char pad_4db[0x5];
    TArray<void*> FireSystems; // 0x4e0
    TArray<void*> PhysicsFireSystems; // 0x4f0
    char pad_500[0x10];
    static ATorch* StaticClass();
    bool TorchSetup(UObjectStateComponent* i_ObjectStateComp, UTimelineComponent* i_Timeline, UNiagaraComponent* i_FireParticle, USphereComponent* i_PropagateTrigger, UAkComponent* i_AkComp, UAnimatedLightComponent* i_AnimatedLight, UPointLightComponent* i_PL, USpotLightComponent* i_SL, UPointLightComponent* i_IL);
    void TorchGetNormalizedTime(float& NormalizedTime);
    void StopLerp();
    void StartLight(bool bLerp);
    bool ShouldStartLit();
    void SetUpLights(UPointLightComponent* curPL, USpotLightComponent* curSL, UPointLightComponent* curIL);
    void SetOnFire(bool bOnFire);
    void SequentialLightTimelineUpdate(FVector LightLoc, float Percent);
    void SequentialLightTimelineFinish();
    void SequentialLight(FVector LightLoc);
    void ResetLightColor();
    float PropagationSetup();
    void Propagate();
    bool ParticleSetup();
    void OnProxOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnPropagateOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnPropagateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    uint8_t ModFunctionSetup();
    void MidLight();
    void LoadSyncronousNiagaraSystem();
    void LightswitchTimelineUpdate(float Percent);
    void Lightswitch_Lerp(bool bOn);
    void Lightswitch(bool bOn, bool bLerp);
    FTransform GetDPCInitialTransform();
    void ExtinguishLight(bool bSlow);
    void EndLight(bool bLerp);
    void CrossLightTickRange(bool bin);
    bool ConstructTorch();
    void ChangeLightColor(FLinearColor i_Color, float i_temperature);
}; // Size: 0x510
#pragma pack(pop)
