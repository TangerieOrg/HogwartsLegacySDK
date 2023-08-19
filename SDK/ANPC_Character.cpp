#include "AActor.hpp"
#include "ABase_Character.hpp"
#include "ANPC_Character.hpp"
#include "ANPC_Controller.hpp"
#include "APerceptionPointArea.hpp"
#include "APerformTasksForAI.hpp"
#include "EActor_LoadDBProcessingType.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreatureStance.hpp"
#include "EEnemy_CharacterState.hpp"
#include "ENPC_PathSpec.hpp"
#include "ENPC_PerceptionUpdate.hpp"
#include "ENPC_QBUpdate.hpp"
#include "ENPC_Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FGameplayTag.hpp"
#include "FMunitionToInstigatorData.hpp"
#include "FNPC_LOSTraceParams.hpp"
#include "FNPC_PathSpec.hpp"
#include "FNPC_ShowUI.hpp"
#include "FNPC_TargetPerceptionParams.hpp"
#include "FOdcPathSpec.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "FViewTargetTransitionParams.hpp"
#include "UAISense.hpp"
#include "UActorComponent.hpp"
#include "UBehaviorTree.hpp"
#include "UBlackboardComponent.hpp"
#include "UBlackboardData.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UCognitionComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UCombativePlantComponent.hpp"
#include "UCreature_MotionTable.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UDataTable.hpp"
#include "UEnemy_TargetSenseAsset.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNPC_BTComponent.hpp"
#include "UNPC_Component.hpp"
#include "UNPC_PerceptionUpdateDataAsset.hpp"
#include "UNPC_QBUpdateDataAsset.hpp"
#include "UNPC_ReactionComponent.hpp"
#include "UObject.hpp"
#include "UPerceptionIconData.hpp"
#include "USocialAgentPathFollowerComponent.hpp"
ANPC_Character* ANPC_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Character");
    return (ANPC_Character*)res;
}
bool ANPC_Character::WillAttackPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.WillAttackPlayer"));
    struct Params_WillAttackPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WillAttackPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::TargetLost(UAISense* Sense, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.TargetLost"));
    struct Params_TargetLost {
        UAISense* Sense; // 0x0
        AActor* OldTarget; // 0x8
    }; // Size: 0x10
    Params_TargetLost params{};
    params.Sense = (UAISense*)Sense;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void ANPC_Character::Unfreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.Unfreeze"));
    struct Params_Unfreeze {
    }; // Size: 0x0
    Params_Unfreeze params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::NPCDisableCrimeScenePerception(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCDisableCrimeScenePerception"));
    struct Params_NPCDisableCrimeScenePerception {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_NPCDisableCrimeScenePerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ANPC_Character::StopBulletTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StopBulletTime"));
    struct Params_StopBulletTime {
    }; // Size: 0x0
    Params_StopBulletTime params{};
    ProcessEvent(func, &params);
}
bool ANPC_Character::IsRootComponent(UActorComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsRootComponent"));
    struct Params_IsRootComponent {
        UActorComponent* InComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRootComponent params{};
    params.InComponent = (UActorComponent*)InComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::TargetSighted(UAISense* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.TargetSighted"));
    struct Params_TargetSighted {
        UAISense* Sense; // 0x0
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_TargetSighted params{};
    params.Sense = (UAISense*)Sense;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void ANPC_Character::ProtectIntroductionCharacter(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ProtectIntroductionCharacter"));
    struct Params_ProtectIntroductionCharacter {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_ProtectIntroductionCharacter params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void ANPC_Character::TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.TargetChanged"));
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
void ANPC_Character::SetDamageFromPlayerMult(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetDamageFromPlayerMult"));
    struct Params_SetDamageFromPlayerMult {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetDamageFromPlayerMult params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetAllowTargetAimSense(bool InAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetAllowTargetAimSense"));
    struct Params_SetAllowTargetAimSense {
        bool InAllow; // 0x0
    }; // Size: 0x1
    Params_SetAllowTargetAimSense params{};
    params.InAllow = (bool)InAllow;
    ProcessEvent(func, &params);
}
void ANPC_Character::NewDeathFade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NewDeathFade"));
    struct Params_NewDeathFade {
    }; // Size: 0x0
    Params_NewDeathFade params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::StopDeathCam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StopDeathCam"));
    struct Params_StopDeathCam {
    }; // Size: 0x0
    Params_StopDeathCam params{};
    ProcessEvent(func, &params);
}
bool ANPC_Character::IsAlive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsAlive"));
    struct Params_IsAlive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAlive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::OnCharacterDBLoadCompleted(AActor* LoadActor, EActor_LoadDBProcessingType LoadType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.OnCharacterDBLoadCompleted"));
    struct Params_OnCharacterDBLoadCompleted {
        AActor* LoadActor; // 0x0
        EActor_LoadDBProcessingType LoadType; // 0x8
    }; // Size: 0x9
    Params_OnCharacterDBLoadCompleted params{};
    params.LoadActor = (AActor*)LoadActor;
    params.LoadType = (EActor_LoadDBProcessingType)LoadType;
    ProcessEvent(func, &params);
}
void ANPC_Character::StartSuspendEnemies(bool bSuspended, EStandardManagedPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartSuspendEnemies"));
    struct Params_StartSuspendEnemies {
        bool bSuspended; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSuspendEnemies params{};
    params.bSuspended = (bool)bSuspended;
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ANPC_Character::StartSettingSuspendAiState(bool bSuspended, EStandardManagedPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartSettingSuspendAiState"));
    struct Params_StartSettingSuspendAiState {
        bool bSuspended; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSettingSuspendAiState params{};
    params.bSuspended = (bool)bSuspended;
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
bool ANPC_Character::ShouldShowName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ShouldShowName"));
    struct Params_ShouldShowName {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldShowName params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ANPC_Character* ANPC_Character::NPCEnableTimedAttackPerception(AActor* InActorPtr, FName InTeamName, float InTime, AActor* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCEnableTimedAttackPerception"));
    struct Params_NPCEnableTimedAttackPerception {
        AActor* InActorPtr; // 0x0
        FName InTeamName; // 0x8
        float InTime; // 0x10
        char pad_14[0x4];
        AActor* InTarget; // 0x18
        ANPC_Character* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_NPCEnableTimedAttackPerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    params.InTeamName = (FName)InTeamName;
    params.InTime = (float)InTime;
    params.InTarget = (AActor*)InTarget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ANPC_Character*)params.ReturnValue;
}
bool ANPC_Character::ShouldShowBadge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ShouldShowBadge"));
    struct Params_ShouldShowBadge {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldShowBadge params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::StartFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartFadeOut"));
    struct Params_StartFadeOut {
    }; // Size: 0x0
    Params_StartFadeOut params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::StartFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartFadeIn"));
    struct Params_StartFadeIn {
    }; // Size: 0x0
    Params_StartFadeIn params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::StartDissolve() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartDissolve"));
    struct Params_StartDissolve {
    }; // Size: 0x0
    Params_StartDissolve params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::NPCDisableNotifyPerception(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCDisableNotifyPerception"));
    struct Params_NPCDisableNotifyPerception {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_NPCDisableNotifyPerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ANPC_Character::SetShowCallout(bool bInShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetShowCallout"));
    struct Params_SetShowCallout {
        bool bInShow; // 0x0
    }; // Size: 0x1
    Params_SetShowCallout params{};
    params.bInShow = (bool)bInShow;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetForcedPlayerPerception(bool InCanPerceive, bool bKeepAlwaysOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetForcedPlayerPerception"));
    struct Params_SetForcedPlayerPerception {
        bool InCanPerceive; // 0x0
        bool bKeepAlwaysOn; // 0x1
    }; // Size: 0x2
    Params_SetForcedPlayerPerception params{};
    params.InCanPerceive = (bool)InCanPerceive;
    params.bKeepAlwaysOn = (bool)bKeepAlwaysOn;
    ProcessEvent(func, &params);
}
void ANPC_Character::StartDeathCam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartDeathCam"));
    struct Params_StartDeathCam {
    }; // Size: 0x0
    Params_StartDeathCam params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::SetupBehaviorTreeForced() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetupBehaviorTreeForced"));
    struct Params_SetupBehaviorTreeForced {
    }; // Size: 0x0
    Params_SetupBehaviorTreeForced params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::StartCustomAbility(UClass* InAbility, bool bUseCustomPause, bool bClearPauseWhenFinished, bool bPreventReactions, bool bShouldReenableReactions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartCustomAbility"));
    struct Params_StartCustomAbility {
        UClass* InAbility; // 0x0
        bool bUseCustomPause; // 0x8
        bool bClearPauseWhenFinished; // 0x9
        bool bPreventReactions; // 0xa
        bool bShouldReenableReactions; // 0xb
    }; // Size: 0xc
    Params_StartCustomAbility params{};
    params.InAbility = (UClass*)InAbility;
    params.bUseCustomPause = (bool)bUseCustomPause;
    params.bClearPauseWhenFinished = (bool)bClearPauseWhenFinished;
    params.bPreventReactions = (bool)bPreventReactions;
    params.bShouldReenableReactions = (bool)bShouldReenableReactions;
    ProcessEvent(func, &params);
}
void ANPC_Character::StartBulletTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartBulletTime"));
    struct Params_StartBulletTime {
    }; // Size: 0x0
    Params_StartBulletTime params{};
    ProcessEvent(func, &params);
}
bool ANPC_Character::GetAlwaysPerceiveAsTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetAlwaysPerceiveAsTarget"));
    struct Params_GetAlwaysPerceiveAsTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAlwaysPerceiveAsTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::StartChildSpawnFX(FTransform inSpawnLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.StartChildSpawnFX"));
    struct Params_StartChildSpawnFX {
        FTransform inSpawnLoc; // 0x0
    }; // Size: 0x30
    Params_StartChildSpawnFX params{};
    params.inSpawnLoc = (FTransform)inSpawnLoc;
    ProcessEvent(func, &params);
}
bool ANPC_Character::ShouldShowHealthBar() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ShouldShowHealthBar"));
    struct Params_ShouldShowHealthBar {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldShowHealthBar params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::GetShowBadge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowBadge"));
    struct Params_GetShowBadge {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowBadge params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::SetUnawareState(EEnemy_CharacterState InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetUnawareState"));
    struct Params_SetUnawareState {
        EEnemy_CharacterState InState; // 0x0
    }; // Size: 0x1
    Params_SetUnawareState params{};
    params.InState = (EEnemy_CharacterState)InState;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetDamageFromNPCMult(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetDamageFromNPCMult"));
    struct Params_SetDamageFromNPCMult {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetDamageFromNPCMult params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetTargetAimSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetTargetAimSense"));
    struct Params_SetTargetAimSense {
    }; // Size: 0x0
    Params_SetTargetAimSense params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::SetStayInVolumeParams(float inStayInRadius, float inStayInVolumeTeleportTimeout, bool inStayInVolumeOffNavTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetStayInVolumeParams"));
    struct Params_SetStayInVolumeParams {
        float inStayInRadius; // 0x0
        float inStayInVolumeTeleportTimeout; // 0x4
        bool inStayInVolumeOffNavTeleport; // 0x8
    }; // Size: 0x9
    Params_SetStayInVolumeParams params{};
    params.inStayInRadius = (float)inStayInRadius;
    params.inStayInVolumeTeleportTimeout = (float)inStayInVolumeTeleportTimeout;
    params.inStayInVolumeOffNavTeleport = (bool)inStayInVolumeOffNavTeleport;
    ProcessEvent(func, &params);
}
void ANPC_Character::DisableCallout(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DisableCallout"));
    struct Params_DisableCallout {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_DisableCallout params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetShowPerceptionIndicator(bool bInShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetShowPerceptionIndicator"));
    struct Params_SetShowPerceptionIndicator {
        bool bInShow; // 0x0
    }; // Size: 0x1
    Params_SetShowPerceptionIndicator params{};
    params.bInShow = (bool)bInShow;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetShowDamage(bool bInShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetShowDamage"));
    struct Params_SetShowDamage {
        bool bInShow; // 0x0
    }; // Size: 0x1
    Params_SetShowDamage params{};
    params.bInShow = (bool)bInShow;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetShowBadge(bool bInShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetShowBadge"));
    struct Params_SetShowBadge {
        bool bInShow; // 0x0
    }; // Size: 0x1
    Params_SetShowBadge params{};
    params.bInShow = (bool)bInShow;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetShowName(bool bInShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetShowName"));
    struct Params_SetShowName {
        bool bInShow; // 0x0
    }; // Size: 0x1
    Params_SetShowName params{};
    params.bInShow = (bool)bInShow;
    ProcessEvent(func, &params);
}
ANPC_Character* ANPC_Character::NPCEnableAttackPerception(AActor* InActorPtr, FName InTeamName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCEnableAttackPerception"));
    struct Params_NPCEnableAttackPerception {
        AActor* InActorPtr; // 0x0
        FName InTeamName; // 0x8
        ANPC_Character* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_NPCEnableAttackPerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    params.InTeamName = (FName)InTeamName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ANPC_Character*)params.ReturnValue;
}
void ANPC_Character::SetShowHealthBar(bool bInShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetShowHealthBar"));
    struct Params_SetShowHealthBar {
        bool bInShow; // 0x0
    }; // Size: 0x1
    Params_SetShowHealthBar params{};
    params.bInShow = (bool)bInShow;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetNewDefaultPerformTask(APerformTasksForAI* NewDefaultTrigger, bool bForceStart, bool bLoopWhenFinished) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetNewDefaultPerformTask"));
    struct Params_SetNewDefaultPerformTask {
        APerformTasksForAI* NewDefaultTrigger; // 0x0
        bool bForceStart; // 0x8
        bool bLoopWhenFinished; // 0x9
    }; // Size: 0xa
    Params_SetNewDefaultPerformTask params{};
    params.NewDefaultTrigger = (APerformTasksForAI*)NewDefaultTrigger;
    params.bForceStart = (bool)bForceStart;
    params.bLoopWhenFinished = (bool)bLoopWhenFinished;
    ProcessEvent(func, &params);
}
void ANPC_Character::RemoveQBUpdateSupported(ENPC_QBUpdate InQBUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.RemoveQBUpdateSupported"));
    struct Params_RemoveQBUpdateSupported {
        ENPC_QBUpdate InQBUpdate; // 0x0
    }; // Size: 0x1
    Params_RemoveQBUpdateSupported params{};
    params.InQBUpdate = (ENPC_QBUpdate)InQBUpdate;
    ProcessEvent(func, &params);
}
void ANPC_Character::OnStationOnFinishedExit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.OnStationOnFinishedExit"));
    struct Params_OnStationOnFinishedExit {
    }; // Size: 0x0
    Params_OnStationOnFinishedExit params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::SetDamageToPlayerMult(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetDamageToPlayerMult"));
    struct Params_SetDamageToPlayerMult {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetDamageToPlayerMult params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetCanPerceivePlayer(bool bShouldExclude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetCanPerceivePlayer"));
    struct Params_SetCanPerceivePlayer {
        bool bShouldExclude; // 0x0
    }; // Size: 0x1
    Params_SetCanPerceivePlayer params{};
    params.bShouldExclude = (bool)bShouldExclude;
    ProcessEvent(func, &params);
}
void ANPC_Character::SetAlwaysPerceiveAsTarget(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.SetAlwaysPerceiveAsTarget"));
    struct Params_SetAlwaysPerceiveAsTarget {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysPerceiveAsTarget params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void ANPC_Character::RestoreStayInVolumeParamDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.RestoreStayInVolumeParamDefaults"));
    struct Params_RestoreStayInVolumeParamDefaults {
    }; // Size: 0x0
    Params_RestoreStayInVolumeParamDefaults params{};
    ProcessEvent(func, &params);
}
bool ANPC_Character::IsFrozen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsFrozen"));
    struct Params_IsFrozen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFrozen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::NPCDisableAttackPerception(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCDisableAttackPerception"));
    struct Params_NPCDisableAttackPerception {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_NPCDisableAttackPerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ANPC_Character::RemoveStayInVolume(APerceptionPointArea* InArea) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.RemoveStayInVolume"));
    struct Params_RemoveStayInVolume {
        APerceptionPointArea* InArea; // 0x0
    }; // Size: 0x8
    Params_RemoveStayInVolume params{};
    params.InArea = (APerceptionPointArea*)InArea;
    ProcessEvent(func, &params);
}
void ANPC_Character::RemoveAllStayInVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.RemoveAllStayInVolumes"));
    struct Params_RemoveAllStayInVolumes {
    }; // Size: 0x0
    Params_RemoveAllStayInVolumes params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::OnPTTaskComplete(int32_t InTaskIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.OnPTTaskComplete"));
    struct Params_OnPTTaskComplete {
        int32_t InTaskIndex; // 0x0
    }; // Size: 0x4
    Params_OnPTTaskComplete params{};
    params.InTaskIndex = (int32_t)InTaskIndex;
    ProcessEvent(func, &params);
}
void ANPC_Character::AddQBUpdateSupported(ENPC_QBUpdate InQBUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.AddQBUpdateSupported"));
    struct Params_AddQBUpdateSupported {
        ENPC_QBUpdate InQBUpdate; // 0x0
    }; // Size: 0x1
    Params_AddQBUpdateSupported params{};
    params.InQBUpdate = (ENPC_QBUpdate)InQBUpdate;
    ProcessEvent(func, &params);
}
void ANPC_Character::ReleaseIntroductionCharacter(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ReleaseIntroductionCharacter"));
    struct Params_ReleaseIntroductionCharacter {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_ReleaseIntroductionCharacter params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void ANPC_Character::Release(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.Release"));
    struct Params_Release {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_Release params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::OnPTComplete(APerformTasksForAI* InPTPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.OnPTComplete"));
    struct Params_OnPTComplete {
        APerformTasksForAI* InPTPtr; // 0x0
    }; // Size: 0x8
    Params_OnPTComplete params{};
    params.InPTPtr = (APerformTasksForAI*)InPTPtr;
    ProcessEvent(func, &params);
}
void ANPC_Character::RagdollImpact() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.RagdollImpact"));
    struct Params_RagdollImpact {
    }; // Size: 0x0
    Params_RagdollImpact params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::MunitionToInstigator(UObject* i_caller, FMunitionToInstigatorData& InMunInstData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.MunitionToInstigator"));
    struct Params_MunitionToInstigator {
        UObject* i_caller; // 0x0
        FMunitionToInstigatorData InMunInstData; // 0x8
    }; // Size: 0x20
    Params_MunitionToInstigator params{};
    params.i_caller = (UObject*)i_caller;
    params.InMunInstData = (FMunitionToInstigatorData)InMunInstData;
    ProcessEvent(func, &params);
    InMunInstData = params.InMunInstData;
}
void ANPC_Character::OnStationOnFinishedEnter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.OnStationOnFinishedEnter"));
    struct Params_OnStationOnFinishedEnter {
    }; // Size: 0x0
    Params_OnStationOnFinishedEnter params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::OnChildSpawnFX(FTransform inSpawnLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.OnChildSpawnFX"));
    struct Params_OnChildSpawnFX {
        FTransform inSpawnLoc; // 0x0
    }; // Size: 0x30
    Params_OnChildSpawnFX params{};
    params.inSpawnLoc = (FTransform)inSpawnLoc;
    ProcessEvent(func, &params);
}
bool ANPC_Character::NPCWillAttackPlayer(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCWillAttackPlayer"));
    struct Params_NPCWillAttackPlayer {
        AActor* InActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_NPCWillAttackPlayer params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::GetShowHealthBar() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowHealthBar"));
    struct Params_GetShowHealthBar {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowHealthBar params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsAiSuspended() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsAiSuspended"));
    struct Params_IsAiSuspended {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAiSuspended params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FNPC_TargetPerceptionParams ANPC_Character::NPCGetTargetPerceptionParams(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCGetTargetPerceptionParams"));
    struct Params_NPCGetTargetPerceptionParams {
        AActor* InActorPtr; // 0x0
        FNPC_TargetPerceptionParams ReturnValue; // 0x8
    }; // Size: 0x44
    Params_NPCGetTargetPerceptionParams params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FNPC_TargetPerceptionParams)params.ReturnValue;
}
ANPC_Character* ANPC_Character::NPCEnableNotifyPerception(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCEnableNotifyPerception"));
    struct Params_NPCEnableNotifyPerception {
        AActor* InActorPtr; // 0x0
        ANPC_Character* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_NPCEnableNotifyPerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ANPC_Character*)params.ReturnValue;
}
ANPC_Character* ANPC_Character::NPCEnableCrimeScenePerception(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.NPCEnableCrimeScenePerception"));
    struct Params_NPCEnableCrimeScenePerception {
        AActor* InActorPtr; // 0x0
        ANPC_Character* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_NPCEnableCrimeScenePerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ANPC_Character*)params.ReturnValue;
}
void ANPC_Character::Kill() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.Kill"));
    struct Params_Kill {
    }; // Size: 0x0
    Params_Kill params{};
    ProcessEvent(func, &params);
}
bool ANPC_Character::IsScheduledEntity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsScheduledEntity"));
    struct Params_IsScheduledEntity {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsScheduledEntity params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsReleased"));
    struct Params_IsReleased {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReleased params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsQBUpdateSupported(ENPC_QBUpdate InQBUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsQBUpdateSupported"));
    struct Params_IsQBUpdateSupported {
        ENPC_QBUpdate InQBUpdate; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsQBUpdateSupported params{};
    params.InQBUpdate = (ENPC_QBUpdate)InQBUpdate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsPerceptionUpdateSupported(ENPC_PerceptionUpdate InPerceptionUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsPerceptionUpdateSupported"));
    struct Params_IsPerceptionUpdateSupported {
        ENPC_PerceptionUpdate InPerceptionUpdate; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsPerceptionUpdateSupported params{};
    params.InPerceptionUpdate = (ENPC_PerceptionUpdate)InPerceptionUpdate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsInCreatureAnimationTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsInCreatureAnimationTransition"));
    struct Params_IsInCreatureAnimationTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInCreatureAnimationTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsInCreatureAnimationStanceTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsInCreatureAnimationStanceTransition"));
    struct Params_IsInCreatureAnimationStanceTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInCreatureAnimationStanceTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::IsInCreatureAnimationGaitTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.IsInCreatureAnimationGaitTransition"));
    struct Params_IsInCreatureAnimationGaitTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInCreatureAnimationGaitTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::HasTaskTag(FGameplayTag InTaskTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.HasTaskTag"));
    struct Params_HasTaskTag {
        FGameplayTag InTaskTag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasTaskTag params{};
    params.InTaskTag = (FGameplayTag)InTaskTag;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::HandleRagdollImpact(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.HandleRagdollImpact"));
    struct Params_HandleRagdollImpact {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_HandleRagdollImpact params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
FNPC_TargetPerceptionParams ANPC_Character::GetTargetPerceptionParams() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetTargetPerceptionParams"));
    struct Params_GetTargetPerceptionParams {
        FNPC_TargetPerceptionParams ReturnValue; // 0x0
    }; // Size: 0x3c
    Params_GetTargetPerceptionParams params{};
    ProcessEvent(func, &params);
    return (FNPC_TargetPerceptionParams)params.ReturnValue;
}
bool ANPC_Character::GetShowUIPerceptinCone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowUIPerceptinCone"));
    struct Params_GetShowUIPerceptinCone {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowUIPerceptinCone params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FNPC_ShowUI ANPC_Character::GetShowUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowUI"));
    struct Params_GetShowUI {
        FNPC_ShowUI ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetShowUI params{};
    ProcessEvent(func, &params);
    return (FNPC_ShowUI)params.ReturnValue;
}
bool ANPC_Character::GetShowPerceptionIndicator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowPerceptionIndicator"));
    struct Params_GetShowPerceptionIndicator {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowPerceptionIndicator params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::GetShowName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowName"));
    struct Params_GetShowName {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowName params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::GetShowDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowDamage"));
    struct Params_GetShowDamage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowDamage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANPC_Character::GetShowCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetShowCallout"));
    struct Params_GetShowCallout {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowCallout params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ENPC_Type ANPC_Character::GetNPCType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetNPCType"));
    struct Params_GetNPCType {
        ENPC_Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetNPCType params{};
    ProcessEvent(func, &params);
    return (ENPC_Type)params.ReturnValue;
}
FOdcPathSpec ANPC_Character::GetNPCPathSpec(ENPC_PathSpec InPathSpec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetNPCPathSpec"));
    struct Params_GetNPCPathSpec {
        ENPC_PathSpec InPathSpec; // 0x0
        char pad_1[0x7];
        FOdcPathSpec ReturnValue; // 0x8
    }; // Size: 0x58
    Params_GetNPCPathSpec params{};
    params.InPathSpec = (ENPC_PathSpec)InPathSpec;
    ProcessEvent(func, &params);
    return (FOdcPathSpec)params.ReturnValue;
}
UCapsuleComponent* ANPC_Character::GetNpcCapsuleComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetNpcCapsuleComponent"));
    struct Params_GetNpcCapsuleComponent {
        UCapsuleComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNpcCapsuleComponent params{};
    ProcessEvent(func, &params);
    return (UCapsuleComponent*)params.ReturnValue;
}
FVector ANPC_Character::GetImpactLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetImpactLocation"));
    struct Params_GetImpactLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetImpactLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector ANPC_Character::GetImpactDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetImpactDirection"));
    struct Params_GetImpactDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetImpactDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FEnemy_CharacterParams ANPC_Character::GetCharacterParams() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.GetCharacterParams"));
    struct Params_GetCharacterParams {
        FEnemy_CharacterParams ReturnValue; // 0x0
    }; // Size: 0x490
    Params_GetCharacterParams params{};
    ProcessEvent(func, &params);
    return (FEnemy_CharacterParams)params.ReturnValue;
}
void ANPC_Character::Freeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.Freeze"));
    struct Params_Freeze {
    }; // Size: 0x0
    Params_Freeze params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::ClearForceScheduledEntityState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ClearForceScheduledEntityState"));
    struct Params_ClearForceScheduledEntityState {
    }; // Size: 0x0
    Params_ClearForceScheduledEntityState params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::ForceScheduledEntityState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ForceScheduledEntityState"));
    struct Params_ForceScheduledEntityState {
    }; // Size: 0x0
    Params_ForceScheduledEntityState params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::ForceProtego(bool inProtegoOnOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ForceProtego"));
    struct Params_ForceProtego {
        bool inProtegoOnOff; // 0x0
    }; // Size: 0x1
    Params_ForceProtego params{};
    params.inProtegoOnOff = (bool)inProtegoOnOff;
    ProcessEvent(func, &params);
}
void ANPC_Character::FinishSuspendEnemies(EStandardManagedPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.FinishSuspendEnemies"));
    struct Params_FinishSuspendEnemies {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_FinishSuspendEnemies params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ANPC_Character::FinishSettingSuspendAiState(EStandardManagedPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.FinishSettingSuspendAiState"));
    struct Params_FinishSettingSuspendAiState {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_FinishSettingSuspendAiState params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ANPC_Character::EndCustomAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.EndCustomAbility"));
    struct Params_EndCustomAbility {
    }; // Size: 0x0
    Params_EndCustomAbility params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::EnablePerception(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.EnablePerception"));
    struct Params_EnablePerception {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_EnablePerception params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::EnableMinimapPerceptionCone(ANPC_Character* NPCCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.EnableMinimapPerceptionCone"));
    struct Params_EnableMinimapPerceptionCone {
        ANPC_Character* NPCCharacter; // 0x0
    }; // Size: 0x8
    Params_EnableMinimapPerceptionCone params{};
    params.NPCCharacter = (ANPC_Character*)NPCCharacter;
    ProcessEvent(func, &params);
}
void ANPC_Character::EnableCallout(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.EnableCallout"));
    struct Params_EnableCallout {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_EnableCallout params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::EnableBeacon(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.EnableBeacon"));
    struct Params_EnableBeacon {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_EnableBeacon params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::DisablePerception(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DisablePerception"));
    struct Params_DisablePerception {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_DisablePerception params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::DisableMinimapPerceptionCone(ANPC_Character* NPCCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DisableMinimapPerceptionCone"));
    struct Params_DisableMinimapPerceptionCone {
        ANPC_Character* NPCCharacter; // 0x0
    }; // Size: 0x8
    Params_DisableMinimapPerceptionCone params{};
    params.NPCCharacter = (ANPC_Character*)NPCCharacter;
    ProcessEvent(func, &params);
}
void ANPC_Character::DisableBeacon(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DisableBeacon"));
    struct Params_DisableBeacon {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_DisableBeacon params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANPC_Character::DestroyOnDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DestroyOnDeath"));
    struct Params_DestroyOnDeath {
    }; // Size: 0x0
    Params_DestroyOnDeath params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::DeathFxComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DeathFxComplete"));
    struct Params_DeathFxComplete {
    }; // Size: 0x0
    Params_DeathFxComplete params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::DeathExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DeathExplode"));
    struct Params_DeathExplode {
    }; // Size: 0x0
    Params_DeathExplode params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::DeathDissolve() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.DeathDissolve"));
    struct Params_DeathDissolve {
    }; // Size: 0x0
    Params_DeathDissolve params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::CharacterDiedEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.CharacterDiedEvent"));
    struct Params_CharacterDiedEvent {
    }; // Size: 0x0
    Params_CharacterDiedEvent params{};
    ProcessEvent(func, &params);
}
bool ANPC_Character::CanBePickpocketed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.CanBePickpocketed"));
    struct Params_CanBePickpocketed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanBePickpocketed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANPC_Character::BroadcastNPC_AnimEvent(FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.BroadcastNPC_AnimEvent"));
    struct Params_BroadcastNPC_AnimEvent {
        FName InName; // 0x0
    }; // Size: 0x8
    Params_BroadcastNPC_AnimEvent params{};
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
}
void ANPC_Character::ApplyReplicaFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ApplyReplicaFX"));
    struct Params_ApplyReplicaFX {
    }; // Size: 0x0
    Params_ApplyReplicaFX params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::AssignNPCLevelWRTPlayerLevel(int32_t ExpLevel, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.AssignNPCLevelWRTPlayerLevel"));
    struct Params_AssignNPCLevelWRTPlayerLevel {
        int32_t ExpLevel; // 0x0
        bool bIndicateHUD; // 0x4
    }; // Size: 0x5
    Params_AssignNPCLevelWRTPlayerLevel params{};
    params.ExpLevel = (int32_t)ExpLevel;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void ANPC_Character::ApplyTargetSenseAsset(UEnemy_TargetSenseAsset* InTargetSenseAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ApplyTargetSenseAsset"));
    struct Params_ApplyTargetSenseAsset {
        UEnemy_TargetSenseAsset* InTargetSenseAsset; // 0x0
    }; // Size: 0x8
    Params_ApplyTargetSenseAsset params{};
    params.InTargetSenseAsset = (UEnemy_TargetSenseAsset*)InTargetSenseAsset;
    ProcessEvent(func, &params);
}
void ANPC_Character::ApplySpawnFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ApplySpawnFX"));
    struct Params_ApplySpawnFX {
    }; // Size: 0x0
    Params_ApplySpawnFX params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::ApplyNPCPathSpecDirect(FOdcPathSpec InPathSpec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ApplyNPCPathSpecDirect"));
    struct Params_ApplyNPCPathSpecDirect {
        FOdcPathSpec InPathSpec; // 0x0
    }; // Size: 0x50
    Params_ApplyNPCPathSpecDirect params{};
    params.InPathSpec = (FOdcPathSpec)InPathSpec;
    ProcessEvent(func, &params);
}
void ANPC_Character::ApplyNPCPathSpec(ENPC_PathSpec InPathSpec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ApplyNPCPathSpec"));
    struct Params_ApplyNPCPathSpec {
        ENPC_PathSpec InPathSpec; // 0x0
    }; // Size: 0x1
    Params_ApplyNPCPathSpec params{};
    params.InPathSpec = (ENPC_PathSpec)InPathSpec;
    ProcessEvent(func, &params);
}
void ANPC_Character::ApplyCharacterFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.ApplyCharacterFX"));
    struct Params_ApplyCharacterFX {
    }; // Size: 0x0
    Params_ApplyCharacterFX params{};
    ProcessEvent(func, &params);
}
void ANPC_Character::AddStayInVolume(APerceptionPointArea* InArea) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.AddStayInVolume"));
    struct Params_AddStayInVolume {
        APerceptionPointArea* InArea; // 0x0
    }; // Size: 0x8
    Params_AddStayInVolume params{};
    params.InArea = (APerceptionPointArea*)InArea;
    ProcessEvent(func, &params);
}
void ANPC_Character::AddPerceptionUpdateSupported(ENPC_PerceptionUpdate InPerceptionUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Character.AddPerceptionUpdateSupported"));
    struct Params_AddPerceptionUpdateSupported {
        ENPC_PerceptionUpdate InPerceptionUpdate; // 0x0
    }; // Size: 0x1
    Params_AddPerceptionUpdateSupported params{};
    params.InPerceptionUpdate = (ENPC_PerceptionUpdate)InPerceptionUpdate;
    ProcessEvent(func, &params);
}
