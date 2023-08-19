#pragma once
#include <cstdint>
#include "APlayerController.hpp"
#include "ELockOnReticleType.hpp"
#include "ETargetingMode\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UCognitionComponent;
class UAISense_CogGroup_Interact;
class AOnScreenObjectIndicator;
class UClass;
class AActor_LockOnReticle;
class UObject;
class UCogGroupEvaluation;
class AActor;
class UAISense;
class UAISense_CogGroup;
class UCurveFloat;
class UCogGroupUpDirection;
class AAmbulatory_Character;
class UAISense_CogGroup_Climb;
class UCogGroupFocusDirection;
struct FForcedConversation;
class UAISense_CogGroup_TargetOfInterest;
class UAISense_CogGroup_Station;
class UPlayerInput;
class UAISense_CogGroup_AutoTarget;
class UAISense_CogGroup_Aim;
class UCogGroupPerceiverPoint;
#pragma pack(push, 1)
class ABiped_PlayerController : public APlayerController {
public:
    char pad_5b0[0x8];
    bool UseAutoTargetCameraModes; // 0x5b8
    char pad_5b9[0x3];
    float AimModeFarDistanceRadius; // 0x5bc
    float AimModeNarrowRadius; // 0x5c0
    ETargetingMode::Type TargetingMode; // 0x5c4
    char pad_5c5[0x3];
    UCognitionComponent* CognitionComponent; // 0x5c8
    UClass* SenseForAutoTargeting; // 0x5d0
    UClass* LockOnReticleActorClass; // 0x5d8
    AActor_LockOnReticle* LockOnReticleActor; // 0x5e0
    float LockOnReticleLookAtSpeedScalar; // 0x5e8
    bool bAllowLockOn; // 0x5ec
    char pad_5ed[0x3];
    UClass* OppugnoIndicatorClass; // 0x5f0
    AOnScreenObjectIndicator* OppugnoIndicatorActor; // 0x5f8
    bool bTargetingCameraAllowed; // 0x600
    char pad_601[0x3];
    float AutoTargetDistance; // 0x604
    float ReticuleVerticalScreenPosition; // 0x608
    bool DoingAutoTargeting; // 0x60c
    char pad_60d[0x3];
    TArray<UCogGroupEvaluation*> ShadowBlinkTargetEvaluationArray; // 0x610
    char pad_620[0x10];
    bool bNearInteractable; // 0x630
    char pad_631[0x7];
    AActor* CurrentInteractTarget; // 0x638
    float InteractionRange; // 0x640
    char pad_644[0x30c];
    static ABiped_PlayerController* StaticClass();
    void TutorialAutoTargetBitChanged(bool bNewValue);
    void TargetSighted(UAISense* Sense, AActor* Target);
    void TargetLost(UAISense* Sense, AActor* OldTarget);
    void TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget);
    void StickClick(bool bOnlyOn, bool bOnlyOff);
    void StartSettingSpecialAutoTarget(AActor* InSpecialActor, UObject* Provider);
    void StartSettingAutoTargetAlwaysTargetActor(AActor* InTargetActor, UObject* Provider);
    void StartAimModeTimeDilation(float Dilation, float EaseIn);
    void SetTargetingMode(ETargetingMode::Type InMode, bool bLockOnInAimMode);
    void SetSpecialAutoTarget(AActor* InSpecialActor);
    void SetSenseEnabled(UAISense_CogGroup* InSense, bool bInFlag, bool bInForce);
    void SetOppugnoAlwaysTargetActor(AActor* InActor);
    void SetInteractStickyTarget(bool bSet);
    void SetCameraRotation(FRotator& DesiredRotation);
    void SetCameraLookAt_TimeBased(FVector& LookAtPoint, float LookAtTime);
    void SetCameraLookAt_ActorAndTime(AActor* LookAtActor, float LookAtTime);
    void SetCameraLookAt_Actor(AActor* LookAtActor, float SpeedScalar);
    void SetCameraLookAt(FVector& LookAtPoint, float SpeedScalar);
    void SetAutoTargetAlwaysTargetActor(AActor* InActor);
    void ResetCameraRotation(float ResetSpeed, UCurveFloat* ResetSpeedCurve);
    void ReleaseLockFromTarget(ELockOnReticleType InLockOnType);
    void ReleaseCameraLookAt();
    void PawnTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void OnInteractTargetRegistered(AActor* InTarget);
    void OnCurtainLowered();
    void MaxSpeedChanged(float InSpeed);
    void LockOntoAutoTargetActor(ELockOnReticleType InLockOnType, AActor* AutoTargetActor);
    void IsTargetCritical(AActor* Target);
    bool IsSenseEnabled(UAISense_CogGroup* InSense);
    static bool IsPlayerInAnimagusForm(UObject* WorldContextObject);
    bool IsLockedOntoTarget();
    bool IsActorInBestList(UClass* SenseClass, AActor* TestActor);
    void HermesOnForcedConversationDelegate__DelegateSignature(UObject* Caller, FForcedConversation& FForcedConversation);
    static void HermesBindForcedConversation();
    UAISense_CogGroup_TargetOfInterest* GetTargetOfInterestSense();
    UAISense_CogGroup_Station* GetStationInteractSense();
    UPlayerInput* GetPlayerInput();
    AActor* GetOppugnoAlwaysTargetActor();
    AActor* GetLockedOnActor();
    bool GetLastValidMountLocation(FVector& OutLocation);
    FRotator GetLastControlRotation();
    UAISense_CogGroup_Interact* GetInteractSense();
    UAISense_CogGroup_Climb* GetClimbSense();
    AActor* GetBestReparoActor();
    AActor* GetBestOppugnoActor();
    AActor* GetBestLockOnActor();
    FVector GetBestAutoTargetActor_WorldLocation();
    AActor* GetBestAutoTargetActor();
    UAISense_CogGroup_AutoTarget* GetAutoTargetSense();
    UAISense_CogGroup_Aim* GetAimSense();
    float GetAimBlendParameter();
    void FullyResetCamera(float ResetSpeed, UCurveFloat* ResetSpeedCurve);
    void FlushInputKeys();
    bool FlickToTarget(FVector2D StickFlickDirection);
    void FinishSettingSpecialAutoTarget(UObject* Provider);
    void FinishSettingAutoTargetAlwaysTargetActor(UObject* Provider);
    void FinishAimModeTimeDilation(float EaseOut);
    void ClearOppugnoAlwaysTargetActor();
    void ClearAutoTargetAlwaysTargetActor();
    void CanStickReset(bool& bCanReset);
    void AutoTarget_UseShadowBlinkEval();
    void AutoTarget_UseDefaultUpDirectionClass();
    void AutoTarget_UseDefaultPerceiverPointClass();
    void AutoTarget_UseDefaultFocusDirectionClass();
    void AutoTarget_UseDefaultEval();
    void AutoTarget_SetUpDirectionClass(UCogGroupUpDirection* InUpDirectionClass);
    void AutoTarget_SetPerceiverPointClass(UCogGroupPerceiverPoint* InPerceiverPointClass);
    void AutoTarget_SetFocusDirectionClass(UCogGroupFocusDirection* InFocusDirectionClass);
    void AllowLockOn(bool bFlag);
    void ActivateReparoSense(bool bFlag, bool bForce);
    void ActivateOppugnoSense(bool bFlag, bool bForce);
    void ActivateInteractSense(bool bFlag, bool bForce);
    void ActivateClimbSense(bool bFlag, bool bForce);
    void ActivateAutoTargetSense(bool bFlag, bool bForce);
}; // Size: 0x950
#pragma pack(pop)
