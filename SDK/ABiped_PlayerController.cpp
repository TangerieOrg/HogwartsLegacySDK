#include "AActor.hpp"
#include "AActor_LockOnReticle.hpp"
#include "AAmbulatory_Character.hpp"
#include "ABiped_PlayerController.hpp"
#include "AOnScreenObjectIndicator.hpp"
#include "APlayerController.hpp"
#include "ELockOnReticleType.hpp"
#include "ETargetingMode\Type.hpp"
#include "FForcedConversation.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAISense.hpp"
#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Aim.hpp"
#include "UAISense_CogGroup_AutoTarget.hpp"
#include "UAISense_CogGroup_Climb.hpp"
#include "UAISense_CogGroup_Interact.hpp"
#include "UAISense_CogGroup_Station.hpp"
#include "UAISense_CogGroup_TargetOfInterest.hpp"
#include "UClass.hpp"
#include "UCogGroupEvaluation.hpp"
#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupUpDirection.hpp"
#include "UCognitionComponent.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlayerInput.hpp"
void ABiped_PlayerController::ClearOppugnoAlwaysTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ClearOppugnoAlwaysTargetActor"));
    struct Params_ClearOppugnoAlwaysTargetActor {
    }; // Size: 0x0
    Params_ClearOppugnoAlwaysTargetActor params{};
    ProcessEvent(func, &params);
}
bool ABiped_PlayerController::GetLastValidMountLocation(FVector& OutLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetLastValidMountLocation"));
    struct Params_GetLastValidMountLocation {
        FVector OutLocation; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetLastValidMountLocation params{};
    params.OutLocation = (FVector)OutLocation;
    ProcessEvent(func, &params);
    OutLocation = params.OutLocation;
    return (bool)params.ReturnValue;
}
void ABiped_PlayerController::OnCurtainLowered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.OnCurtainLowered"));
    struct Params_OnCurtainLowered {
    }; // Size: 0x0
    Params_OnCurtainLowered params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_SetPerceiverPointClass(UCogGroupPerceiverPoint* InPerceiverPointClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_SetPerceiverPointClass"));
    struct Params_AutoTarget_SetPerceiverPointClass {
        UCogGroupPerceiverPoint* InPerceiverPointClass; // 0x0
    }; // Size: 0x8
    Params_AutoTarget_SetPerceiverPointClass params{};
    params.InPerceiverPointClass = (UCogGroupPerceiverPoint*)InPerceiverPointClass;
    ProcessEvent(func, &params);
}
ABiped_PlayerController* ABiped_PlayerController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_PlayerController");
    return (ABiped_PlayerController*)res;
}
void ABiped_PlayerController::SetCameraLookAt_Actor(AActor* LookAtActor, float SpeedScalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetCameraLookAt_Actor"));
    struct Params_SetCameraLookAt_Actor {
        AActor* LookAtActor; // 0x0
        float SpeedScalar; // 0x8
    }; // Size: 0xc
    Params_SetCameraLookAt_Actor params{};
    params.LookAtActor = (AActor*)LookAtActor;
    params.SpeedScalar = (float)SpeedScalar;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::TargetLost(UAISense* Sense, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.TargetLost"));
    struct Params_TargetLost {
        UAISense* Sense; // 0x0
        AActor* OldTarget; // 0x8
    }; // Size: 0x10
    Params_TargetLost params{};
    params.Sense = (UAISense*)Sense;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::TutorialAutoTargetBitChanged(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.TutorialAutoTargetBitChanged"));
    struct Params_TutorialAutoTargetBitChanged {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_TutorialAutoTargetBitChanged params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetCameraRotation(FRotator& DesiredRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetCameraRotation"));
    struct Params_SetCameraRotation {
        FRotator DesiredRotation; // 0x0
    }; // Size: 0xc
    Params_SetCameraRotation params{};
    params.DesiredRotation = (FRotator)DesiredRotation;
    ProcessEvent(func, &params);
    DesiredRotation = params.DesiredRotation;
}
void ABiped_PlayerController::TargetSighted(UAISense* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.TargetSighted"));
    struct Params_TargetSighted {
        UAISense* Sense; // 0x0
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_TargetSighted params{};
    params.Sense = (UAISense*)Sense;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.TargetChanged"));
    struct Params_TargetChanged {
        UAISense* Sense; // 0x0
        AActor* NewTarget; // 0x8
        AActor* OldTarget; // 0x10
    }; // Size: 0x18
    Params_TargetChanged params{};
    params.Sense = (UAISense*)Sense;
    params.NewTarget = (AActor*)NewTarget;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetCameraLookAt(FVector& LookAtPoint, float SpeedScalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetCameraLookAt"));
    struct Params_SetCameraLookAt {
        FVector LookAtPoint; // 0x0
        float SpeedScalar; // 0xc
    }; // Size: 0x10
    Params_SetCameraLookAt params{};
    params.LookAtPoint = (FVector)LookAtPoint;
    params.SpeedScalar = (float)SpeedScalar;
    ProcessEvent(func, &params);
    LookAtPoint = params.LookAtPoint;
}
AActor* ABiped_PlayerController::GetOppugnoAlwaysTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetOppugnoAlwaysTargetActor"));
    struct Params_GetOppugnoAlwaysTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOppugnoAlwaysTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_PlayerController::StickClick(bool bOnlyOn, bool bOnlyOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.StickClick"));
    struct Params_StickClick {
        bool bOnlyOn; // 0x0
        bool bOnlyOff; // 0x1
    }; // Size: 0x2
    Params_StickClick params{};
    params.bOnlyOn = (bool)bOnlyOn;
    params.bOnlyOff = (bool)bOnlyOff;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetSenseEnabled(UAISense_CogGroup* InSense, bool bInFlag, bool bInForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetSenseEnabled"));
    struct Params_SetSenseEnabled {
        UAISense_CogGroup* InSense; // 0x0
        bool bInFlag; // 0x8
        bool bInForce; // 0x9
    }; // Size: 0xa
    Params_SetSenseEnabled params{};
    params.InSense = (UAISense_CogGroup*)InSense;
    params.bInFlag = (bool)bInFlag;
    params.bInForce = (bool)bInForce;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::StartSettingSpecialAutoTarget(AActor* InSpecialActor, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.StartSettingSpecialAutoTarget"));
    struct Params_StartSettingSpecialAutoTarget {
        AActor* InSpecialActor; // 0x0
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSettingSpecialAutoTarget params{};
    params.InSpecialActor = (AActor*)InSpecialActor;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::StartSettingAutoTargetAlwaysTargetActor(AActor* InTargetActor, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.StartSettingAutoTargetAlwaysTargetActor"));
    struct Params_StartSettingAutoTargetAlwaysTargetActor {
        AActor* InTargetActor; // 0x0
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSettingAutoTargetAlwaysTargetActor params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::StartAimModeTimeDilation(float Dilation, float EaseIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.StartAimModeTimeDilation"));
    struct Params_StartAimModeTimeDilation {
        float Dilation; // 0x0
        float EaseIn; // 0x4
    }; // Size: 0x8
    Params_StartAimModeTimeDilation params{};
    params.Dilation = (float)Dilation;
    params.EaseIn = (float)EaseIn;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::CanStickReset(bool& bCanReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.CanStickReset"));
    struct Params_CanStickReset {
        bool bCanReset; // 0x0
    }; // Size: 0x1
    Params_CanStickReset params{};
    params.bCanReset = (bool)bCanReset;
    ProcessEvent(func, &params);
    bCanReset = params.bCanReset;
}
void ABiped_PlayerController::SetAutoTargetAlwaysTargetActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetAutoTargetAlwaysTargetActor"));
    struct Params_SetAutoTargetAlwaysTargetActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_SetAutoTargetAlwaysTargetActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetTargetingMode(ETargetingMode::Type InMode, bool bLockOnInAimMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetTargetingMode"));
    struct Params_SetTargetingMode {
        ETargetingMode::Type InMode; // 0x0
        bool bLockOnInAimMode; // 0x1
    }; // Size: 0x2
    Params_SetTargetingMode params{};
    params.InMode = (ETargetingMode::Type)InMode;
    params.bLockOnInAimMode = (bool)bLockOnInAimMode;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetSpecialAutoTarget(AActor* InSpecialActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetSpecialAutoTarget"));
    struct Params_SetSpecialAutoTarget {
        AActor* InSpecialActor; // 0x0
    }; // Size: 0x8
    Params_SetSpecialAutoTarget params{};
    params.InSpecialActor = (AActor*)InSpecialActor;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::LockOntoAutoTargetActor(ELockOnReticleType InLockOnType, AActor* AutoTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.LockOntoAutoTargetActor"));
    struct Params_LockOntoAutoTargetActor {
        ELockOnReticleType InLockOnType; // 0x0
        char pad_1[0x7];
        AActor* AutoTargetActor; // 0x8
    }; // Size: 0x10
    Params_LockOntoAutoTargetActor params{};
    params.InLockOnType = (ELockOnReticleType)InLockOnType;
    params.AutoTargetActor = (AActor*)AutoTargetActor;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetOppugnoAlwaysTargetActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetOppugnoAlwaysTargetActor"));
    struct Params_SetOppugnoAlwaysTargetActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_SetOppugnoAlwaysTargetActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
AActor* ABiped_PlayerController::GetBestAutoTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetBestAutoTargetActor"));
    struct Params_GetBestAutoTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestAutoTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_PlayerController::SetInteractStickyTarget(bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetInteractStickyTarget"));
    struct Params_SetInteractStickyTarget {
        bool bSet; // 0x0
    }; // Size: 0x1
    Params_SetInteractStickyTarget params{};
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::SetCameraLookAt_TimeBased(FVector& LookAtPoint, float LookAtTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetCameraLookAt_TimeBased"));
    struct Params_SetCameraLookAt_TimeBased {
        FVector LookAtPoint; // 0x0
        float LookAtTime; // 0xc
    }; // Size: 0x10
    Params_SetCameraLookAt_TimeBased params{};
    params.LookAtPoint = (FVector)LookAtPoint;
    params.LookAtTime = (float)LookAtTime;
    ProcessEvent(func, &params);
    LookAtPoint = params.LookAtPoint;
}
bool ABiped_PlayerController::IsSenseEnabled(UAISense_CogGroup* InSense) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.IsSenseEnabled"));
    struct Params_IsSenseEnabled {
        UAISense_CogGroup* InSense; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSenseEnabled params{};
    params.InSense = (UAISense_CogGroup*)InSense;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_PlayerController::FinishSettingAutoTargetAlwaysTargetActor(UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.FinishSettingAutoTargetAlwaysTargetActor"));
    struct Params_FinishSettingAutoTargetAlwaysTargetActor {
        UObject* Provider; // 0x0
    }; // Size: 0x8
    Params_FinishSettingAutoTargetAlwaysTargetActor params{};
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::HermesOnForcedConversationDelegate__DelegateSignature(UObject* Caller, FForcedConversation& FForcedConversation) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_PlayerController.HermesOnForcedConversationDelegate__DelegateSignature"));
    struct Params_HermesOnForcedConversationDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FForcedConversation FForcedConversation; // 0x8
    }; // Size: 0x18
    Params_HermesOnForcedConversationDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.FForcedConversation = (FForcedConversation)FForcedConversation;
    ProcessEvent(func, &params);
    FForcedConversation = params.FForcedConversation;
}
void ABiped_PlayerController::SetCameraLookAt_ActorAndTime(AActor* LookAtActor, float LookAtTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.SetCameraLookAt_ActorAndTime"));
    struct Params_SetCameraLookAt_ActorAndTime {
        AActor* LookAtActor; // 0x0
        float LookAtTime; // 0x8
    }; // Size: 0xc
    Params_SetCameraLookAt_ActorAndTime params{};
    params.LookAtActor = (AActor*)LookAtActor;
    params.LookAtTime = (float)LookAtTime;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ResetCameraRotation(float ResetSpeed, UCurveFloat* ResetSpeedCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ResetCameraRotation"));
    struct Params_ResetCameraRotation {
        float ResetSpeed; // 0x0
        char pad_4[0x4];
        UCurveFloat* ResetSpeedCurve; // 0x8
    }; // Size: 0x10
    Params_ResetCameraRotation params{};
    params.ResetSpeed = (float)ResetSpeed;
    params.ResetSpeedCurve = (UCurveFloat*)ResetSpeedCurve;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::OnInteractTargetRegistered(AActor* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.OnInteractTargetRegistered"));
    struct Params_OnInteractTargetRegistered {
        AActor* InTarget; // 0x0
    }; // Size: 0x8
    Params_OnInteractTargetRegistered params{};
    params.InTarget = (AActor*)InTarget;
    ProcessEvent(func, &params);
}
UAISense_CogGroup_Aim* ABiped_PlayerController::GetAimSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetAimSense"));
    struct Params_GetAimSense {
        UAISense_CogGroup_Aim* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAimSense params{};
    ProcessEvent(func, &params);
    return (UAISense_CogGroup_Aim*)params.ReturnValue;
}
void ABiped_PlayerController::ReleaseLockFromTarget(ELockOnReticleType InLockOnType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ReleaseLockFromTarget"));
    struct Params_ReleaseLockFromTarget {
        ELockOnReticleType InLockOnType; // 0x0
    }; // Size: 0x1
    Params_ReleaseLockFromTarget params{};
    params.InLockOnType = (ELockOnReticleType)InLockOnType;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ReleaseCameraLookAt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ReleaseCameraLookAt"));
    struct Params_ReleaseCameraLookAt {
    }; // Size: 0x0
    Params_ReleaseCameraLookAt params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_UseShadowBlinkEval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_UseShadowBlinkEval"));
    struct Params_AutoTarget_UseShadowBlinkEval {
    }; // Size: 0x0
    Params_AutoTarget_UseShadowBlinkEval params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::PawnTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.PawnTeleported"));
    struct Params_PawnTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_PawnTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::HermesBindForcedConversation() {}
void ABiped_PlayerController::MaxSpeedChanged(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.MaxSpeedChanged"));
    struct Params_MaxSpeedChanged {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_MaxSpeedChanged params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
AActor* ABiped_PlayerController::GetBestReparoActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetBestReparoActor"));
    struct Params_GetBestReparoActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestReparoActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_PlayerController::IsTargetCritical(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.IsTargetCritical"));
    struct Params_IsTargetCritical {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_IsTargetCritical params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
bool ABiped_PlayerController::IsPlayerInAnimagusForm(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.IsPlayerInAnimagusForm"));
    struct Params_IsPlayerInAnimagusForm {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsPlayerInAnimagusForm params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_PlayerController::IsLockedOntoTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.IsLockedOntoTarget"));
    struct Params_IsLockedOntoTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLockedOntoTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_PlayerController::IsActorInBestList(UClass* SenseClass, AActor* TestActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.IsActorInBestList"));
    struct Params_IsActorInBestList {
        UClass* SenseClass; // 0x0
        AActor* TestActor; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsActorInBestList params{};
    params.SenseClass = (UClass*)SenseClass;
    params.TestActor = (AActor*)TestActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_PlayerController::FullyResetCamera(float ResetSpeed, UCurveFloat* ResetSpeedCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.FullyResetCamera"));
    struct Params_FullyResetCamera {
        float ResetSpeed; // 0x0
        char pad_4[0x4];
        UCurveFloat* ResetSpeedCurve; // 0x8
    }; // Size: 0x10
    Params_FullyResetCamera params{};
    params.ResetSpeed = (float)ResetSpeed;
    params.ResetSpeedCurve = (UCurveFloat*)ResetSpeedCurve;
    ProcessEvent(func, &params);
}
UAISense_CogGroup_TargetOfInterest* ABiped_PlayerController::GetTargetOfInterestSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetTargetOfInterestSense"));
    struct Params_GetTargetOfInterestSense {
        UAISense_CogGroup_TargetOfInterest* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetOfInterestSense params{};
    ProcessEvent(func, &params);
    return (UAISense_CogGroup_TargetOfInterest*)params.ReturnValue;
}
UAISense_CogGroup_Station* ABiped_PlayerController::GetStationInteractSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetStationInteractSense"));
    struct Params_GetStationInteractSense {
        UAISense_CogGroup_Station* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetStationInteractSense params{};
    ProcessEvent(func, &params);
    return (UAISense_CogGroup_Station*)params.ReturnValue;
}
UPlayerInput* ABiped_PlayerController::GetPlayerInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetPlayerInput"));
    struct Params_GetPlayerInput {
        UPlayerInput* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerInput params{};
    ProcessEvent(func, &params);
    return (UPlayerInput*)params.ReturnValue;
}
void ABiped_PlayerController::AutoTarget_UseDefaultFocusDirectionClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_UseDefaultFocusDirectionClass"));
    struct Params_AutoTarget_UseDefaultFocusDirectionClass {
    }; // Size: 0x0
    Params_AutoTarget_UseDefaultFocusDirectionClass params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ClearAutoTargetAlwaysTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ClearAutoTargetAlwaysTargetActor"));
    struct Params_ClearAutoTargetAlwaysTargetActor {
    }; // Size: 0x0
    Params_ClearAutoTargetAlwaysTargetActor params{};
    ProcessEvent(func, &params);
}
AActor* ABiped_PlayerController::GetLockedOnActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetLockedOnActor"));
    struct Params_GetLockedOnActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLockedOnActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FVector ABiped_PlayerController::GetBestAutoTargetActor_WorldLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetBestAutoTargetActor_WorldLocation"));
    struct Params_GetBestAutoTargetActor_WorldLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestAutoTargetActor_WorldLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator ABiped_PlayerController::GetLastControlRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetLastControlRotation"));
    struct Params_GetLastControlRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastControlRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
UAISense_CogGroup_Interact* ABiped_PlayerController::GetInteractSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetInteractSense"));
    struct Params_GetInteractSense {
        UAISense_CogGroup_Interact* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInteractSense params{};
    ProcessEvent(func, &params);
    return (UAISense_CogGroup_Interact*)params.ReturnValue;
}
bool ABiped_PlayerController::FlickToTarget(FVector2D StickFlickDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.FlickToTarget"));
    struct Params_FlickToTarget {
        FVector2D StickFlickDirection; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_FlickToTarget params{};
    params.StickFlickDirection = (FVector2D)StickFlickDirection;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAISense_CogGroup_Climb* ABiped_PlayerController::GetClimbSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetClimbSense"));
    struct Params_GetClimbSense {
        UAISense_CogGroup_Climb* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetClimbSense params{};
    ProcessEvent(func, &params);
    return (UAISense_CogGroup_Climb*)params.ReturnValue;
}
AActor* ABiped_PlayerController::GetBestOppugnoActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetBestOppugnoActor"));
    struct Params_GetBestOppugnoActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestOppugnoActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* ABiped_PlayerController::GetBestLockOnActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetBestLockOnActor"));
    struct Params_GetBestLockOnActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestLockOnActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_PlayerController::FinishSettingSpecialAutoTarget(UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.FinishSettingSpecialAutoTarget"));
    struct Params_FinishSettingSpecialAutoTarget {
        UObject* Provider; // 0x0
    }; // Size: 0x8
    Params_FinishSettingSpecialAutoTarget params{};
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
UAISense_CogGroup_AutoTarget* ABiped_PlayerController::GetAutoTargetSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetAutoTargetSense"));
    struct Params_GetAutoTargetSense {
        UAISense_CogGroup_AutoTarget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAutoTargetSense params{};
    ProcessEvent(func, &params);
    return (UAISense_CogGroup_AutoTarget*)params.ReturnValue;
}
float ABiped_PlayerController::GetAimBlendParameter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.GetAimBlendParameter"));
    struct Params_GetAimBlendParameter {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAimBlendParameter params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABiped_PlayerController::FlushInputKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.FlushInputKeys"));
    struct Params_FlushInputKeys {
    }; // Size: 0x0
    Params_FlushInputKeys params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::FinishAimModeTimeDilation(float EaseOut) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.FinishAimModeTimeDilation"));
    struct Params_FinishAimModeTimeDilation {
        float EaseOut; // 0x0
    }; // Size: 0x4
    Params_FinishAimModeTimeDilation params{};
    params.EaseOut = (float)EaseOut;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_UseDefaultUpDirectionClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_UseDefaultUpDirectionClass"));
    struct Params_AutoTarget_UseDefaultUpDirectionClass {
    }; // Size: 0x0
    Params_AutoTarget_UseDefaultUpDirectionClass params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_UseDefaultPerceiverPointClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_UseDefaultPerceiverPointClass"));
    struct Params_AutoTarget_UseDefaultPerceiverPointClass {
    }; // Size: 0x0
    Params_AutoTarget_UseDefaultPerceiverPointClass params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_UseDefaultEval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_UseDefaultEval"));
    struct Params_AutoTarget_UseDefaultEval {
    }; // Size: 0x0
    Params_AutoTarget_UseDefaultEval params{};
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_SetUpDirectionClass(UCogGroupUpDirection* InUpDirectionClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_SetUpDirectionClass"));
    struct Params_AutoTarget_SetUpDirectionClass {
        UCogGroupUpDirection* InUpDirectionClass; // 0x0
    }; // Size: 0x8
    Params_AutoTarget_SetUpDirectionClass params{};
    params.InUpDirectionClass = (UCogGroupUpDirection*)InUpDirectionClass;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AutoTarget_SetFocusDirectionClass(UCogGroupFocusDirection* InFocusDirectionClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AutoTarget_SetFocusDirectionClass"));
    struct Params_AutoTarget_SetFocusDirectionClass {
        UCogGroupFocusDirection* InFocusDirectionClass; // 0x0
    }; // Size: 0x8
    Params_AutoTarget_SetFocusDirectionClass params{};
    params.InFocusDirectionClass = (UCogGroupFocusDirection*)InFocusDirectionClass;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::AllowLockOn(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.AllowLockOn"));
    struct Params_AllowLockOn {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_AllowLockOn params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ActivateReparoSense(bool bFlag, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ActivateReparoSense"));
    struct Params_ActivateReparoSense {
        bool bFlag; // 0x0
        bool bForce; // 0x1
    }; // Size: 0x2
    Params_ActivateReparoSense params{};
    params.bFlag = (bool)bFlag;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ActivateOppugnoSense(bool bFlag, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ActivateOppugnoSense"));
    struct Params_ActivateOppugnoSense {
        bool bFlag; // 0x0
        bool bForce; // 0x1
    }; // Size: 0x2
    Params_ActivateOppugnoSense params{};
    params.bFlag = (bool)bFlag;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ActivateInteractSense(bool bFlag, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ActivateInteractSense"));
    struct Params_ActivateInteractSense {
        bool bFlag; // 0x0
        bool bForce; // 0x1
    }; // Size: 0x2
    Params_ActivateInteractSense params{};
    params.bFlag = (bool)bFlag;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ActivateClimbSense(bool bFlag, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ActivateClimbSense"));
    struct Params_ActivateClimbSense {
        bool bFlag; // 0x0
        bool bForce; // 0x1
    }; // Size: 0x2
    Params_ActivateClimbSense params{};
    params.bFlag = (bool)bFlag;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
void ABiped_PlayerController::ActivateAutoTargetSense(bool bFlag, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_PlayerController.ActivateAutoTargetSense"));
    struct Params_ActivateAutoTargetSense {
        bool bFlag; // 0x0
        bool bForce; // 0x1
    }; // Size: 0x2
    Params_ActivateAutoTargetSense params{};
    params.bFlag = (bool)bFlag;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
