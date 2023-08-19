#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class UEmissiveAdaptationFixedOverrideComponent;
class USceneComponent;
struct FHitResult;
class UNiagaraComponent;
class UAkComponent;
class ABiped_Player;
class UCognitionStimuliSourceComponent;
class UObject;
class USphereComponent;
class UPrimitiveComponent;
class UBTService_AvaAITree;
#pragma pack(push, 1)
class ABP_WorldTeleport_Swimming_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UEmissiveAdaptationFixedOverrideComponent* EmissiveAdaptationFixedOverride; // 0x250
    UNiagaraComponent* WhirlpoolFX; // 0x258
    UChildActorComponent* BP_TeleportSwimming_Marker; // 0x260
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268
    UAkComponent* Ak_BP_WorldTeleport_Swimming; // 0x270
    USphereComponent* Sphere; // 0x278
    USceneComponent* DefaultSceneRoot; // 0x280
    FVector Trigger_Size; // 0x288
    float RiseDelay; // 0x294
    AActor* Teleport_Destination; // 0x298
    FVector TeleportDestinationOffset; // 0x2a0
    bool InTheSameLevel; // 0x2ac
    bool UnderwaterVault___IsEntrance; // 0x2ad
    bool UnderwaterVault___IsUWVault; // 0x2ae
    bool StartActivated; // 0x2af
    bool UseFadeInOut; // 0x2b0
    char pad_2b1[0x3];
    float FadePreDelay; // 0x2b4
    float Fade_Duration; // 0x2b8
    float FadeOutDuration; // 0x2bc
    float FadeInDuration; // 0x2c0
    bool bTraceOverride; // 0x2c4
    bool Use_FastTravel; // 0x2c5
    char pad_2c6[0x2];
    FString Location_ID__Destination_; // 0x2c8
    bool TuneWhirlpoolFX; // 0x2d8
    bool UseParticleFX; // 0x2d9
    bool IsOnDynamicSurface; // 0x2da
    char pad_2db[0x1];
    float SurfaceOffset; // 0x2dc
    FLinearColor Color; // 0x2e0
    float EmissionRadius; // 0x2f0
    float Emission_Rate_Scale; // 0x2f4
    float RiseVelocityScale; // 0x2f8
    float OpacitySpray; // 0x2fc
    float System_Intensity; // 0x300
    float System_Opacity; // 0x304
    float System_Scale; // 0x308
    char pad_30c[0x2c];
    FString UnderwaterVault___LevelName; // 0x338
    FString Player_Start_Tag; // 0x348
    bool PlayerDisabledPushed; // 0x358
    bool DivingContextSet; // 0x359
    char pad_35a[0x2];
    FName BeaconableObjectID; // 0x35c
    char pad_364[0x4];
    static ABP_WorldTeleport_Swimming_C* StaticClass();
    FName GetUniqueBeaconId();
    void UserConstructionScript0(bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay0();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void Interact(UBTService_AvaAITree* AvaService);
    void RunFadeOut();
    void RunFadeIn();
    void StartFX();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void StopFX();
    void StopStartBehavior();
    void ActivateBehavior();
    void DeactivateBehaviour();
    void StartAudioFX();
    void StopAudioFX();
    void ReceiveTick0(float DeltaSeconds);
    void MovementModeChanged(UObject* Caller);
    void PopDisable();
    void RemoveDivingContext();
    void RenderSmoothTransitionStart();
    void OnTeleport(FVector PrevLocation, FRotator PrevRotation, bool bIsATest, bool bNoCheck, bool bSuccess);
    void RenderSmoothTransitionEnd();
    void ExecuteUbergraph_BP_WorldTeleport_Swimming(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
}; // Size: 0x368
#pragma pack(pop)
