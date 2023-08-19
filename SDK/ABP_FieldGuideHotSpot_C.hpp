#pragma once
#include <cstdint>
#include "AFieldGuideHotSpot.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
class UAkComponent;
class ABiped_Player;
struct FLockManagerLock;
class UNiagaraComponent;
class USceneComponent;
struct FHitResult;
class USkeletalMeshComponent;
class USphereComponent;
class ABP_FieldGuidePage_C;
class UClass;
class USkinFXComponent;
class UMaterialInstanceDynamic;
class AActor;
class UObject;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_FieldGuideHotSpot_C : public AFieldGuideHotSpot {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
    UAkComponent* AkComponent; // 0x2d8
    USkeletalMeshComponent* GhostPageHint; // 0x2e0
    USphereComponent* Twinkle; // 0x2e8
    USphereComponent* SphereCollision; // 0x2f0
    USceneComponent* DefaultSceneRoot; // 0x2f8
    ABP_FieldGuidePage_C* FieldGuidePage; // 0x300
    UClass* MapHelpClass; // 0x308
    UNiagaraComponent* SparkleComponent; // 0x310
    FTimerHandle DelayedRegisterTimerHandle; // 0x318
    USkinFXComponent* Skin_FXComponent; // 0x320
    bool CollectedViaAccio; // 0x328
    bool FieldGuidePageRevealed; // 0x329
    bool FieldGuideHidden; // 0x32a
    bool FieldGuideInOuterRadius; // 0x32b
    bool FieldGuideMissionUnlocked; // 0x32c
    char pad_32d[0x3];
    UMaterialInstanceDynamic* MAT_Quill; // 0x330
    UMaterialInstanceDynamic* MAT_Page; // 0x338
    float PassiveHint_Interval; // 0x340
    float PassiveHint_FXDuration; // 0x344
    float Ping_FXDuration; // 0x348
    float ActiveHint_FXDuration; // 0x34c
    static ABP_FieldGuideHotSpot_C* StaticClass();
    void CheckShowFieldGuidePage();
    void CheckShowFieldGuideHint(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3);
    void SetFieldGuideCollected(bool Flag);
    void SetFieldGUideMissionUnlocked(bool Flag);
    void SetFieldGuideInOuterRadius(bool Flag);
    void SetGuideHidden(bool Flag);
    void SetGuidePageRevealed(bool Flag);
    void SetPageActor(ABP_FieldGuidePage_C* InPageActor);
    void GetPageActor(ABP_FieldGuidePage_C*& NewParam);
    void SpawnPageAndQuill(bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABP_FieldGuidePage_C* CallFunc_FinishSpawningActor_ReturnValue);
    void DestroyPageAndQuill(bool CallFunc_IsValid_ReturnValue);
    void HideRevealHint(bool CallFunc_IsValid_ReturnValue);
    void ShowRevealHint(USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent);
    void DeactivateThisHotSpot();
    void ActivateThisHotSpot();
    void ExitOuterRadius();
    void Enter_Outer_Radius(float CallFunc_Add_FloatFloat_ReturnValue);
    void InteractionInitiated(UObject* Caller);
    void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void SceneRigActionTakingControl(UObject* Caller);
    void SceneRigActionReleasingControl(UObject* Caller);
    void ExitedOuterRadius0();
    void RevealedByRevelio0();
    void EnteredOuterRadius0();
    void DelayedRegisterForInteract();
    void Hide();
    void Show();
    void ShowNonCinematicElements(UObject* Caller);
    void HideNonCinematicElements(UObject* Caller);
    void MenuTabLockChanged(UObject* Caller, FLockManagerLock& Lock);
    void ExitedHotSpotRadius0();
    void HintedByRevelio0(bool bWasHintedAt);
    void Ping();
    void EnteredHotSpotRadius0();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FieldGuideHotSpot(int32_t EntryPoint);
}; // Size: 0x350
#pragma pack(pop)
