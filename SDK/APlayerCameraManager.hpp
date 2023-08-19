#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECameraShakePlaySpace.hpp"
#include "FCameraCacheEntry.hpp"
#include "FLinearColor.hpp"
#include "FPostProcessSettings.hpp"
#include "FRotator.hpp"
#include "FTViewTarget.hpp"
#include "FVector.hpp"
class UCameraModifier_CameraShake;
class APlayerController;
class ACameraActor;
class USceneComponent;
class UClass;
class UCameraModifier;
class UCameraAnimInst;
class AEmitterCameraLensEffectBase;
class UCameraShakeBase;
class UCameraShakeSourceComponent;
class UCameraAnim;
#pragma pack(push, 1)
class APlayerCameraManager : public AActor {
public:
    APlayerController* PCOwner; // 0x248
    USceneComponent* TransformComponent; // 0x250
    char pad_258[0x8];
    float DefaultFOV; // 0x260
    char pad_264[0x4];
    float DefaultOrthoWidth; // 0x268
    char pad_26c[0x4];
    float DefaultAspectRatio; // 0x270
    char pad_274[0x4c];
    FCameraCacheEntry CameraCache; // 0x2c0
    FCameraCacheEntry LastFrameCameraCache; // 0x950
    FTViewTarget ViewTarget; // 0xfe0
    FTViewTarget PendingViewTarget; // 0x1680
    char pad_1d20[0x30];
    FCameraCacheEntry CameraCachePrivate; // 0x1d50
    FCameraCacheEntry LastFrameCameraCachePrivate; // 0x23e0
    TArray<UCameraModifier*> ModifierList; // 0x2a70
    TArray<UClass*> DefaultModifiers; // 0x2a80
    float FreeCamDistance; // 0x2a90
    FVector FreeCamOffset; // 0x2a94
    FVector ViewTargetOffset; // 0x2aa0
    char pad_2aac[0x24];
    TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2ad0
    UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2ae0
    UCameraAnimInst* AnimInstPool[8]; // 0x2ae8
    TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2b28
    char pad_2b38[0x10];
    TArray<UCameraAnimInst*> ActiveAnims; // 0x2b48
    TArray<UCameraAnimInst*> FreeAnims; // 0x2b58
    ACameraActor* AnimCameraActor; // 0x2b68
    uint8_t bIsOrthographic : 1; // 0x2b70
    uint8_t bDefaultConstrainAspectRatio : 1; // 0x2b70
    uint8_t pad_bitfield_2b70_2 : 4;
    uint8_t bClientSimulatingViewTarget : 1; // 0x2b70
    uint8_t bUseClientSideCameraUpdates : 1; // 0x2b70
    uint8_t pad_bitfield_2b71_0 : 2;
    uint8_t bGameCameraCutThisFrame : 1; // 0x2b71
    uint8_t pad_bitfield_2b71_3 : 5;
    char pad_2b72[0x2];
    float ViewPitchMin; // 0x2b74
    float ViewPitchMax; // 0x2b78
    float ViewYawMin; // 0x2b7c
    float ViewYawMax; // 0x2b80
    float ViewRollMin; // 0x2b84
    float ViewRollMax; // 0x2b88
    char pad_2b8c[0x4];
    float ServerUpdateCameraTimeout; // 0x2b90
    char pad_2b94[0xc];
    static APlayerCameraManager* StaticClass();
    void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();
    void StopCameraShake(UCameraShakeBase* ShakeInstance, bool bImmediately);
    void StopCameraFade();
    void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate);
    void StopAllInstancesOfCameraShakeFromSource(UClass* Shake, UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void StopAllInstancesOfCameraShake(UClass* Shake, bool bImmediately);
    void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate);
    void StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void StopAllCameraShakes(bool bImmediately);
    void StopAllCameraAnims(bool bImmediate);
    UCameraShakeBase* StartCameraShakeFromSource(UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    UCameraShakeBase* StartCameraShake(UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);
    void SetGameCameraCutThisFrame();
    bool RemoveCameraModifier(UCameraModifier* ModifierToRemove);
    void RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter);
    UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void PhotographyCameraModify(FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& ResultCameraLocation);
    void OnPhotographySessionStart();
    void OnPhotographySessionEnd();
    void OnPhotographyMultiPartCaptureStart();
    void OnPhotographyMultiPartCaptureEnd();
    APlayerController* GetOwningPlayerController();
    float GetFOVAngle();
    FRotator GetCameraRotation();
    FVector GetCameraLocation();
    UCameraModifier* FindCameraModifierByClass(UClass* ModifierClass);
    void ClearCameraLensEffects();
    bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
    UCameraModifier* AddNewCameraModifier(UClass* ModifierClass);
    AEmitterCameraLensEffectBase* AddCameraLensEffect(UClass* LensEffectEmitterClass);
}; // Size: 0x2ba0
#pragma pack(pop)
