#include "AAIController.hpp"
#include "AActor.hpp"
#include "ACharacter.hpp"
#include "ANPC_Character.hpp"
#include "ANPC_Controller.hpp"
#include "ANPC_Spline.hpp"
#include "EEnemyAIAction.hpp"
#include "EEnemyAIAnimState.hpp"
#include "EEnemyAIState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AnimMainState.hpp"
#include "EEnemy_BBKey.hpp"
#include "EEnemy_InitTreeTimeoutAction.hpp"
#include "EEnemy_ParryButtonPressed.hpp"
#include "EEnemy_TargetType.hpp"
#include "EMovementMode.hpp"
#include "ENPC_AbilityChannel.hpp"
#include "ENPC_CrouchContext.hpp"
#include "ENPC_Mobility.hpp"
#include "ENPC_MoveDataState.hpp"
#include "ENPC_SidekickUpdateState.hpp"
#include "ENPC_Spawn.hpp"
#include "ENPC_SpawnState.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "ENPC_Tether.hpp"
#include "ENPC_WaterResponse.hpp"
#include "EPathExistanceQueryType\Type.hpp"
#include "EPathFollowingRequestResult\Type.hpp"
#include "FEnemy_LimitAttackOnTargetData.hpp"
#include "FEnemy_ParryParamData.hpp"
#include "FFinisherData.hpp"
#include "FFinisherRequirementData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_AbilityChannel.hpp"
#include "FNPC_AbilityChannelMap.hpp"
#include "FNPC_ActionParams.hpp"
#include "FNPC_JumpSplineData.hpp"
#include "FNPC_LosingTarget.hpp"
#include "FNPC_MobilityDataContainer.hpp"
#include "FNPC_MobilityTransition.hpp"
#include "FNPC_MobilityUberData.hpp"
#include "FNPC_NavPath.hpp"
#include "FNPC_SpawnData.hpp"
#include "FNPC_SpawnLocationMap.hpp"
#include "FNPC_TurnAssistDataContainer.hpp"
#include "FNpcTimers.hpp"
#include "FQueueReactionParams.hpp"
#include "FVector.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionData.hpp"
#include "UActorComponent.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UAnimInstance.hpp"
#include "UAnimationArchitectComponent.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UDynamicBranchComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMeshComponent.hpp"
#include "UNPC_AbilityTaskScratchPad.hpp"
#include "UNPC_AnimInstance.hpp"
#include "UNPC_Component.hpp"
#include "UNPC_MobilityDataContainerAsset.hpp"
#include "UNPC_PerceptionChoice.hpp"
#include "UNPC_ReactionComponent.hpp"
#include "URagdollControlComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
void UNPC_Component::StartSpeedScaleAdjust(float InScale, float DurationSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StartSpeedScaleAdjust"));
    struct Params_StartSpeedScaleAdjust {
        float InScale; // 0x0
        float DurationSeconds; // 0x4
    }; // Size: 0x8
    Params_StartSpeedScaleAdjust params{};
    params.InScale = (float)InScale;
    params.DurationSeconds = (float)DurationSeconds;
    ProcessEvent(func, &params);
}
bool UNPC_Component::TreeWaitUpdate(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.TreeWaitUpdate"));
    struct Params_TreeWaitUpdate {
        float DeltaTime; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_TreeWaitUpdate params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNPC_Component* UNPC_Component::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Component");
    return (UNPC_Component*)res;
}
void UNPC_Component::SetSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetSpeed"));
    struct Params_SetSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
bool UNPC_Component::WasActionASuccess(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.WasActionASuccess"));
    struct Params_WasActionASuccess {
        EEnemyAIAction InAction; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_WasActionASuccess params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::SetBlackboardFloat(FName& InBBName, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetBlackboardFloat"));
    struct Params_SetBlackboardFloat {
        FName InBBName; // 0x0
        float InValue; // 0x8
    }; // Size: 0xc
    Params_SetBlackboardFloat params{};
    params.InBBName = (FName)InBBName;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
    InBBName = params.InBBName;
}
bool UNPC_Component::UpdateTetheredLoc(FVector& OutLoc, bool& OutDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.UpdateTetheredLoc"));
    struct Params_UpdateTetheredLoc {
        FVector OutLoc; // 0x0
        bool OutDone; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_UpdateTetheredLoc params{};
    params.OutLoc = (FVector)OutLoc;
    params.OutDone = (bool)OutDone;
    ProcessEvent(func, &params);
    OutLoc = params.OutLoc;
    OutDone = params.OutDone;
    return (bool)params.ReturnValue;
}
void UNPC_Component::SetOnStairs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetOnStairs"));
    struct Params_SetOnStairs {
    }; // Size: 0x0
    Params_SetOnStairs params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetBlackboardBool(FName& InBBName, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetBlackboardBool"));
    struct Params_SetBlackboardBool {
        FName InBBName; // 0x0
        bool InValue; // 0x8
    }; // Size: 0x9
    Params_SetBlackboardBool params{};
    params.InBBName = (FName)InBBName;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
    InBBName = params.InBBName;
}
void UNPC_Component::UnchainAction(EEnemyAIAction ChainFromAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.UnchainAction"));
    struct Params_UnchainAction {
        EEnemyAIAction ChainFromAction; // 0x0
    }; // Size: 0x1
    Params_UnchainAction params{};
    params.ChainFromAction = (EEnemyAIAction)ChainFromAction;
    ProcessEvent(func, &params);
}
FVector UNPC_Component::TetheredWanderLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.TetheredWanderLocation"));
    struct Params_TetheredWanderLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_TetheredWanderLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UNPC_Component::StopMove() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StopMove"));
    struct Params_StopMove {
    }; // Size: 0x0
    Params_StopMove params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::StopSpeedScaleAdjust() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StopSpeedScaleAdjust"));
    struct Params_StopSpeedScaleAdjust {
    }; // Size: 0x0
    Params_StopSpeedScaleAdjust params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::StopActionOnUpdate(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StopActionOnUpdate"));
    struct Params_StopActionOnUpdate {
        EEnemyAIAction InAction; // 0x0
    }; // Size: 0x1
    Params_StopActionOnUpdate params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
}
void UNPC_Component::OnStationOnFinishedEnter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnStationOnFinishedEnter"));
    struct Params_OnStationOnFinishedEnter {
    }; // Size: 0x0
    Params_OnStationOnFinishedEnter params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetBlackboard(UBlackboardComponent* pBlackboardComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetBlackboard"));
    struct Params_SetBlackboard {
        UBlackboardComponent* pBlackboardComp; // 0x0
    }; // Size: 0x8
    Params_SetBlackboard params{};
    params.pBlackboardComp = (UBlackboardComponent*)pBlackboardComp;
    ProcessEvent(func, &params);
}
void UNPC_Component::StopAction(EEnemyAIAction InAction, bool bSuccess, bool bTimeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StopAction"));
    struct Params_StopAction {
        EEnemyAIAction InAction; // 0x0
        bool bSuccess; // 0x1
        bool bTimeout; // 0x2
    }; // Size: 0x3
    Params_StopAction params{};
    params.InAction = (EEnemyAIAction)InAction;
    params.bSuccess = (bool)bSuccess;
    params.bTimeout = (bool)bTimeout;
    ProcessEvent(func, &params);
}
bool UNPC_Component::IsStationary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsStationary"));
    struct Params_IsStationary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStationary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::MoveToLocation(FVector Loc, UCurveFloat* CurveFloatPtr, float InterpSpeed, float DeltaTime, bool bStopOnOverlap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.MoveToLocation"));
    struct Params_MoveToLocation {
        FVector Loc; // 0x0
        char pad_c[0x4];
        UCurveFloat* CurveFloatPtr; // 0x10
        float InterpSpeed; // 0x18
        float DeltaTime; // 0x1c
        bool bStopOnOverlap; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_MoveToLocation params{};
    params.Loc = (FVector)Loc;
    params.CurveFloatPtr = (UCurveFloat*)CurveFloatPtr;
    params.InterpSpeed = (float)InterpSpeed;
    params.DeltaTime = (float)DeltaTime;
    params.bStopOnOverlap = (bool)bStopOnOverlap;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UNPC_Component::PickRandomPath(AAIController* AIOwner, TArray<FVector> Targets, float TopPercent, EPathExistanceQueryType::Type PathQueryType, UClass* FilterClass, bool AllowPartialPaths, FVector& outTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.PickRandomPath"));
    struct Params_PickRandomPath {
        AAIController* AIOwner; // 0x0
        TArray<FVector> Targets; // 0x8
        float TopPercent; // 0x18
        EPathExistanceQueryType::Type PathQueryType; // 0x1c
        char pad_1d[0x3];
        UClass* FilterClass; // 0x20
        bool AllowPartialPaths; // 0x28
        char pad_29[0x3];
        FVector outTarget; // 0x2c
        int32_t ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_PickRandomPath params{};
    params.AIOwner = (AAIController*)AIOwner;
    params.Targets = (TArray<FVector>)Targets;
    params.TopPercent = (float)TopPercent;
    params.PathQueryType = (EPathExistanceQueryType::Type)PathQueryType;
    params.FilterClass = (UClass*)FilterClass;
    params.AllowPartialPaths = (bool)AllowPartialPaths;
    params.outTarget = (FVector)outTarget;
    ProcessEvent(func, &params);
    outTarget = params.outTarget;
    return (int32_t)params.ReturnValue;
}
void UNPC_Component::StartupAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StartupAbility"));
    struct Params_StartupAbility {
    }; // Size: 0x0
    Params_StartupAbility params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetCharred"));
    struct Params_SetCharred {
    }; // Size: 0x0
    Params_SetCharred params{};
    ProcessEvent(func, &params);
}
bool UNPC_Component::GetOnGround() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetOnGround"));
    struct Params_GetOnGround {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetOnGround params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::StartLoadingFinisherAbilities() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StartLoadingFinisherAbilities"));
    struct Params_StartLoadingFinisherAbilities {
    }; // Size: 0x0
    Params_StartLoadingFinisherAbilities params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetInvincibility(bool InIsInvincible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetInvincibility"));
    struct Params_SetInvincibility {
        bool InIsInvincible; // 0x0
    }; // Size: 0x1
    Params_SetInvincibility params{};
    params.InIsInvincible = (bool)InIsInvincible;
    ProcessEvent(func, &params);
}
void UNPC_Component::StartDynamicBranch(EEnemy_Ability InAbility, EEnemy_Ability InNextAbility, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StartDynamicBranch"));
    struct Params_StartDynamicBranch {
        EEnemy_Ability InAbility; // 0x0
        EEnemy_Ability InNextAbility; // 0x1
        bool bImmediate; // 0x2
    }; // Size: 0x3
    Params_StartDynamicBranch params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    params.InNextAbility = (EEnemy_Ability)InNextAbility;
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
}
void UNPC_Component::StartCustomPause(bool bCleanupWhenCustomAbilityFinished) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StartCustomPause"));
    struct Params_StartCustomPause {
        bool bCleanupWhenCustomAbilityFinished; // 0x0
    }; // Size: 0x1
    Params_StartCustomPause params{};
    params.bCleanupWhenCustomAbilityFinished = (bool)bCleanupWhenCustomAbilityFinished;
    ProcessEvent(func, &params);
}
bool UNPC_Component::StartAction(EEnemyAIAction InAction, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.StartAction"));
    struct Params_StartAction {
        EEnemyAIAction InAction; // 0x0
        char pad_1[0x3];
        float Timeout; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StartAction params{};
    params.InAction = (EEnemyAIAction)InAction;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::SidekickUpdateStateUpdate(ENPC_SidekickUpdateState InUpdateState, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SidekickUpdateStateUpdate"));
    struct Params_SidekickUpdateStateUpdate {
        ENPC_SidekickUpdateState InUpdateState; // 0x0
        char pad_1[0x3];
        float DeltaTime; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SidekickUpdateStateUpdate params{};
    params.InUpdateState = (ENPC_SidekickUpdateState)InUpdateState;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::SetWanderStartLocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetWanderStartLocation"));
    struct Params_SetWanderStartLocation {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_SetWanderStartLocation params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetCrouchContextFlag(ENPC_CrouchContext CrouchContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetCrouchContextFlag"));
    struct Params_SetCrouchContextFlag {
        ENPC_CrouchContext CrouchContext; // 0x0
    }; // Size: 0x1
    Params_SetCrouchContextFlag params{};
    params.CrouchContext = (ENPC_CrouchContext)CrouchContext;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetTargetSightedEnable(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetTargetSightedEnable"));
    struct Params_SetTargetSightedEnable {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetTargetSightedEnable params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetTargetLocationTurnInPlace(FVector InTargetLoc_TurnInPlace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetTargetLocationTurnInPlace"));
    struct Params_SetTargetLocationTurnInPlace {
        FVector InTargetLoc_TurnInPlace; // 0x0
    }; // Size: 0xc
    Params_SetTargetLocationTurnInPlace params{};
    params.InTargetLoc_TurnInPlace = (FVector)InTargetLoc_TurnInPlace;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetFleeTargetPos(FVector InPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetFleeTargetPos"));
    struct Params_SetFleeTargetPos {
        FVector InPos; // 0x0
    }; // Size: 0xc
    Params_SetFleeTargetPos params{};
    params.InPos = (FVector)InPos;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetTarget(AActor* pTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetTarget"));
    struct Params_SetTarget {
        AActor* pTarget; // 0x0
    }; // Size: 0x8
    Params_SetTarget params{};
    params.pTarget = (AActor*)pTarget;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetAnimMainState(EEnemy_AnimMainState InAnimState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAnimMainState"));
    struct Params_SetAnimMainState {
        EEnemy_AnimMainState InAnimState; // 0x0
    }; // Size: 0x1
    Params_SetAnimMainState params{};
    params.InAnimState = (EEnemy_AnimMainState)InAnimState;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetStealthContext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetStealthContext"));
    struct Params_SetStealthContext {
    }; // Size: 0x0
    Params_SetStealthContext params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::OnStationOnFinishedExit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnStationOnFinishedExit"));
    struct Params_OnStationOnFinishedExit {
    }; // Size: 0x0
    Params_OnStationOnFinishedExit params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetSpeedScale(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetSpeedScale"));
    struct Params_SetSpeedScale {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetSpeedScale params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetSpeedChooserScale(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetSpeedChooserScale"));
    struct Params_SetSpeedChooserScale {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetSpeedChooserScale params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetCharacterRootMotionScale(float RootMotionScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetCharacterRootMotionScale"));
    struct Params_SetCharacterRootMotionScale {
        float RootMotionScale; // 0x0
    }; // Size: 0x4
    Params_SetCharacterRootMotionScale params{};
    params.RootMotionScale = (float)RootMotionScale;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetSpawnAnimOffset(float InOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetSpawnAnimOffset"));
    struct Params_SetSpawnAnimOffset {
        float InOffset; // 0x0
    }; // Size: 0x4
    Params_SetSpawnAnimOffset params{};
    params.InOffset = (float)InOffset;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetOnFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetOnFire"));
    struct Params_SetOnFire {
    }; // Size: 0x0
    Params_SetOnFire params{};
    ProcessEvent(func, &params);
}
EEnemy_Ability UNPC_Component::GetActiveAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetActiveAbility"));
    struct Params_GetActiveAbility {
        EEnemy_Ability ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActiveAbility params{};
    ProcessEvent(func, &params);
    return (EEnemy_Ability)params.ReturnValue;
}
void UNPC_Component::SetScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetScale"));
    struct Params_SetScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetOverrideMobility(ENPC_Mobility InMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetOverrideMobility"));
    struct Params_SetOverrideMobility {
        ENPC_Mobility InMobility; // 0x0
    }; // Size: 0x1
    Params_SetOverrideMobility params{};
    params.InMobility = (ENPC_Mobility)InMobility;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetOnSlope() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetOnSlope"));
    struct Params_SetOnSlope {
    }; // Size: 0x0
    Params_SetOnSlope params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetMoveGoal(FVector InGoal, bool bNavReachable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetMoveGoal"));
    struct Params_SetMoveGoal {
        FVector InGoal; // 0x0
        bool bNavReachable; // 0xc
    }; // Size: 0xd
    Params_SetMoveGoal params{};
    params.InGoal = (FVector)InGoal;
    params.bNavReachable = (bool)bNavReachable;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetJumpSplineData(FNPC_JumpSplineData& InData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetJumpSplineData"));
    struct Params_SetJumpSplineData {
        FNPC_JumpSplineData InData; // 0x0
    }; // Size: 0x40
    Params_SetJumpSplineData params{};
    params.InData = (FNPC_JumpSplineData)InData;
    ProcessEvent(func, &params);
    InData = params.InData;
}
void UNPC_Component::ParryEvent(EEnemy_ParryButtonPressed InButtonPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ParryEvent"));
    struct Params_ParryEvent {
        EEnemy_ParryButtonPressed InButtonPressed; // 0x0
    }; // Size: 0x1
    Params_ParryEvent params{};
    params.InButtonPressed = (EEnemy_ParryButtonPressed)InButtonPressed;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetJumpSpline(ANPC_Spline* InSplinePtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetJumpSpline"));
    struct Params_SetJumpSpline {
        ANPC_Spline* InSplinePtr; // 0x0
    }; // Size: 0x8
    Params_SetJumpSpline params{};
    params.InSplinePtr = (ANPC_Spline*)InSplinePtr;
    ProcessEvent(func, &params);
}
bool UNPC_Component::HasSightedTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.HasSightedTarget"));
    struct Params_HasSightedTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasSightedTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::OnReactionReceived(FQueueReactionParams& ReactionParams, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnReactionReceived"));
    struct Params_OnReactionReceived {
        FQueueReactionParams ReactionParams; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x78
    }; // Size: 0x80
    Params_OnReactionReceived params{};
    params.ReactionParams = (FQueueReactionParams)ReactionParams;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
    ReactionParams = params.ReactionParams;
}
void UNPC_Component::SetForcedPerceptionTarget(AActor* InTargetPtr, ENPC_TargetAwareState InTAS, float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetForcedPerceptionTarget"));
    struct Params_SetForcedPerceptionTarget {
        AActor* InTargetPtr; // 0x0
        ENPC_TargetAwareState InTAS; // 0x8
        char pad_9[0x3];
        float InTime; // 0xc
    }; // Size: 0x10
    Params_SetForcedPerceptionTarget params{};
    params.InTargetPtr = (AActor*)InTargetPtr;
    params.InTAS = (ENPC_TargetAwareState)InTAS;
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetFireExtinguished"));
    struct Params_SetFireExtinguished {
    }; // Size: 0x0
    Params_SetFireExtinguished params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetAnimSpawnState(ENPC_SpawnState InSpawnState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAnimSpawnState"));
    struct Params_SetAnimSpawnState {
        ENPC_SpawnState InSpawnState; // 0x0
    }; // Size: 0x1
    Params_SetAnimSpawnState params{};
    params.InSpawnState = (ENPC_SpawnState)InSpawnState;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetFinisherTagFilter(FGameplayTag InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetFinisherTagFilter"));
    struct Params_SetFinisherTagFilter {
        FGameplayTag InTag; // 0x0
    }; // Size: 0x8
    Params_SetFinisherTagFilter params{};
    params.InTag = (FGameplayTag)InTag;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetCustomPauseExitConditions(bool bCleanupWhenAlert, bool CleanupWhenAttack, AActor* TargetToAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetCustomPauseExitConditions"));
    struct Params_SetCustomPauseExitConditions {
        bool bCleanupWhenAlert; // 0x0
        bool CleanupWhenAttack; // 0x1
        char pad_2[0x6];
        AActor* TargetToAllow; // 0x8
    }; // Size: 0x10
    Params_SetCustomPauseExitConditions params{};
    params.bCleanupWhenAlert = (bool)bCleanupWhenAlert;
    params.CleanupWhenAttack = (bool)CleanupWhenAttack;
    params.TargetToAllow = (AActor*)TargetToAllow;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetCrouching() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetCrouching"));
    struct Params_SetCrouching {
    }; // Size: 0x0
    Params_SetCrouching params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::SetBlackboardKey(EEnemy_BBKey InKey, bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetBlackboardKey"));
    struct Params_SetBlackboardKey {
        EEnemy_BBKey InKey; // 0x0
        bool bSet; // 0x1
    }; // Size: 0x2
    Params_SetBlackboardKey params{};
    params.InKey = (EEnemy_BBKey)InKey;
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetAttackCustomFlag(bool FlagIsSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAttackCustomFlag"));
    struct Params_SetAttackCustomFlag {
        bool FlagIsSet; // 0x0
    }; // Size: 0x1
    Params_SetAttackCustomFlag params{};
    params.FlagIsSet = (bool)FlagIsSet;
    ProcessEvent(func, &params);
}
void UNPC_Component::ClearCrouchContextFlag(ENPC_CrouchContext CrouchContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ClearCrouchContextFlag"));
    struct Params_ClearCrouchContextFlag {
        ENPC_CrouchContext CrouchContext; // 0x0
    }; // Size: 0x1
    Params_ClearCrouchContextFlag params{};
    params.CrouchContext = (ENPC_CrouchContext)CrouchContext;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetAnimState(EEnemyAIAnimState InAnimState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAnimState"));
    struct Params_SetAnimState {
        EEnemyAIAnimState InAnimState; // 0x0
    }; // Size: 0x1
    Params_SetAnimState params{};
    params.InAnimState = (EEnemyAIAnimState)InAnimState;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetActionParams(FNPC_ActionParams InParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetActionParams"));
    struct Params_SetActionParams {
        FNPC_ActionParams InParams; // 0x0
    }; // Size: 0x38
    Params_SetActionParams params{};
    params.InParams = (FNPC_ActionParams)InParams;
    ProcessEvent(func, &params);
}
EEnemy_TargetType UNPC_Component::GetTargetType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetTargetType"));
    struct Params_GetTargetType {
        EEnemy_TargetType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTargetType params{};
    ProcessEvent(func, &params);
    return (EEnemy_TargetType)params.ReturnValue;
}
void UNPC_Component::SetAction(EEnemyAIAction InAction, bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAction"));
    struct Params_SetAction {
        EEnemyAIAction InAction; // 0x0
        bool bSet; // 0x1
    }; // Size: 0x2
    Params_SetAction params{};
    params.InAction = (EEnemyAIAction)InAction;
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
EEnemyAIAction UNPC_Component::GetChainedAction(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetChainedAction"));
    struct Params_GetChainedAction {
        EEnemyAIAction InAction; // 0x0
        EEnemyAIAction ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetChainedAction params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
    return (EEnemyAIAction)params.ReturnValue;
}
void UNPC_Component::SetAbilityScratchpadVelocity(FVector InVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAbilityScratchpadVelocity"));
    struct Params_SetAbilityScratchpadVelocity {
        FVector InVelocity; // 0x0
    }; // Size: 0xc
    Params_SetAbilityScratchpadVelocity params{};
    params.InVelocity = (FVector)InVelocity;
    ProcessEvent(func, &params);
}
void UNPC_Component::SetAbilityActive(EEnemy_Ability InState, bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.SetAbilityActive"));
    struct Params_SetAbilityActive {
        EEnemy_Ability InState; // 0x0
        bool bActive; // 0x1
    }; // Size: 0x2
    Params_SetAbilityActive params{};
    params.InState = (EEnemy_Ability)InState;
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
bool UNPC_Component::InitMoveToFleePos(FVector InPos, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InitMoveToFleePos"));
    struct Params_InitMoveToFleePos {
        FVector InPos; // 0x0
        float Timeout; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_InitMoveToFleePos params{};
    params.InPos = (FVector)InPos;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::Kill() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.Kill"));
    struct Params_Kill {
    }; // Size: 0x0
    Params_Kill params{};
    ProcessEvent(func, &params);
}
bool UNPC_Component::PathExists(AAIController* AIOwner, FVector Target, EPathExistanceQueryType::Type PathQueryType, UClass* FilterClass, bool AllowPartialPaths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.PathExists"));
    struct Params_PathExists {
        AAIController* AIOwner; // 0x0
        FVector Target; // 0x8
        EPathExistanceQueryType::Type PathQueryType; // 0x14
        char pad_15[0x3];
        UClass* FilterClass; // 0x18
        bool AllowPartialPaths; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_PathExists params{};
    params.AIOwner = (AAIController*)AIOwner;
    params.Target = (FVector)Target;
    params.PathQueryType = (EPathExistanceQueryType::Type)PathQueryType;
    params.FilterClass = (UClass*)FilterClass;
    params.AllowPartialPaths = (bool)AllowPartialPaths;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::OnReactionEnd(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnReactionEnd"));
    struct Params_OnReactionEnd {
        UAblReactionData* ReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_OnReactionEnd params{};
    params.ReactionData = (UAblReactionData*)ReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
bool UNPC_Component::IsBlind() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsBlind"));
    struct Params_IsBlind {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBlind params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::OnReactionQueued(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnReactionQueued"));
    struct Params_OnReactionQueued {
        UAblReactionData* ReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_OnReactionQueued params{};
    params.ReactionData = (UAblReactionData*)ReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
void UNPC_Component::OnMovementModeChange(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnMovementModeChange"));
    struct Params_OnMovementModeChange {
        ACharacter* Character; // 0x0
        EMovementMode PrevMovementMode; // 0x8
        uint8_t PreviousCustomMode; // 0x9
    }; // Size: 0xa
    Params_OnMovementModeChange params{};
    params.Character = (ACharacter*)Character;
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    ProcessEvent(func, &params);
}
void UNPC_Component::OnLoadComplete(AActor* LoadedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnLoadComplete"));
    struct Params_OnLoadComplete {
        AActor* LoadedActor; // 0x0
    }; // Size: 0x8
    Params_OnLoadComplete params{};
    params.LoadedActor = (AActor*)LoadedActor;
    ProcessEvent(func, &params);
}
void UNPC_Component::OnExitAliveVolume(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnExitAliveVolume"));
    struct Params_OnExitAliveVolume {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_OnExitAliveVolume params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
FVector UNPC_Component::GetFleeTargetPos() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetFleeTargetPos"));
    struct Params_GetFleeTargetPos {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFleeTargetPos params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UNPC_Component::OnEnterKillVolume(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnEnterKillVolume"));
    struct Params_OnEnterKillVolume {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_OnEnterKillVolume params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
bool UNPC_Component::IsOnStairs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsOnStairs"));
    struct Params_IsOnStairs {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOnStairs params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::OnDestroyed(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.OnDestroyed"));
    struct Params_OnDestroyed {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnDestroyed params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UNPC_Component::NPCRemoveFromManager(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.NPCRemoveFromManager"));
    struct Params_NPCRemoveFromManager {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_NPCRemoveFromManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
bool UNPC_Component::IsActionActive(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsActionActive"));
    struct Params_IsActionActive {
        EEnemyAIAction InAction; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsActionActive params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::NPCAddToManager(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.NPCAddToManager"));
    struct Params_NPCAddToManager {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_NPCAddToManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
bool UNPC_Component::NeedsStayInVolumeConstrain(FVector& InLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.NeedsStayInVolumeConstrain"));
    struct Params_NeedsStayInVolumeConstrain {
        FVector InLoc; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_NeedsStayInVolumeConstrain params{};
    params.InLoc = (FVector)InLoc;
    ProcessEvent(func, &params);
    InLoc = params.InLoc;
    return (bool)params.ReturnValue;
}
void UNPC_Component::AbortAction(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.AbortAction"));
    struct Params_AbortAction {
        EEnemyAIAction InAction; // 0x0
    }; // Size: 0x1
    Params_AbortAction params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
}
bool UNPC_Component::MoveToOnFire(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.MoveToOnFire"));
    struct Params_MoveToOnFire {
        float DeltaTime; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_MoveToOnFire params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EPathFollowingRequestResult::Type UNPC_Component::MoveTo(FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.MoveTo"));
    struct Params_MoveTo {
        FVector Dest; // 0x0
        float AcceptanceRadius; // 0xc
        bool bStopOnOverlap; // 0x10
        bool bUsePathfinding; // 0x11
        bool bProjectDestinationToNavigation; // 0x12
        bool bCanStrafe; // 0x13
        char pad_14[0x4];
        UClass* FilterClass; // 0x18
        bool bAllowPartialPath; // 0x20
        EPathFollowingRequestResult::Type ReturnValue; // 0x21
    }; // Size: 0x22
    Params_MoveTo params{};
    params.Dest = (FVector)Dest;
    params.AcceptanceRadius = (float)AcceptanceRadius;
    params.bStopOnOverlap = (bool)bStopOnOverlap;
    params.bUsePathfinding = (bool)bUsePathfinding;
    params.bProjectDestinationToNavigation = (bool)bProjectDestinationToNavigation;
    params.bCanStrafe = (bool)bCanStrafe;
    params.FilterClass = (UClass*)FilterClass;
    params.bAllowPartialPath = (bool)bAllowPartialPath;
    ProcessEvent(func, &params);
    return (EPathFollowingRequestResult::Type)params.ReturnValue;
}
void UNPC_Component::K2_SetTargetableByPlayer(bool bTargetableByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.K2_SetTargetableByPlayer"));
    struct Params_K2_SetTargetableByPlayer {
        bool bTargetableByPlayer; // 0x0
    }; // Size: 0x1
    Params_K2_SetTargetableByPlayer params{};
    params.bTargetableByPlayer = (bool)bTargetableByPlayer;
    ProcessEvent(func, &params);
}
void UNPC_Component::JumpSplineStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.JumpSplineStart"));
    struct Params_JumpSplineStart {
    }; // Size: 0x0
    Params_JumpSplineStart params{};
    ProcessEvent(func, &params);
}
bool UNPC_Component::IsVulnerable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsVulnerable"));
    struct Params_IsVulnerable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVulnerable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsTargetSightedEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsTargetSightedEnabled"));
    struct Params_IsTargetSightedEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTargetSightedEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsSwimming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsSwimming"));
    struct Params_IsSwimming {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSwimming params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsSpawnFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsSpawnFinished"));
    struct Params_IsSpawnFinished {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpawnFinished params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsOnFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsOnFire"));
    struct Params_IsOnFire {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOnFire params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsReactionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsReactionActive"));
    struct Params_IsReactionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReactionActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsOnSlope() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsOnSlope"));
    struct Params_IsOnSlope {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOnSlope params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsNearDeathKneeling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsNearDeathKneeling"));
    struct Params_IsNearDeathKneeling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNearDeathKneeling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsMoveDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsMoveDone"));
    struct Params_IsMoveDone {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMoveDone params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsJumpSplineDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsJumpSplineDone"));
    struct Params_IsJumpSplineDone {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsJumpSplineDone params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsInvincible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsInvincible"));
    struct Params_IsInvincible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInvincible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsInStealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsInStealth"));
    struct Params_IsInStealth {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInStealth params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsInStation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsInStation"));
    struct Params_IsInStation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInStation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsInjured() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsInjured"));
    struct Params_IsInjured {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInjured params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsFlying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsFlying"));
    struct Params_IsFlying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFlying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsDead() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsDead"));
    struct Params_IsDead {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDead params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsCrouching() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsCrouching"));
    struct Params_IsCrouching {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCrouching params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsCompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsCompanion"));
    struct Params_IsCompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UNPC_Component::GetForcedPerceptionTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetForcedPerceptionTarget"));
    struct Params_GetForcedPerceptionTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetForcedPerceptionTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UNPC_Component::IsCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsCharred"));
    struct Params_IsCharred {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCharred params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsActionDone(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsActionDone"));
    struct Params_IsActionDone {
        EEnemyAIAction InAction; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsActionDone params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsAbilityVulnerable(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsAbilityVulnerable"));
    struct Params_IsAbilityVulnerable {
        EEnemy_Ability InAbility; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAbilityVulnerable params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsAbilitySupported(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsAbilitySupported"));
    struct Params_IsAbilitySupported {
        EEnemy_Ability InAbility; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAbilitySupported params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::IsAbilityActive(EEnemy_Ability InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.IsAbilityActive"));
    struct Params_IsAbilityActive {
        EEnemy_Ability InState; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAbilityActive params{};
    params.InState = (EEnemy_Ability)InState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGameplayTagContainer UNPC_Component::InsertIATagsToSpawnData(ENPC_Spawn InSpawnType, FGameplayTagContainer InTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InsertIATagsToSpawnData"));
    struct Params_InsertIATagsToSpawnData {
        ENPC_Spawn InSpawnType; // 0x0
        char pad_1[0x7];
        FGameplayTagContainer InTagContainer; // 0x8
        FGameplayTagContainer ReturnValue; // 0x28
    }; // Size: 0x48
    Params_InsertIATagsToSpawnData params{};
    params.InSpawnType = (ENPC_Spawn)InSpawnType;
    params.InTagContainer = (FGameplayTagContainer)InTagContainer;
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
void UNPC_Component::InitTreeWait(FGameplayTag& TreeTag, TArray<EEnemy_Ability>& InAbilityList, float Timeout, EEnemy_InitTreeTimeoutAction TimeoutAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InitTreeWait"));
    struct Params_InitTreeWait {
        FGameplayTag TreeTag; // 0x0
        TArray<EEnemy_Ability> InAbilityList; // 0x8
        float Timeout; // 0x18
        EEnemy_InitTreeTimeoutAction TimeoutAction; // 0x1c
    }; // Size: 0x1d
    Params_InitTreeWait params{};
    params.TreeTag = (FGameplayTag)TreeTag;
    params.InAbilityList = (TArray<EEnemy_Ability>)InAbilityList;
    params.Timeout = (float)Timeout;
    params.TimeoutAction = (EEnemy_InitTreeTimeoutAction)TimeoutAction;
    ProcessEvent(func, &params);
    TreeTag = params.TreeTag;
    InAbilityList = params.InAbilityList;
}
void UNPC_Component::InitTetheredLoc(float InTetherDist, FVector& InStartVec, bool bUseStartVec, float InMaxAngle, int32_t InDivisions, bool bInApplyTether, ENPC_Tether InTetherType, float randomDistFloor, float randomDistCeiling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InitTetheredLoc"));
    struct Params_InitTetheredLoc {
        float InTetherDist; // 0x0
        FVector InStartVec; // 0x4
        bool bUseStartVec; // 0x10
        char pad_11[0x3];
        float InMaxAngle; // 0x14
        int32_t InDivisions; // 0x18
        bool bInApplyTether; // 0x1c
        ENPC_Tether InTetherType; // 0x1d
        char pad_1e[0x2];
        float randomDistFloor; // 0x20
        float randomDistCeiling; // 0x24
    }; // Size: 0x28
    Params_InitTetheredLoc params{};
    params.InTetherDist = (float)InTetherDist;
    params.InStartVec = (FVector)InStartVec;
    params.bUseStartVec = (bool)bUseStartVec;
    params.InMaxAngle = (float)InMaxAngle;
    params.InDivisions = (int32_t)InDivisions;
    params.bInApplyTether = (bool)bInApplyTether;
    params.InTetherType = (ENPC_Tether)InTetherType;
    params.randomDistFloor = (float)randomDistFloor;
    params.randomDistCeiling = (float)randomDistCeiling;
    ProcessEvent(func, &params);
    InStartVec = params.InStartVec;
}
bool UNPC_Component::InitMoveToOnFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InitMoveToOnFire"));
    struct Params_InitMoveToOnFire {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InitMoveToOnFire params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::InitMoveToLocation(FVector DestinationLoc, float Timeout, ENPC_Mobility InMobility, bool bOverrideMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InitMoveToLocation"));
    struct Params_InitMoveToLocation {
        FVector DestinationLoc; // 0x0
        float Timeout; // 0xc
        ENPC_Mobility InMobility; // 0x10
        bool bOverrideMobility; // 0x11
        bool ReturnValue; // 0x12
    }; // Size: 0x13
    Params_InitMoveToLocation params{};
    params.DestinationLoc = (FVector)DestinationLoc;
    params.Timeout = (float)Timeout;
    params.InMobility = (ENPC_Mobility)InMobility;
    params.bOverrideMobility = (bool)bOverrideMobility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::InitMoveData(ENPC_MoveDataState InState, AActor* TargetPtr, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.InitMoveData"));
    struct Params_InitMoveData {
        ENPC_MoveDataState InState; // 0x0
        char pad_1[0x7];
        AActor* TargetPtr; // 0x8
        float Timeout; // 0x10
    }; // Size: 0x14
    Params_InitMoveData params{};
    params.InState = (ENPC_MoveDataState)InState;
    params.TargetPtr = (AActor*)TargetPtr;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
}
bool UNPC_Component::HasFinisherWithRunningRequirementsMet(AActor* Attacker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.HasFinisherWithRunningRequirementsMet"));
    struct Params_HasFinisherWithRunningRequirementsMet {
        AActor* Attacker; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasFinisherWithRunningRequirementsMet params{};
    params.Attacker = (AActor*)Attacker;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UNPC_Component::GetYaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetYaw"));
    struct Params_GetYaw {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetYaw params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UNPC_Component::GetWanderStartLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetWanderStartLocation"));
    struct Params_GetWanderStartLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetWanderStartLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UNPC_Component::GetTreeWaitResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetTreeWaitResult"));
    struct Params_GetTreeWaitResult {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTreeWaitResult params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UNPC_Component::GetTetheredLoc(float InDist, FVector& InStartVec, bool bUseStartVec, float InMaxAngle, int32_t InDivisions, bool bInApplyTether, ENPC_Tether InTetherType, float randomDistFloor, float randomDistCeiling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetTetheredLoc"));
    struct Params_GetTetheredLoc {
        float InDist; // 0x0
        FVector InStartVec; // 0x4
        bool bUseStartVec; // 0x10
        char pad_11[0x3];
        float InMaxAngle; // 0x14
        int32_t InDivisions; // 0x18
        bool bInApplyTether; // 0x1c
        ENPC_Tether InTetherType; // 0x1d
        char pad_1e[0x2];
        float randomDistFloor; // 0x20
        float randomDistCeiling; // 0x24
        FVector ReturnValue; // 0x28
    }; // Size: 0x34
    Params_GetTetheredLoc params{};
    params.InDist = (float)InDist;
    params.InStartVec = (FVector)InStartVec;
    params.bUseStartVec = (bool)bUseStartVec;
    params.InMaxAngle = (float)InMaxAngle;
    params.InDivisions = (int32_t)InDivisions;
    params.bInApplyTether = (bool)bInApplyTether;
    params.InTetherType = (ENPC_Tether)InTetherType;
    params.randomDistFloor = (float)randomDistFloor;
    params.randomDistCeiling = (float)randomDistCeiling;
    ProcessEvent(func, &params);
    InStartVec = params.InStartVec;
    return (FVector)params.ReturnValue;
}
float UNPC_Component::GetTargetLookatApha() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetTargetLookatApha"));
    struct Params_GetTargetLookatApha {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTargetLookatApha params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AActor* UNPC_Component::GetTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetTarget"));
    struct Params_GetTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UNPC_Component::GetMoveToLocationSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMoveToLocationSuccess"));
    struct Params_GetMoveToLocationSuccess {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoveToLocationSuccess params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UNPC_Component::GetSpeedScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetSpeedScale"));
    struct Params_GetSpeedScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpeedScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UNPC_Component::GetSpeedChooserScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetSpeedChooserScale"));
    struct Params_GetSpeedChooserScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpeedChooserScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ENPC_SidekickUpdateState UNPC_Component::GetSidekickUpdateState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetSidekickUpdateState"));
    struct Params_GetSidekickUpdateState {
        ENPC_SidekickUpdateState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSidekickUpdateState params{};
    ProcessEvent(func, &params);
    return (ENPC_SidekickUpdateState)params.ReturnValue;
}
float UNPC_Component::GetScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetScale"));
    struct Params_GetScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UClass* UNPC_Component::GetPlayerCriticalFinisherAbility(FGameplayTagContainer& MunitionsTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetPlayerCriticalFinisherAbility"));
    struct Params_GetPlayerCriticalFinisherAbility {
        FGameplayTagContainer MunitionsTags; // 0x0
        UClass* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_GetPlayerCriticalFinisherAbility params{};
    params.MunitionsTags = (FGameplayTagContainer)MunitionsTags;
    ProcessEvent(func, &params);
    MunitionsTags = params.MunitionsTags;
    return (UClass*)params.ReturnValue;
}
UClass* UNPC_Component::GetPlayerCriticalDamageAbility(FGameplayTagContainer& MunitionsTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetPlayerCriticalDamageAbility"));
    struct Params_GetPlayerCriticalDamageAbility {
        FGameplayTagContainer MunitionsTags; // 0x0
        UClass* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_GetPlayerCriticalDamageAbility params{};
    params.MunitionsTags = (FGameplayTagContainer)MunitionsTags;
    ProcessEvent(func, &params);
    MunitionsTags = params.MunitionsTags;
    return (UClass*)params.ReturnValue;
}
bool UNPC_Component::GetPerceptionSuspended() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetPerceptionSuspended"));
    struct Params_GetPerceptionSuspended {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPerceptionSuspended params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_Component::GetPerceptionEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetPerceptionEnabled"));
    struct Params_GetPerceptionEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPerceptionEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ENPC_SpawnState UNPC_Component::GetAnimSpawnState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAnimSpawnState"));
    struct Params_GetAnimSpawnState {
        ENPC_SpawnState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAnimSpawnState params{};
    ProcessEvent(func, &params);
    return (ENPC_SpawnState)params.ReturnValue;
}
ENPC_Mobility UNPC_Component::GetOverrideMobility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetOverrideMobility"));
    struct Params_GetOverrideMobility {
        ENPC_Mobility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetOverrideMobility params{};
    ProcessEvent(func, &params);
    return (ENPC_Mobility)params.ReturnValue;
}
UNPC_AnimInstance* UNPC_Component::GetNPCAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetNPCAnimInstance"));
    struct Params_GetNPCAnimInstance {
        UNPC_AnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNPCAnimInstance params{};
    ProcessEvent(func, &params);
    return (UNPC_AnimInstance*)params.ReturnValue;
}
FVector UNPC_Component::GetMyLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMyLoc"));
    struct Params_GetMyLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetMyLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UNPC_Component::GetMyGroundLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMyGroundLoc"));
    struct Params_GetMyGroundLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetMyGroundLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
EPathFollowingRequestResult::Type UNPC_Component::GetMoveToLocationResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMoveToLocationResult"));
    struct Params_GetMoveToLocationResult {
        EPathFollowingRequestResult::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoveToLocationResult params{};
    ProcessEvent(func, &params);
    return (EPathFollowingRequestResult::Type)params.ReturnValue;
}
float UNPC_Component::GetMoveTolerance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMoveTolerance"));
    struct Params_GetMoveTolerance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMoveTolerance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UNPC_Component::GetMoveToDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMoveToDone"));
    struct Params_GetMoveToDone {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoveToDone params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UNPC_Component::GetFleeDistLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetFleeDistLocation"));
    struct Params_GetFleeDistLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFleeDistLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UNPC_Component::GetMoveDataSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMoveDataSuccess"));
    struct Params_GetMoveDataSuccess {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoveDataSuccess params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ENPC_Mobility UNPC_Component::GetMobility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMobility"));
    struct Params_GetMobility {
        ENPC_Mobility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMobility params{};
    ProcessEvent(func, &params);
    return (ENPC_Mobility)params.ReturnValue;
}
USkeletalMeshComponent* UNPC_Component::GetMeshComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetMeshComponent"));
    struct Params_GetMeshComponent {
        USkeletalMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMeshComponent params{};
    ProcessEvent(func, &params);
    return (USkeletalMeshComponent*)params.ReturnValue;
}
ENPC_TargetAwareState UNPC_Component::GetKilledTAS() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetKilledTAS"));
    struct Params_GetKilledTAS {
        ENPC_TargetAwareState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetKilledTAS params{};
    ProcessEvent(func, &params);
    return (ENPC_TargetAwareState)params.ReturnValue;
}
float UNPC_Component::GetCapsuleRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetCapsuleRadius"));
    struct Params_GetCapsuleRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCapsuleRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UNPC_Component::GetCapsuleHalfHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetCapsuleHalfHeight"));
    struct Params_GetCapsuleHalfHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCapsuleHalfHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UNPC_Component::GetAUXRecoverLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAUXRecoverLoc"));
    struct Params_GetAUXRecoverLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAUXRecoverLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
EEnemyAIAnimState UNPC_Component::GetAnimState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAnimState"));
    struct Params_GetAnimState {
        EEnemyAIAnimState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAnimState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIAnimState)params.ReturnValue;
}
AActor* UNPC_Component::AttemptToFindUniqueOwnerForFollower(UClass* OwnerClass, ANPC_Character* InFollower, float FindDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.AttemptToFindUniqueOwnerForFollower"));
    struct Params_AttemptToFindUniqueOwnerForFollower {
        UClass* OwnerClass; // 0x0
        ANPC_Character* InFollower; // 0x8
        float FindDistance; // 0x10
        char pad_14[0x4];
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AttemptToFindUniqueOwnerForFollower params{};
    params.OwnerClass = (UClass*)OwnerClass;
    params.InFollower = (ANPC_Character*)InFollower;
    params.FindDistance = (float)FindDistance;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
EEnemy_AnimMainState UNPC_Component::GetAnimMainState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAnimMainState"));
    struct Params_GetAnimMainState {
        EEnemy_AnimMainState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAnimMainState params{};
    ProcessEvent(func, &params);
    return (EEnemy_AnimMainState)params.ReturnValue;
}
UAnimInstance* UNPC_Component::GetAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAnimInstance"));
    struct Params_GetAnimInstance {
        UAnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimInstance params{};
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
bool UNPC_Component::GetAction(EEnemyAIAction InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAction"));
    struct Params_GetAction {
        EEnemyAIAction InAction; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetAction params{};
    params.InAction = (EEnemyAIAction)InAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNPC_AbilityTaskScratchPad* UNPC_Component::GetAbilityScratchpad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.GetAbilityScratchpad"));
    struct Params_GetAbilityScratchpad {
        UNPC_AbilityTaskScratchPad* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAbilityScratchpad params{};
    ProcessEvent(func, &params);
    return (UNPC_AbilityTaskScratchPad*)params.ReturnValue;
}
void UNPC_Component::ForcePerceptionUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ForcePerceptionUpdate"));
    struct Params_ForcePerceptionUpdate {
    }; // Size: 0x0
    Params_ForcePerceptionUpdate params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::FinishReactionParrySuccessTimeDilation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.FinishReactionParrySuccessTimeDilation"));
    struct Params_FinishReactionParrySuccessTimeDilation {
    }; // Size: 0x0
    Params_FinishReactionParrySuccessTimeDilation params{};
    ProcessEvent(func, &params);
}
FVector UNPC_Component::FindValidLocation(FVector InPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.FindValidLocation"));
    struct Params_FindValidLocation {
        FVector InPos; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_FindValidLocation params{};
    params.InPos = (FVector)InPos;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UNPC_Component::ExecuteAbility(UClass* InAbilityPtr, ENPC_AbilityChannel InChannel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ExecuteAbility"));
    struct Params_ExecuteAbility {
        UClass* InAbilityPtr; // 0x0
        ENPC_AbilityChannel InChannel; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_ExecuteAbility params{};
    params.InAbilityPtr = (UClass*)InAbilityPtr;
    params.InChannel = (ENPC_AbilityChannel)InChannel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_Component::EnterTree(FGameplayTag& TreeTag, bool InAbortMove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.EnterTree"));
    struct Params_EnterTree {
        FGameplayTag TreeTag; // 0x0
        bool InAbortMove; // 0x8
    }; // Size: 0x9
    Params_EnterTree params{};
    params.TreeTag = (FGameplayTag)TreeTag;
    params.InAbortMove = (bool)InAbortMove;
    ProcessEvent(func, &params);
    TreeTag = params.TreeTag;
}
void UNPC_Component::EndCustomPause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.EndCustomPause"));
    struct Params_EndCustomPause {
    }; // Size: 0x0
    Params_EndCustomPause params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::EnablePerception(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.EnablePerception"));
    struct Params_EnablePerception {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnablePerception params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UNPC_Component::EnableAbilityChannel(ENPC_AbilityChannel InChannel, bool bInEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.EnableAbilityChannel"));
    struct Params_EnableAbilityChannel {
        ENPC_AbilityChannel InChannel; // 0x0
        bool bInEnable; // 0x1
    }; // Size: 0x2
    Params_EnableAbilityChannel params{};
    params.InChannel = (ENPC_AbilityChannel)InChannel;
    params.bInEnable = (bool)bInEnable;
    ProcessEvent(func, &params);
}
bool UNPC_Component::CriticalFinisherAllowTimeDilation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.CriticalFinisherAllowTimeDilation"));
    struct Params_CriticalFinisherAllowTimeDilation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CriticalFinisherAllowTimeDilation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FNPC_NavPath UNPC_Component::CreateNavPath(AAIController* InControllerPtr, FVector& InStartLoc, FVector& InEndLoc, float InToleranceRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.CreateNavPath"));
    struct Params_CreateNavPath {
        AAIController* InControllerPtr; // 0x0
        FVector InStartLoc; // 0x8
        FVector InEndLoc; // 0x14
        float InToleranceRadius; // 0x20
        char pad_24[0x4];
        FNPC_NavPath ReturnValue; // 0x28
    }; // Size: 0x48
    Params_CreateNavPath params{};
    params.InControllerPtr = (AAIController*)InControllerPtr;
    params.InStartLoc = (FVector)InStartLoc;
    params.InEndLoc = (FVector)InEndLoc;
    params.InToleranceRadius = (float)InToleranceRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InStartLoc = params.InStartLoc;
    InEndLoc = params.InEndLoc;
    return (FNPC_NavPath)params.ReturnValue;
}
void UNPC_Component::ClearStealthContext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ClearStealthContext"));
    struct Params_ClearStealthContext {
    }; // Size: 0x0
    Params_ClearStealthContext params{};
    ProcessEvent(func, &params);
}
void UNPC_Component::ChainAction(EEnemyAIAction ChainFromAction, EEnemyAIAction ChainToAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ChainAction"));
    struct Params_ChainAction {
        EEnemyAIAction ChainFromAction; // 0x0
        EEnemyAIAction ChainToAction; // 0x1
    }; // Size: 0x2
    Params_ChainAction params{};
    params.ChainFromAction = (EEnemyAIAction)ChainFromAction;
    params.ChainToAction = (EEnemyAIAction)ChainToAction;
    ProcessEvent(func, &params);
}
float UNPC_Component::CalcFleeMoveToLocationTime(FVector InDestination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.CalcFleeMoveToLocationTime"));
    struct Params_CalcFleeMoveToLocationTime {
        FVector InDestination; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_CalcFleeMoveToLocationTime params{};
    params.InDestination = (FVector)InDestination;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UNPC_Component::BroadcastNPC_AnimEvent(FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.BroadcastNPC_AnimEvent"));
    struct Params_BroadcastNPC_AnimEvent {
        FName InName; // 0x0
    }; // Size: 0x8
    Params_BroadcastNPC_AnimEvent params{};
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
}
AActor* UNPC_Component::AttemptToFindPackOwnerForFollower(ANPC_Character* InFollower, float FindDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.AttemptToFindPackOwnerForFollower"));
    struct Params_AttemptToFindPackOwnerForFollower {
        ANPC_Character* InFollower; // 0x0
        float FindDistance; // 0x8
        char pad_c[0x4];
        AActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AttemptToFindPackOwnerForFollower params{};
    params.InFollower = (ANPC_Character*)InFollower;
    params.FindDistance = (float)FindDistance;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UNPC_Component::ActionUpdate(EEnemyAIAction InAction, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Component.ActionUpdate"));
    struct Params_ActionUpdate {
        EEnemyAIAction InAction; // 0x0
        char pad_1[0x3];
        float DeltaTime; // 0x4
    }; // Size: 0x8
    Params_ActionUpdate params{};
    params.InAction = (EEnemyAIAction)InAction;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
