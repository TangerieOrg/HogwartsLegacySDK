#include "AActor.hpp"
#include "AEnemyAIWeapon.hpp"
#include "ANPC_Character.hpp"
#include "APathNode.hpp"
#include "ASpellCasterTool.hpp"
#include "ASpellTool.hpp"
#include "AttackCollisionType.hpp"
#include "EActor_LoadDBProcessingType.hpp"
#include "ECreatureStance.hpp"
#include "EEEnemyAISizeCategory.hpp"
#include "EEnemyAIAttackState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AbilityEvent.hpp"
#include "EEnemy_AttackLocSource.hpp"
#include "EEnemy_AttackResetSource.hpp"
#include "EEnemy_AttackSource.hpp"
#include "EEnemy_AttackUpdateState.hpp"
#include "EEnemy_AttackingState.hpp"
#include "EEnemy_ProtegoLevel.hpp"
#include "ENPC_HitDirection.hpp"
#include "ENPC_Mobility.hpp"
#include "ENPC_QBUpdate.hpp"
#include "ENPC_Spawn.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "FClimbSettings.hpp"
#include "FEnemyEvadeData.hpp"
#include "FEnemyGameEventData.hpp"
#include "FEnemyVulnerableData.hpp"
#include "FEnemy_AccuracyData.hpp"
#include "FEnemy_AlertData.hpp"
#include "FEnemy_ApparateData.hpp"
#include "FEnemy_ApparateToData.hpp"
#include "FEnemy_AttackLocUpdateData.hpp"
#include "FEnemy_EnergyData.hpp"
#include "FEnemy_IdleBreak.hpp"
#include "FEnemy_IdleData.hpp"
#include "FEnemy_MeleeAttackOverlapData.hpp"
#include "FEnemy_MoveStopData.hpp"
#include "FEnemy_NextDecisionWait.hpp"
#include "FEnemy_NextMoveWait.hpp"
#include "FEnemy_Shuffle.hpp"
#include "FEnemy_ShuffleData.hpp"
#include "FEnemy_Taunt.hpp"
#include "FEnemy_TurnInPlaceData.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FLadderSettings.hpp"
#include "FMaterialParameterSetter.hpp"
#include "FNPC_PerceptionInfo.hpp"
#include "FNPC_ShowUI.hpp"
#include "FRipApartFinisherData.hpp"
#include "FSlideSettings.hpp"
#include "FTransform.hpp"
#include "FVaultSettings.hpp"
#include "FVector.hpp"
#include "NPC_GameChangerState.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionData.hpp"
#include "UBehaviorTree.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UEnemyAIAttackData.hpp"
#include "UEnemyAIComponent.hpp"
#include "UEnemyAIPathCheckPropertyData.hpp"
#include "UEnemyAISpawnData.hpp"
#include "UEnemyCorruptionData.hpp"
#include "UEnemyHiddenTeleportAttackComponent.hpp"
#include "UEnemy_AnimInstance.hpp"
#include "UEnemy_AttackComponent.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
#include "UEnemy_TargetSenseAsset.hpp"
#include "UEnemy_WeaponComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "ULadderNavLinkComponent.hpp"
#include "UNPC_Component.hpp"
#include "USlideNavLinkComponent.hpp"
#include "USpellToolRecord.hpp"
UEnemyAIComponent* UEnemyAIComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIComponent");
    return (UEnemyAIComponent*)res;
}
bool UEnemyAIComponent::IsCharacterDisengaged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.IsCharacterDisengaged"));
    struct Params_IsCharacterDisengaged {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCharacterDisengaged params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::SetCantMoveDuringAttack(bool disableMove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetCantMoveDuringAttack"));
    struct Params_SetCantMoveDuringAttack {
        bool disableMove; // 0x0
    }; // Size: 0x1
    Params_SetCantMoveDuringAttack params{};
    params.disableMove = (bool)disableMove;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::HideProtegoSpell(bool bInHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HideProtegoSpell"));
    struct Params_HideProtegoSpell {
        bool bInHide; // 0x0
    }; // Size: 0x1
    Params_HideProtegoSpell params{};
    params.bInHide = (bool)bInHide;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::UpdateFacingToLoc(FVector Loc, UCurveFloat* CurvePtr, float InterpSpeed, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.UpdateFacingToLoc"));
    struct Params_UpdateFacingToLoc {
        FVector Loc; // 0x0
        char pad_c[0x4];
        UCurveFloat* CurvePtr; // 0x10
        float InterpSpeed; // 0x18
        float DeltaTime; // 0x1c
    }; // Size: 0x20
    Params_UpdateFacingToLoc params{};
    params.Loc = (FVector)Loc;
    params.CurvePtr = (UCurveFloat*)CurvePtr;
    params.InterpSpeed = (float)InterpSpeed;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::UpdateFollowSpline(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.UpdateFollowSpline"));
    struct Params_UpdateFollowSpline {
        float DeltaTime; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_UpdateFollowSpline params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::BroadcastOnAlertSenseChanged(float alertSense) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.BroadcastOnAlertSenseChanged"));
    struct Params_BroadcastOnAlertSenseChanged {
        float alertSense; // 0x0
    }; // Size: 0x4
    Params_BroadcastOnAlertSenseChanged params{};
    params.alertSense = (float)alertSense;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::WasAttackParried(AActor* InVictimPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.WasAttackParried"));
    struct Params_WasAttackParried {
        AActor* InVictimPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_WasAttackParried params{};
    params.InVictimPtr = (AActor*)InVictimPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::SetGameChangerState(NPC_GameChangerState InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetGameChangerState"));
    struct Params_SetGameChangerState {
        NPC_GameChangerState InState; // 0x0
    }; // Size: 0x1
    Params_SetGameChangerState params{};
    params.InState = (NPC_GameChangerState)InState;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetShieldSpellDeflectionIfEquipped(bool bShouldDeflect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetShieldSpellDeflectionIfEquipped"));
    struct Params_SetShieldSpellDeflectionIfEquipped {
        bool bShouldDeflect; // 0x0
    }; // Size: 0x1
    Params_SetShieldSpellDeflectionIfEquipped params{};
    params.bShouldDeflect = (bool)bShouldDeflect;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SplineSpawnDoneEvent(AActor* InApparateActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SplineSpawnDoneEvent"));
    struct Params_SplineSpawnDoneEvent {
        AActor* InApparateActor; // 0x0
    }; // Size: 0x8
    Params_SplineSpawnDoneEvent params{};
    params.InApparateActor = (AActor*)InApparateActor;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::WaitForAbility(EEnemy_Ability InWaitForState, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.WaitForAbility"));
    struct Params_WaitForAbility {
        EEnemy_Ability InWaitForState; // 0x0
        char pad_1[0x3];
        float DeltaTime; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_WaitForAbility params{};
    params.InWaitForState = (EEnemy_Ability)InWaitForState;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::InRangeToLoc(FVector TestLoc, FVector Loc, float MinRange, float MaxRange, float Tolerance, bool bAllowIfTooClose, float& OutDistFromRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.InRangeToLoc"));
    struct Params_InRangeToLoc {
        FVector TestLoc; // 0x0
        FVector Loc; // 0xc
        float MinRange; // 0x18
        float MaxRange; // 0x1c
        float Tolerance; // 0x20
        bool bAllowIfTooClose; // 0x24
        char pad_25[0x3];
        float OutDistFromRange; // 0x28
        bool ReturnValue; // 0x2c
    }; // Size: 0x2d
    Params_InRangeToLoc params{};
    params.TestLoc = (FVector)TestLoc;
    params.Loc = (FVector)Loc;
    params.MinRange = (float)MinRange;
    params.MaxRange = (float)MaxRange;
    params.Tolerance = (float)Tolerance;
    params.bAllowIfTooClose = (bool)bAllowIfTooClose;
    params.OutDistFromRange = (float)OutDistFromRange;
    ProcessEvent(func, &params);
    OutDistFromRange = params.OutDistFromRange;
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::WaitForCreatureStance(ECreatureStance InWaitForStance, bool bWaitForStationary, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.WaitForCreatureStance"));
    struct Params_WaitForCreatureStance {
        ECreatureStance InWaitForStance; // 0x0
        bool bWaitForStationary; // 0x1
        char pad_2[0x2];
        float DeltaTime; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_WaitForCreatureStance params{};
    params.InWaitForStance = (ECreatureStance)InWaitForStance;
    params.bWaitForStationary = (bool)bWaitForStationary;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::StopWandLinkCowerDelayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StopWandLinkCowerDelayed"));
    struct Params_StopWandLinkCowerDelayed {
    }; // Size: 0x0
    Params_StopWandLinkCowerDelayed params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::UpdateHealthRTPCCallback(AActor* InActor, float Delta, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.UpdateHealthRTPCCallback"));
    struct Params_UpdateHealthRTPCCallback {
        AActor* InActor; // 0x0
        float Delta; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_UpdateHealthRTPCCallback params{};
    params.InActor = (AActor*)InActor;
    params.Delta = (float)Delta;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::DisableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DisableProvidedWeaponCollision"));
    struct Params_DisableProvidedWeaponCollision {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_DisableProvidedWeaponCollision params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::UpdateAttackLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.UpdateAttackLocation"));
    struct Params_UpdateAttackLocation {
    }; // Size: 0x0
    Params_UpdateAttackLocation params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnAnimagusFormTransformed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnAnimagusFormTransformed"));
    struct Params_OnAnimagusFormTransformed {
    }; // Size: 0x0
    Params_OnAnimagusFormTransformed params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::UnhideActiveWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.UnhideActiveWeapon"));
    struct Params_UnhideActiveWeapon {
    }; // Size: 0x0
    Params_UnhideActiveWeapon params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::TeamChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.TeamChanged"));
    struct Params_TeamChanged {
    }; // Size: 0x0
    Params_TeamChanged params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::RespawnWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.RespawnWeapon"));
    struct Params_RespawnWeapon {
    }; // Size: 0x0
    Params_RespawnWeapon params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetCustomAttackData(UEnemyAIAttackData* InCustAttackPtr, AActor* InCustTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetCustomAttackData"));
    struct Params_SetCustomAttackData {
        UEnemyAIAttackData* InCustAttackPtr; // 0x0
        AActor* InCustTarget; // 0x8
    }; // Size: 0x10
    Params_SetCustomAttackData params{};
    params.InCustAttackPtr = (UEnemyAIAttackData*)InCustAttackPtr;
    params.InCustTarget = (AActor*)InCustTarget;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetPlayProtegoDeflection(bool bPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetPlayProtegoDeflection"));
    struct Params_SetPlayProtegoDeflection {
        bool bPlay; // 0x0
    }; // Size: 0x1
    Params_SetPlayProtegoDeflection params{};
    params.bPlay = (bool)bPlay;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::TrackMeleePoints(FVector& InMeleeLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.TrackMeleePoints"));
    struct Params_TrackMeleePoints {
        FVector InMeleeLoc; // 0x0
    }; // Size: 0xc
    Params_TrackMeleePoints params{};
    params.InMeleeLoc = (FVector)InMeleeLoc;
    ProcessEvent(func, &params);
    InMeleeLoc = params.InMeleeLoc;
}
void UEnemyAIComponent::ReactionStart(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ReactionStart"));
    struct Params_ReactionStart {
        UAblReactionData* ReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_ReactionStart params{};
    params.ReactionData = (UAblReactionData*)ReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ThrowWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ThrowWeapon"));
    struct Params_ThrowWeapon {
    }; // Size: 0x0
    Params_ThrowWeapon params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::RotateToLoc(FVector Loc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.RotateToLoc"));
    struct Params_RotateToLoc {
        FVector Loc; // 0x0
    }; // Size: 0xc
    Params_RotateToLoc params{};
    params.Loc = (FVector)Loc;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetDeadEvent(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetDeadEvent"));
    struct Params_SetDeadEvent {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_SetDeadEvent params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::StoreWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StoreWeapon"));
    struct Params_StoreWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StoreWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::SetPathMode(APathNode* pPathNode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetPathMode"));
    struct Params_SetPathMode {
        APathNode* pPathNode; // 0x0
    }; // Size: 0x8
    Params_SetPathMode params{};
    params.pPathNode = (APathNode*)pPathNode;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::StopProtegoSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StopProtegoSpell"));
    struct Params_StopProtegoSpell {
    }; // Size: 0x0
    Params_StopProtegoSpell params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetNoAttackSelectCooldown(bool bNo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetNoAttackSelectCooldown"));
    struct Params_SetNoAttackSelectCooldown {
        bool bNo; // 0x0
    }; // Size: 0x1
    Params_SetNoAttackSelectCooldown params{};
    params.bNo = (bool)bNo;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::StopGameChanger() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StopGameChanger"));
    struct Params_StopGameChanger {
    }; // Size: 0x0
    Params_StopGameChanger params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetToDie(AActor* InstigatorPtr, UInteractionArchitectAsset* InMunitionDataAssetPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetToDie"));
    struct Params_SetToDie {
        AActor* InstigatorPtr; // 0x0
        UInteractionArchitectAsset* InMunitionDataAssetPtr; // 0x8
    }; // Size: 0x10
    Params_SetToDie params{};
    params.InstigatorPtr = (AActor*)InstigatorPtr;
    params.InMunitionDataAssetPtr = (UInteractionArchitectAsset*)InMunitionDataAssetPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAttackExitAsSoonAsFired(bool bExit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAttackExitAsSoonAsFired"));
    struct Params_SetAttackExitAsSoonAsFired {
        bool bExit; // 0x0
    }; // Size: 0x1
    Params_SetAttackExitAsSoonAsFired params{};
    params.bExit = (bool)bExit;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::StopCastSpell(USpellToolRecord* SpellToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StopCastSpell"));
    struct Params_StopCastSpell {
        USpellToolRecord* SpellToolRecord; // 0x0
    }; // Size: 0x8
    Params_StopCastSpell params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ComboEnd(int32_t ComboCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ComboEnd"));
    struct Params_ComboEnd {
        int32_t ComboCount; // 0x0
    }; // Size: 0x4
    Params_ComboEnd params{};
    params.ComboCount = (int32_t)ComboCount;
    ProcessEvent(func, &params);
}
ASpellCasterTool* UEnemyAIComponent::GetSpellCaster() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetSpellCaster"));
    struct Params_GetSpellCaster {
        ASpellCasterTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellCaster params{};
    ProcessEvent(func, &params);
    return (ASpellCasterTool*)params.ReturnValue;
}
void UEnemyAIComponent::StartProtegoSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StartProtegoSpell"));
    struct Params_StartProtegoSpell {
    }; // Size: 0x0
    Params_StartProtegoSpell params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAttackLocation(FVector InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAttackLocation"));
    struct Params_SetAttackLocation {
        FVector InLocation; // 0x0
    }; // Size: 0xc
    Params_SetAttackLocation params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::StartGameChanger() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StartGameChanger"));
    struct Params_StartGameChanger {
    }; // Size: 0x0
    Params_StartGameChanger params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAttackMode(AActor* pTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAttackMode"));
    struct Params_SetAttackMode {
        AActor* pTarget; // 0x0
    }; // Size: 0x8
    Params_SetAttackMode params{};
    params.pTarget = (AActor*)pTarget;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::StartFollowSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StartFollowSpline"));
    struct Params_StartFollowSpline {
    }; // Size: 0x0
    Params_StartFollowSpline params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::StartAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StartAttack"));
    struct Params_StartAttack {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartAttack params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::SetShieldToAcquire(AEnemyAIWeapon* InShieldPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetShieldToAcquire"));
    struct Params_SetShieldToAcquire {
        AEnemyAIWeapon* InShieldPtr; // 0x0
    }; // Size: 0x8
    Params_SetShieldToAcquire params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAllowProtegoToInterruptAttack(bool bAllowProtegoInterrupt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAllowProtegoToInterruptAttack"));
    struct Params_SetAllowProtegoToInterruptAttack {
        bool bAllowProtegoInterrupt; // 0x0
    }; // Size: 0x1
    Params_SetAllowProtegoToInterruptAttack params{};
    params.bAllowProtegoInterrupt = (bool)bAllowProtegoInterrupt;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SpawnAnimagusForm() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SpawnAnimagusForm"));
    struct Params_SpawnAnimagusForm {
    }; // Size: 0x0
    Params_SpawnAnimagusForm params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::StartApparateInEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.StartApparateInEvent"));
    struct Params_StartApparateInEvent {
    }; // Size: 0x0
    Params_StartApparateInEvent params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SplineSpawnArrivedEvent(AActor* InApparateActor, FVector InLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SplineSpawnArrivedEvent"));
    struct Params_SplineSpawnArrivedEvent {
        AActor* InApparateActor; // 0x0
        FVector InLoc; // 0x8
    }; // Size: 0x14
    Params_SplineSpawnArrivedEvent params{};
    params.InApparateActor = (AActor*)InApparateActor;
    params.InLoc = (FVector)InLoc;
    ProcessEvent(func, &params);
}
AEnemyAIWeapon* UEnemyAIComponent::SpawnWeapon(UClass* SpawnWeaponClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SpawnWeapon"));
    struct Params_SpawnWeapon {
        UClass* SpawnWeaponClass; // 0x0
        AEnemyAIWeapon* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnWeapon params{};
    params.SpawnWeaponClass = (UClass*)SpawnWeaponClass;
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
void UEnemyAIComponent::SpawnLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SpawnLoot"));
    struct Params_SpawnLoot {
    }; // Size: 0x0
    Params_SpawnLoot params{};
    ProcessEvent(func, &params);
}
AActor* UEnemyAIComponent::SpawnChild_BP(FString ObjectToSpawn, ENPC_Spawn InSpawnType, FString TeamName, FTransform SpawnTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SpawnChild_BP"));
    struct Params_SpawnChild_BP {
        FString ObjectToSpawn; // 0x0
        ENPC_Spawn InSpawnType; // 0x10
        char pad_11[0x7];
        FString TeamName; // 0x18
        char pad_28[0x8];
        FTransform SpawnTransform; // 0x30
        AActor* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_SpawnChild_BP params{};
    params.ObjectToSpawn = (FString)ObjectToSpawn;
    params.InSpawnType = (ENPC_Spawn)InSpawnType;
    params.TeamName = (FString)TeamName;
    params.SpawnTransform = (FTransform)SpawnTransform;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UEnemyAIComponent::SetWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetWeapon"));
    struct Params_SetWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_SetWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::EnableWeaponCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnableWeaponCollision"));
    struct Params_EnableWeaponCollision {
    }; // Size: 0x0
    Params_EnableWeaponCollision params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceExecuteAttack(UEnemyAIAttackData* InAttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceExecuteAttack"));
    struct Params_ForceExecuteAttack {
        UEnemyAIAttackData* InAttackPtr; // 0x0
    }; // Size: 0x8
    Params_ForceExecuteAttack params{};
    params.InAttackPtr = (UEnemyAIAttackData*)InAttackPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetWanderMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetWanderMode"));
    struct Params_SetWanderMode {
    }; // Size: 0x0
    Params_SetWanderMode params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetUnblockableTags(FGameplayTagContainer& InOutTagContainer, UEnemyAIAttackData* attackDataPtr, bool bForceUnblockable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetUnblockableTags"));
    struct Params_SetUnblockableTags {
        FGameplayTagContainer InOutTagContainer; // 0x0
        UEnemyAIAttackData* attackDataPtr; // 0x20
        bool bForceUnblockable; // 0x28
    }; // Size: 0x29
    Params_SetUnblockableTags params{};
    params.InOutTagContainer = (FGameplayTagContainer)InOutTagContainer;
    params.attackDataPtr = (UEnemyAIAttackData*)attackDataPtr;
    params.bForceUnblockable = (bool)bForceUnblockable;
    ProcessEvent(func, &params);
    InOutTagContainer = params.InOutTagContainer;
}
void UEnemyAIComponent::SetNoAttackExecuteCooldown(bool bNo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetNoAttackExecuteCooldown"));
    struct Params_SetNoAttackExecuteCooldown {
        bool bNo; // 0x0
    }; // Size: 0x1
    Params_SetNoAttackExecuteCooldown params{};
    params.bNo = (bool)bNo;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetTASEnabled(bool inEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetTASEnabled"));
    struct Params_SetTASEnabled {
        bool inEnabled; // 0x0
    }; // Size: 0x1
    Params_SetTASEnabled params{};
    params.inEnabled = (bool)inEnabled;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetInAttackWindow(bool bin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetInAttackWindow"));
    struct Params_SetInAttackWindow {
        bool bin; // 0x0
    }; // Size: 0x1
    Params_SetInAttackWindow params{};
    params.bin = (bool)bin;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetGameChangerObjectName(FString inObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetGameChangerObjectName"));
    struct Params_SetGameChangerObjectName {
        FString inObjectName; // 0x0
    }; // Size: 0x10
    Params_SetGameChangerObjectName params{};
    params.inObjectName = (FString)inObjectName;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetStationaryMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetStationaryMode"));
    struct Params_SetStationaryMode {
    }; // Size: 0x0
    Params_SetStationaryMode params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceAttack(UEnemyAIAttackData* InAttackPtr, bool bBypassPerception) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceAttack"));
    struct Params_ForceAttack {
        UEnemyAIAttackData* InAttackPtr; // 0x0
        bool bBypassPerception; // 0x8
    }; // Size: 0x9
    Params_ForceAttack params{};
    params.InAttackPtr = (UEnemyAIAttackData*)InAttackPtr;
    params.bBypassPerception = (bool)bBypassPerception;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetSpellCaster(ASpellCasterTool* InSpellCaster) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetSpellCaster"));
    struct Params_SetSpellCaster {
        ASpellCasterTool* InSpellCaster; // 0x0
    }; // Size: 0x8
    Params_SetSpellCaster params{};
    params.InSpellCaster = (ASpellCasterTool*)InSpellCaster;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetCanAttack(bool canAttack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetCanAttack"));
    struct Params_SetCanAttack {
        bool canAttack; // 0x0
    }; // Size: 0x1
    Params_SetCanAttack params{};
    params.canAttack = (bool)canAttack;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetShowOnOffShieldEffects(bool bShowShieldEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetShowOnOffShieldEffects"));
    struct Params_SetShowOnOffShieldEffects {
        bool bShowShieldEffects; // 0x0
    }; // Size: 0x1
    Params_SetShowOnOffShieldEffects params{};
    params.bShowShieldEffects = (bool)bShowShieldEffects;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AllWeaponsLifetimeToZero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AllWeaponsLifetimeToZero"));
    struct Params_AllWeaponsLifetimeToZero {
    }; // Size: 0x0
    Params_AllWeaponsLifetimeToZero params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetShowShieldWhenHit(bool bShowWhenHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetShowShieldWhenHit"));
    struct Params_SetShowShieldWhenHit {
        bool bShowWhenHit; // 0x0
    }; // Size: 0x1
    Params_SetShowShieldWhenHit params{};
    params.bShowWhenHit = (bool)bShowWhenHit;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetShield(AEnemyAIWeapon* InShieldPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetShield"));
    struct Params_SetShield {
        AEnemyAIWeapon* InShieldPtr; // 0x0
    }; // Size: 0x8
    Params_SetShield params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetScaredMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetScaredMode"));
    struct Params_SetScaredMode {
    }; // Size: 0x0
    Params_SetScaredMode params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetResurrectedEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetResurrectedEvent"));
    struct Params_SetResurrectedEvent {
    }; // Size: 0x0
    Params_SetResurrectedEvent params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::GetCanAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetCanAttack"));
    struct Params_GetCanAttack {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCanAttack params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::SetParentToActors(TArray<AActor*>& InActorList, AActor* InParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetParentToActors"));
    struct Params_SetParentToActors {
        TArray<AActor*> InActorList; // 0x0
        AActor* InParent; // 0x10
    }; // Size: 0x18
    Params_SetParentToActors params{};
    params.InActorList = (TArray<AActor*>)InActorList;
    params.InParent = (AActor*)InParent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InActorList = params.InActorList;
}
void UEnemyAIComponent::SetNewAlertUIData(FNPC_ShowUI NewShowUI) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetNewAlertUIData"));
    struct Params_SetNewAlertUIData {
        FNPC_ShowUI NewShowUI; // 0x0
    }; // Size: 0xc
    Params_SetNewAlertUIData params{};
    params.NewShowUI = (FNPC_ShowUI)NewShowUI;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetIgnoreAttackCorridors(bool bIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetIgnoreAttackCorridors"));
    struct Params_SetIgnoreAttackCorridors {
        bool bIgnore; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreAttackCorridors params{};
    params.bIgnore = (bool)bIgnore;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAttackWithoutRestrictions(bool bInWithoutRestrictions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAttackWithoutRestrictions"));
    struct Params_SetAttackWithoutRestrictions {
        bool bInWithoutRestrictions; // 0x0
    }; // Size: 0x1
    Params_SetAttackWithoutRestrictions params{};
    params.bInWithoutRestrictions = (bool)bInWithoutRestrictions;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetGameChangerForm(ANPC_Character* inGameChangerForm) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetGameChangerForm"));
    struct Params_SetGameChangerForm {
        ANPC_Character* inGameChangerForm; // 0x0
    }; // Size: 0x8
    Params_SetGameChangerForm params{};
    params.inGameChangerForm = (ANPC_Character*)inGameChangerForm;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAttackingState(EEnemy_AttackingState InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAttackingState"));
    struct Params_SetAttackingState {
        EEnemy_AttackingState InState; // 0x0
    }; // Size: 0x1
    Params_SetAttackingState params{};
    params.InState = (EEnemy_AttackingState)InState;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetForceIntoAttackTAS(bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetForceIntoAttackTAS"));
    struct Params_SetForceIntoAttackTAS {
        bool bForce; // 0x0
    }; // Size: 0x1
    Params_SetForceIntoAttackTAS params{};
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetDestroyed"));
    struct Params_SetDestroyed {
    }; // Size: 0x0
    Params_SetDestroyed params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetDeadMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetDeadMode"));
    struct Params_SetDeadMode {
    }; // Size: 0x0
    Params_SetDeadMode params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetDamagedEvent(float InAmount, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetDamagedEvent"));
    struct Params_SetDamagedEvent {
        float InAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
    }; // Size: 0x10
    Params_SetDamagedEvent params{};
    params.InAmount = (float)InAmount;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAttackCollisionType(AttackCollisionType InCollisionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAttackCollisionType"));
    struct Params_SetAttackCollisionType {
        AttackCollisionType InCollisionType; // 0x0
    }; // Size: 0x1
    Params_SetAttackCollisionType params{};
    params.InCollisionType = (AttackCollisionType)InCollisionType;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAnimagusWolfPerceivedTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAnimagusWolfPerceivedTarget"));
    struct Params_SetAnimagusWolfPerceivedTarget {
    }; // Size: 0x0
    Params_SetAnimagusWolfPerceivedTarget params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAlwaysMyTurn(bool bInAlwaysMyTurn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAlwaysMyTurn"));
    struct Params_SetAlwaysMyTurn {
        bool bInAlwaysMyTurn; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysMyTurn params{};
    params.bInAlwaysMyTurn = (bool)bInAlwaysMyTurn;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::GetUnblockable(AActor* InVictimPtr, bool bForceUnblockable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetUnblockable"));
    struct Params_GetUnblockable {
        AActor* InVictimPtr; // 0x0
        bool bForceUnblockable; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_GetUnblockable params{};
    params.InVictimPtr = (AActor*)InVictimPtr;
    params.bForceUnblockable = (bool)bForceUnblockable;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::SetAlwaysInRange(bool bAlways) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAlwaysInRange"));
    struct Params_SetAlwaysInRange {
        bool bAlways; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysInRange params{};
    params.bAlways = (bool)bAlways;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAlwaysAccurate(bool bAlways) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAlwaysAccurate"));
    struct Params_SetAlwaysAccurate {
        bool bAlways; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysAccurate params{};
    params.bAlways = (bool)bAlways;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::SetAlertMode(AActor* pTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SetAlertMode"));
    struct Params_SetAlertMode {
        AActor* pTarget; // 0x0
    }; // Size: 0x8
    Params_SetAlertMode params{};
    params.pTarget = (AActor*)pTarget;
    ProcessEvent(func, &params);
}
float UEnemyAIComponent::SendMunitionImpact(FHitResult& HitResult, AActor* pVictim, AActor* pOriginator, UInteractionArchitectAsset* pMunitionDataAsset, FName InMunitionImpactType, FGameplayTagContainer& InMunitionTagContainer, bool bForceUnblockable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.SendMunitionImpact"));
    struct Params_SendMunitionImpact {
        FHitResult HitResult; // 0x0
        AActor* pVictim; // 0x88
        AActor* pOriginator; // 0x90
        UInteractionArchitectAsset* pMunitionDataAsset; // 0x98
        FName InMunitionImpactType; // 0xa0
        FGameplayTagContainer InMunitionTagContainer; // 0xa8
        bool bForceUnblockable; // 0xc8
        char pad_c9[0x3];
        float ReturnValue; // 0xcc
    }; // Size: 0xd0
    Params_SendMunitionImpact params{};
    params.HitResult = (FHitResult)HitResult;
    params.pVictim = (AActor*)pVictim;
    params.pOriginator = (AActor*)pOriginator;
    params.pMunitionDataAsset = (UInteractionArchitectAsset*)pMunitionDataAsset;
    params.InMunitionImpactType = (FName)InMunitionImpactType;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.bForceUnblockable = (bool)bForceUnblockable;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    InMunitionTagContainer = params.InMunitionTagContainer;
    return (float)params.ReturnValue;
}
void UEnemyAIComponent::RotateToAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.RotateToAttack"));
    struct Params_RotateToAttack {
    }; // Size: 0x0
    Params_RotateToAttack params{};
    ProcessEvent(func, &params);
}
EEnemyAIAttackState UEnemyAIComponent::GetAttackStateRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackStateRange"));
    struct Params_GetAttackStateRange {
        EEnemyAIAttackState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAttackStateRange params{};
    ProcessEvent(func, &params);
    return (EEnemyAIAttackState)params.ReturnValue;
}
void UEnemyAIComponent::ResetDisengagedState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ResetDisengagedState"));
    struct Params_ResetDisengagedState {
    }; // Size: 0x0
    Params_ResetDisengagedState params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ResetAttack(EEnemy_AttackResetSource InResetSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ResetAttack"));
    struct Params_ResetAttack {
        EEnemy_AttackResetSource InResetSource; // 0x0
    }; // Size: 0x1
    Params_ResetAttack params{};
    params.InResetSource = (EEnemy_AttackResetSource)InResetSource;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::HandleOnActorHit(AActor* pOtherActor, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HandleOnActorHit"));
    struct Params_HandleOnActorHit {
        AActor* pOtherActor; // 0x0
        FHitResult HitResult; // 0x8
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_HandleOnActorHit params{};
    params.pOtherActor = (AActor*)pOtherActor;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::ReleaseWeapon(AEnemyAIWeapon* InWeaponPtr, bool bForceDestroy, bool bSetDropVel, bool bIsThrown, bool bForceDrop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ReleaseWeapon"));
    struct Params_ReleaseWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool bForceDestroy; // 0x8
        bool bSetDropVel; // 0x9
        bool bIsThrown; // 0xa
        bool bForceDrop; // 0xb
    }; // Size: 0xc
    Params_ReleaseWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    params.bForceDestroy = (bool)bForceDestroy;
    params.bSetDropVel = (bool)bSetDropVel;
    params.bIsThrown = (bool)bIsThrown;
    params.bForceDrop = (bool)bForceDrop;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::ChooseAttackUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ChooseAttackUpdate"));
    struct Params_ChooseAttackUpdate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ChooseAttackUpdate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::ReleaseSpellCaster(ASpellCasterTool* InSpellCasterPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ReleaseSpellCaster"));
    struct Params_ReleaseSpellCaster {
        ASpellCasterTool* InSpellCasterPtr; // 0x0
    }; // Size: 0x8
    Params_ReleaseSpellCaster params{};
    params.InSpellCasterPtr = (ASpellCasterTool*)InSpellCasterPtr;
    ProcessEvent(func, &params);
}
EEEnemyAISizeCategory UEnemyAIComponent::GetSizeCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetSizeCategory"));
    struct Params_GetSizeCategory {
        EEEnemyAISizeCategory ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSizeCategory params{};
    ProcessEvent(func, &params);
    return (EEEnemyAISizeCategory)params.ReturnValue;
}
void UEnemyAIComponent::ReleaseShield(AEnemyAIWeapon* InShieldPtr, bool bSetDropVel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ReleaseShield"));
    struct Params_ReleaseShield {
        AEnemyAIWeapon* InShieldPtr; // 0x0
        bool bSetDropVel; // 0x8
    }; // Size: 0x9
    Params_ReleaseShield params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    params.bSetDropVel = (bool)bSetDropVel;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::PublishAttackStateToBlackboard() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.PublishAttackStateToBlackboard"));
    struct Params_PublishAttackStateToBlackboard {
    }; // Size: 0x0
    Params_PublishAttackStateToBlackboard params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::PreparePotentialSpawnLocations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.PreparePotentialSpawnLocations"));
    struct Params_PreparePotentialSpawnLocations {
    }; // Size: 0x0
    Params_PreparePotentialSpawnLocations params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::PreloadAnimagusForm() {}
bool UEnemyAIComponent::PreAttack(EEnemy_AttackSource InSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.PreAttack"));
    struct Params_PreAttack {
        EEnemy_AttackSource InSource; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_PreAttack params{};
    params.InSource = (EEnemy_AttackSource)InSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::PathNodeArrival() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.PathNodeArrival"));
    struct Params_PathNodeArrival {
    }; // Size: 0x0
    Params_PathNodeArrival params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::OverlapMeleeCapsule(AActor* InVictim, FHitResult InHitResult, ENPC_HitDirection InForceDirection, FEnemy_MeleeAttackOverlapData& OutOverlapData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OverlapMeleeCapsule"));
    struct Params_OverlapMeleeCapsule {
        AActor* InVictim; // 0x0
        FHitResult InHitResult; // 0x8
        ENPC_HitDirection InForceDirection; // 0x90
        char pad_91[0x7];
        FEnemy_MeleeAttackOverlapData OutOverlapData; // 0x98
        bool ReturnValue; // 0x140
    }; // Size: 0x141
    Params_OverlapMeleeCapsule params{};
    params.InVictim = (AActor*)InVictim;
    params.InHitResult = (FHitResult)InHitResult;
    params.InForceDirection = (ENPC_HitDirection)InForceDirection;
    params.OutOverlapData = (FEnemy_MeleeAttackOverlapData)OutOverlapData;
    ProcessEvent(func, &params);
    OutOverlapData = params.OutOverlapData;
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::BroadcastOnDeath(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.BroadcastOnDeath"));
    struct Params_BroadcastOnDeath {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BroadcastOnDeath params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnReplicatedFormDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnReplicatedFormDeath"));
    struct Params_OnReplicatedFormDeath {
    }; // Size: 0x0
    Params_OnReplicatedFormDeath params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnObjectLoaded(FString ObjectToLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnObjectLoaded"));
    struct Params_OnObjectLoaded {
        FString ObjectToLoad; // 0x0
    }; // Size: 0x10
    Params_OnObjectLoaded params{};
    params.ObjectToLoad = (FString)ObjectToLoad;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnJumpSplineDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnJumpSplineDone"));
    struct Params_OnJumpSplineDone {
    }; // Size: 0x0
    Params_OnJumpSplineDone params{};
    ProcessEvent(func, &params);
}
FEnemy_AlertData UEnemyAIComponent::GetAlert() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAlert"));
    struct Params_GetAlert {
        FEnemy_AlertData ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAlert params{};
    ProcessEvent(func, &params);
    return (FEnemy_AlertData)params.ReturnValue;
}
void UEnemyAIComponent::OnAttackDBLoaded(AActor* LoadActor, EActor_LoadDBProcessingType LoadType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnAttackDBLoaded"));
    struct Params_OnAttackDBLoaded {
        AActor* LoadActor; // 0x0
        EActor_LoadDBProcessingType LoadType; // 0x8
    }; // Size: 0x9
    Params_OnAttackDBLoaded params{};
    params.LoadActor = (AActor*)LoadActor;
    params.LoadType = (EActor_LoadDBProcessingType)LoadType;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::InitMoveToAttackLocation(FVector DestinationLoc, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.InitMoveToAttackLocation"));
    struct Params_InitMoveToAttackLocation {
        FVector DestinationLoc; // 0x0
        float Timeout; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_InitMoveToAttackLocation params{};
    params.DestinationLoc = (FVector)DestinationLoc;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::OnAnimagusFormTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnAnimagusFormTimeout"));
    struct Params_OnAnimagusFormTimeout {
    }; // Size: 0x0
    Params_OnAnimagusFormTimeout params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnAnimagusFormDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnAnimagusFormDeath"));
    struct Params_OnAnimagusFormDeath {
    }; // Size: 0x0
    Params_OnAnimagusFormDeath params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnAnimagusFormAvadaKedavra() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnAnimagusFormAvadaKedavra"));
    struct Params_OnAnimagusFormAvadaKedavra {
    }; // Size: 0x0
    Params_OnAnimagusFormAvadaKedavra params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnActorHit"));
    struct Params_OnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void UEnemyAIComponent::OnActorDamaged(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.OnActorDamaged"));
    struct Params_OnActorDamaged {
        AActor* InActor; // 0x0
        AActor* InInstigator; // 0x8
        float InDamage; // 0x10
        FHitResult InHit; // 0x14
    }; // Size: 0x9c
    Params_OnActorDamaged params{};
    params.InActor = (AActor*)InActor;
    params.InInstigator = (AActor*)InInstigator;
    params.InDamage = (float)InDamage;
    params.InHit = (FHitResult)InHit;
    ProcessEvent(func, &params);
    InHit = params.InHit;
}
AEnemyAIWeapon* UEnemyAIComponent::GetWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetWeapon"));
    struct Params_GetWeapon {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWeapon params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
bool UEnemyAIComponent::MoveToAttackRunTo(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.MoveToAttackRunTo"));
    struct Params_MoveToAttackRunTo {
        float DeltaTime; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_MoveToAttackRunTo params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::MoveToAttackLocation(FVector DestinationLoc, UCurveFloat* CurveFloatPtr, float InterpSpeed, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.MoveToAttackLocation"));
    struct Params_MoveToAttackLocation {
        FVector DestinationLoc; // 0x0
        char pad_c[0x4];
        UCurveFloat* CurveFloatPtr; // 0x10
        float InterpSpeed; // 0x18
        float DeltaTime; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_MoveToAttackLocation params{};
    params.DestinationLoc = (FVector)DestinationLoc;
    params.CurveFloatPtr = (UCurveFloat*)CurveFloatPtr;
    params.InterpSpeed = (float)InterpSpeed;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::LogBehaviorTree(FName TaskName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.LogBehaviorTree"));
    struct Params_LogBehaviorTree {
        FName TaskName; // 0x0
    }; // Size: 0x8
    Params_LogBehaviorTree params{};
    params.TaskName = (FName)TaskName;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::IsUsingNavLink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.IsUsingNavLink"));
    struct Params_IsUsingNavLink {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingNavLink params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::IsRequiredWeaponStored(UEnemyAIAttackData* AttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.IsRequiredWeaponStored"));
    struct Params_IsRequiredWeaponStored {
        UEnemyAIAttackData* AttackPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRequiredWeaponStored params{};
    params.AttackPtr = (UEnemyAIAttackData*)AttackPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::IsFacingToLoc(FVector Loc, float MinAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.IsFacingToLoc"));
    struct Params_IsFacingToLoc {
        FVector Loc; // 0x0
        float MinAngle; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsFacingToLoc params{};
    params.Loc = (FVector)Loc;
    params.MinAngle = (float)MinAngle;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::IsAttacking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.IsAttacking"));
    struct Params_IsAttacking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAttacking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::InitWaitForCreatureStance(ECreatureStance InWaitForStance, bool bWaitForStationary, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.InitWaitForCreatureStance"));
    struct Params_InitWaitForCreatureStance {
        ECreatureStance InWaitForStance; // 0x0
        bool bWaitForStationary; // 0x1
        char pad_2[0x2];
        float Timeout; // 0x4
    }; // Size: 0x8
    Params_InitWaitForCreatureStance params{};
    params.InWaitForStance = (ECreatureStance)InWaitForStance;
    params.bWaitForStationary = (bool)bWaitForStationary;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::InitWaitForAbility(float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.InitWaitForAbility"));
    struct Params_InitWaitForAbility {
        float Timeout; // 0x0
    }; // Size: 0x4
    Params_InitWaitForAbility params{};
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::InitMoveToAttackRunTo(float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.InitMoveToAttackRunTo"));
    struct Params_InitMoveToAttackRunTo {
        float Timeout; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_InitMoveToAttackRunTo params{};
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::InitFollowSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.InitFollowSpline"));
    struct Params_InitFollowSpline {
    }; // Size: 0x0
    Params_InitFollowSpline params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::HideActiveWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HideActiveWeapon"));
    struct Params_HideActiveWeapon {
    }; // Size: 0x0
    Params_HideActiveWeapon params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::HasWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HasWeapon"));
    struct Params_HasWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::HasStoredWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HasStoredWeapon"));
    struct Params_HasStoredWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasStoredWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::HandleSpellSuccess(AActor* Target, ASpellTool* Spell, FName SpellType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HandleSpellSuccess"));
    struct Params_HandleSpellSuccess {
        AActor* Target; // 0x0
        ASpellTool* Spell; // 0x8
        FName SpellType; // 0x10
    }; // Size: 0x18
    Params_HandleSpellSuccess params{};
    params.Target = (AActor*)Target;
    params.Spell = (ASpellTool*)Spell;
    params.SpellType = (FName)SpellType;
    ProcessEvent(func, &params);
}
float UEnemyAIComponent::GetCriticalHealthPercept() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetCriticalHealthPercept"));
    struct Params_GetCriticalHealthPercept {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCriticalHealthPercept params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UEnemyAIComponent::HandleOnActorEndHit(AActor* pOtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HandleOnActorEndHit"));
    struct Params_HandleOnActorEndHit {
        AActor* pOtherActor; // 0x0
    }; // Size: 0x8
    Params_HandleOnActorEndHit params{};
    params.pOtherActor = (AActor*)pOtherActor;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::CastProtegoSpell(USpellToolRecord* SpellToolRecord, FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CastProtegoSpell"));
    struct Params_CastProtegoSpell {
        USpellToolRecord* SpellToolRecord; // 0x0
        FName InSocketName; // 0x8
    }; // Size: 0x10
    Params_CastProtegoSpell params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::HandleAbilityAnimEvent(EEnemy_AbilityEvent inAnimEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HandleAbilityAnimEvent"));
    struct Params_HandleAbilityAnimEvent {
        EEnemy_AbilityEvent inAnimEvent; // 0x0
    }; // Size: 0x1
    Params_HandleAbilityAnimEvent params{};
    params.inAnimEvent = (EEnemy_AbilityEvent)inAnimEvent;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::HandleAttackDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HandleAttackDone"));
    struct Params_HandleAttackDone {
    }; // Size: 0x0
    Params_HandleAttackDone params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::HandleAbilityActorHit(AActor* InOtherActor, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.HandleAbilityActorHit"));
    struct Params_HandleAbilityActorHit {
        AActor* InOtherActor; // 0x0
        FHitResult HitResult; // 0x8
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_HandleAbilityActorHit params{};
    params.InOtherActor = (AActor*)InOtherActor;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
AEnemyAIWeapon* UEnemyAIComponent::GetWeaponToAcquire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetWeaponToAcquire"));
    struct Params_GetWeaponToAcquire {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWeaponToAcquire params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
void UEnemyAIComponent::EndAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EndAttack"));
    struct Params_EndAttack {
    }; // Size: 0x0
    Params_EndAttack params{};
    ProcessEvent(func, &params);
}
float UEnemyAIComponent::GetWeaponRequiredPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetWeaponRequiredPercent"));
    struct Params_GetWeaponRequiredPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetWeaponRequiredPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AEnemyAIWeapon* UEnemyAIComponent::GetTransientWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetTransientWeapon"));
    struct Params_GetTransientWeapon {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTransientWeapon params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
void UEnemyAIComponent::ApplyDesynchronization() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ApplyDesynchronization"));
    struct Params_ApplyDesynchronization {
    }; // Size: 0x0
    Params_ApplyDesynchronization params{};
    ProcessEvent(func, &params);
}
FVector UEnemyAIComponent::GetSpawnLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetSpawnLoc"));
    struct Params_GetSpawnLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSpawnLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UEnemyAISpawnData* UEnemyAIComponent::GetSpawnData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetSpawnData"));
    struct Params_GetSpawnData {
        UEnemyAISpawnData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpawnData params{};
    ProcessEvent(func, &params);
    return (UEnemyAISpawnData*)params.ReturnValue;
}
void UEnemyAIComponent::BroadcastAlertState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.BroadcastAlertState"));
    struct Params_BroadcastAlertState {
    }; // Size: 0x0
    Params_BroadcastAlertState params{};
    ProcessEvent(func, &params);
}
FString UEnemyAIComponent::GetSizeCategoryString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetSizeCategoryString"));
    struct Params_GetSizeCategoryString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSizeCategoryString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UEnemy_QBUpdateData* UEnemyAIComponent::GetQBUpdateData(EEnemy_AttackLocSource InSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetQBUpdateData"));
    struct Params_GetQBUpdateData {
        EEnemy_AttackLocSource InSource; // 0x0
        char pad_1[0x7];
        UEnemy_QBUpdateData* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetQBUpdateData params{};
    params.InSource = (EEnemy_AttackLocSource)InSource;
    ProcessEvent(func, &params);
    return (UEnemy_QBUpdateData*)params.ReturnValue;
}
EEnemy_ProtegoLevel UEnemyAIComponent::GetProtegoSpellLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetProtegoSpellLevel"));
    struct Params_GetProtegoSpellLevel {
        EEnemy_ProtegoLevel ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetProtegoSpellLevel params{};
    ProcessEvent(func, &params);
    return (EEnemy_ProtegoLevel)params.ReturnValue;
}
APathNode* UEnemyAIComponent::GetPathNode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetPathNode"));
    struct Params_GetPathNode {
        APathNode* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPathNode params{};
    ProcessEvent(func, &params);
    return (APathNode*)params.ReturnValue;
}
void UEnemyAIComponent::ApparateArrivedEvent(AActor* InApparateActor, FVector InLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ApparateArrivedEvent"));
    struct Params_ApparateArrivedEvent {
        AActor* InApparateActor; // 0x0
        FVector InLoc; // 0x8
    }; // Size: 0x14
    Params_ApparateArrivedEvent params{};
    params.InApparateActor = (AActor*)InApparateActor;
    params.InLoc = (FVector)InLoc;
    ProcessEvent(func, &params);
}
UEnemy_InstanceQBUpdateData* UEnemyAIComponent::GetOrCreateQBUpdateInstanceData(ENPC_QBUpdate InUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetOrCreateQBUpdateInstanceData"));
    struct Params_GetOrCreateQBUpdateInstanceData {
        ENPC_QBUpdate InUpdate; // 0x0
        char pad_1[0x7];
        UEnemy_InstanceQBUpdateData* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetOrCreateQBUpdateInstanceData params{};
    params.InUpdate = (ENPC_QBUpdate)InUpdate;
    ProcessEvent(func, &params);
    return (UEnemy_InstanceQBUpdateData*)params.ReturnValue;
}
FNPC_PerceptionInfo UEnemyAIComponent::GetNPCPerceptionInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetNPCPerceptionInfo"));
    struct Params_GetNPCPerceptionInfo {
        FNPC_PerceptionInfo ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetNPCPerceptionInfo params{};
    ProcessEvent(func, &params);
    return (FNPC_PerceptionInfo)params.ReturnValue;
}
bool UEnemyAIComponent::GetMoveToAttackRunToSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetMoveToAttackRunToSuccess"));
    struct Params_GetMoveToAttackRunToSuccess {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoveToAttackRunToSuccess params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UEnemyAIComponent::GetLastKnownTargetLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetLastKnownTargetLoc"));
    struct Params_GetLastKnownTargetLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastKnownTargetLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UEnemyAIComponent::FireWeaponAOE1(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.FireWeaponAOE1"));
    struct Params_FireWeaponAOE1 {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_FireWeaponAOE1 params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::GetIsStealthAttackCurrentlyDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetIsStealthAttackCurrentlyDisabled"));
    struct Params_GetIsStealthAttackCurrentlyDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsStealthAttackCurrentlyDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UEnemyAIComponent::GetDamage(AActor* InVictimPtr, AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetDamage"));
    struct Params_GetDamage {
        AActor* InVictimPtr; // 0x0
        AEnemyAIWeapon* InWeaponPtr; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetDamage params{};
    params.InVictimPtr = (AActor*)InVictimPtr;
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UEnemyAIComponent::GetInAttackWindow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetInAttackWindow"));
    struct Params_GetInAttackWindow {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInAttackWindow params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::ActivateRequiredWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ActivateRequiredWeapon"));
    struct Params_ActivateRequiredWeapon {
    }; // Size: 0x0
    Params_ActivateRequiredWeapon params{};
    ProcessEvent(func, &params);
}
NPC_GameChangerState UEnemyAIComponent::GetGameChangerState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetGameChangerState"));
    struct Params_GetGameChangerState {
        NPC_GameChangerState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGameChangerState params{};
    ProcessEvent(func, &params);
    return (NPC_GameChangerState)params.ReturnValue;
}
FString UEnemyAIComponent::GetGameChangerObjectName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetGameChangerObjectName"));
    struct Params_GetGameChangerObjectName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetGameChangerObjectName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
ANPC_Character* UEnemyAIComponent::GetGameChangerForm() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetGameChangerForm"));
    struct Params_GetGameChangerForm {
        ANPC_Character* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameChangerForm params{};
    ProcessEvent(func, &params);
    return (ANPC_Character*)params.ReturnValue;
}
FGameplayTagContainer UEnemyAIComponent::GetEnemyWeaponTagContainer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetEnemyWeaponTagContainer"));
    struct Params_GetEnemyWeaponTagContainer {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetEnemyWeaponTagContainer params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
UInteractionArchitectAsset* UEnemyAIComponent::GetEnemyWeaponDataAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetEnemyWeaponDataAsset"));
    struct Params_GetEnemyWeaponDataAsset {
        UInteractionArchitectAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEnemyWeaponDataAsset params{};
    ProcessEvent(func, &params);
    return (UInteractionArchitectAsset*)params.ReturnValue;
}
UEnemy_AnimInstance* UEnemyAIComponent::GetEnemyAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetEnemyAnimInstance"));
    struct Params_GetEnemyAnimInstance {
        UEnemy_AnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEnemyAnimInstance params{};
    ProcessEvent(func, &params);
    return (UEnemy_AnimInstance*)params.ReturnValue;
}
bool UEnemyAIComponent::GetAttackWaitingForDesynchronization() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackWaitingForDesynchronization"));
    struct Params_GetAttackWaitingForDesynchronization {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAttackWaitingForDesynchronization params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIComponent::GetAttackUpdateStateSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackUpdateStateSuccess"));
    struct Params_GetAttackUpdateStateSuccess {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAttackUpdateStateSuccess params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EEnemy_AttackUpdateState UEnemyAIComponent::GetAttackUpdateState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackUpdateState"));
    struct Params_GetAttackUpdateState {
        EEnemy_AttackUpdateState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAttackUpdateState params{};
    ProcessEvent(func, &params);
    return (EEnemy_AttackUpdateState)params.ReturnValue;
}
EEnemyAIAttackState UEnemyAIComponent::GetAttackState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackState"));
    struct Params_GetAttackState {
        EEnemyAIAttackState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAttackState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIAttackState)params.ReturnValue;
}
FVector UEnemyAIComponent::GetAttackLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackLocation"));
    struct Params_GetAttackLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAttackLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
AttackCollisionType UEnemyAIComponent::GetAttackCollisionType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAttackCollisionType"));
    struct Params_GetAttackCollisionType {
        AttackCollisionType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAttackCollisionType params{};
    ProcessEvent(func, &params);
    return (AttackCollisionType)params.ReturnValue;
}
float UEnemyAIComponent::GetAlertSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetAlertSense"));
    struct Params_GetAlertSense {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAlertSense params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UEnemyAIComponent::EnableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnableShieldCollision"));
    struct Params_EnableShieldCollision {
    }; // Size: 0x0
    Params_EnableShieldCollision params{};
    ProcessEvent(func, &params);
}
AEnemyAIWeapon* UEnemyAIComponent::GetActiveSpawnMeteorData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.GetActiveSpawnMeteorData"));
    struct Params_GetActiveSpawnMeteorData {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveSpawnMeteorData params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
void UEnemyAIComponent::DisableWeaponCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DisableWeaponCollision"));
    struct Params_DisableWeaponCollision {
    }; // Size: 0x0
    Params_DisableWeaponCollision params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceQBDataForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceQBDataForceUpdate"));
    struct Params_ForceQBDataForceUpdate {
    }; // Size: 0x0
    Params_ForceQBDataForceUpdate params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::EnableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnableProvidedWeaponCollision"));
    struct Params_EnableProvidedWeaponCollision {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_EnableProvidedWeaponCollision params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceNextAttack(UEnemyAIAttackData* InAttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceNextAttack"));
    struct Params_ForceNextAttack {
        UEnemyAIAttackData* InAttackPtr; // 0x0
    }; // Size: 0x8
    Params_ForceNextAttack params{};
    params.InAttackPtr = (UEnemyAIAttackData*)InAttackPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceExecuteDelayedAttack(UEnemyAIAttackData* InAttackPtr, float InDelay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceExecuteDelayedAttack"));
    struct Params_ForceExecuteDelayedAttack {
        UEnemyAIAttackData* InAttackPtr; // 0x0
        float InDelay; // 0x8
    }; // Size: 0xc
    Params_ForceExecuteDelayedAttack params{};
    params.InAttackPtr = (UEnemyAIAttackData*)InAttackPtr;
    params.InDelay = (float)InDelay;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceDisengagedState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceDisengagedState"));
    struct Params_ForceDisengagedState {
    }; // Size: 0x0
    Params_ForceDisengagedState params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AllowHideBlindWeapon(bool bInAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AllowHideBlindWeapon"));
    struct Params_AllowHideBlindWeapon {
        bool bInAllow; // 0x0
    }; // Size: 0x1
    Params_AllowHideBlindWeapon params{};
    params.bInAllow = (bool)bInAllow;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceChooseAttack(UEnemyAIAttackData* InAttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceChooseAttack"));
    struct Params_ForceChooseAttack {
        UEnemyAIAttackData* InAttackPtr; // 0x0
    }; // Size: 0x8
    Params_ForceChooseAttack params{};
    params.InAttackPtr = (UEnemyAIAttackData*)InAttackPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ForceAttackState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ForceAttackState"));
    struct Params_ForceAttackState {
    }; // Size: 0x0
    Params_ForceAttackState params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::FindAvailableStoredWeaponSocket(AEnemyAIWeapon* InWeaponPtr, FName& OutSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.FindAvailableStoredWeaponSocket"));
    struct Params_FindAvailableStoredWeaponSocket {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        FName OutSocketName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_FindAvailableStoredWeaponSocket params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    params.OutSocketName = (FName)OutSocketName;
    ProcessEvent(func, &params);
    OutSocketName = params.OutSocketName;
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::EnemyRemoveFromManager(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnemyRemoveFromManager"));
    struct Params_EnemyRemoveFromManager {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_EnemyRemoveFromManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::ChooseCounterAttackSplit(FGameplayTagContainer& InTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ChooseCounterAttackSplit"));
    struct Params_ChooseCounterAttackSplit {
        FGameplayTagContainer InTagContainer; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ChooseCounterAttackSplit params{};
    params.InTagContainer = (FGameplayTagContainer)InTagContainer;
    ProcessEvent(func, &params);
    InTagContainer = params.InTagContainer;
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::EnemyAddToManager(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnemyAddToManager"));
    struct Params_EnemyAddToManager {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_EnemyAddToManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::EnableTrackMeleePoints(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnableTrackMeleePoints"));
    struct Params_EnableTrackMeleePoints {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnableTrackMeleePoints params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::EnableImmediateAttack(bool ShouldEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.EnableImmediateAttack"));
    struct Params_EnableImmediateAttack {
        bool ShouldEnable; // 0x0
    }; // Size: 0x1
    Params_EnableImmediateAttack params{};
    params.ShouldEnable = (bool)ShouldEnable;
    ProcessEvent(func, &params);
}
AActor* UEnemyAIComponent::DisarmWeapon(float ScaleForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DisarmWeapon"));
    struct Params_DisarmWeapon {
        float ScaleForce; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DisarmWeapon params{};
    params.ScaleForce = (float)ScaleForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* UEnemyAIComponent::DisarmShield(float ScaleForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DisarmShield"));
    struct Params_DisarmShield {
        float ScaleForce; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DisarmShield params{};
    params.ScaleForce = (float)ScaleForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UEnemyAIComponent::DisableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DisableShieldCollision"));
    struct Params_DisableShieldCollision {
    }; // Size: 0x0
    Params_DisableShieldCollision params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::DestroySpawnedChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DestroySpawnedChildren"));
    struct Params_DestroySpawnedChildren {
    }; // Size: 0x0
    Params_DestroySpawnedChildren params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::DestroyAnimagusForm() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.DestroyAnimagusForm"));
    struct Params_DestroyAnimagusForm {
    }; // Size: 0x0
    Params_DestroyAnimagusForm params{};
    ProcessEvent(func, &params);
}
UEnemyAIAttackData* UEnemyAIComponent::ChooseAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ChooseAttack"));
    struct Params_ChooseAttack {
        UEnemyAIAttackData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ChooseAttack params{};
    ProcessEvent(func, &params);
    return (UEnemyAIAttackData*)params.ReturnValue;
}
void UEnemyAIComponent::CastSpellAtRandom(USpellToolRecord* SpellToolRecord, FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CastSpellAtRandom"));
    struct Params_CastSpellAtRandom {
        USpellToolRecord* SpellToolRecord; // 0x0
        FName InSocketName; // 0x8
    }; // Size: 0x10
    Params_CastSpellAtRandom params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::CastSpellAtLocation(FVector& TargetLocation, USpellToolRecord* SpellToolRecord, FName& InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CastSpellAtLocation"));
    struct Params_CastSpellAtLocation {
        FVector TargetLocation; // 0x0
        char pad_c[0x4];
        USpellToolRecord* SpellToolRecord; // 0x10
        FName InSocketName; // 0x18
    }; // Size: 0x20
    Params_CastSpellAtLocation params{};
    params.TargetLocation = (FVector)TargetLocation;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    TargetLocation = params.TargetLocation;
    InSocketName = params.InSocketName;
}
void UEnemyAIComponent::CastSpellAtActor(AActor* InTargetPtr, USpellToolRecord* SpellToolRecord, FName InSocketName, bool bAlwaysHitTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CastSpellAtActor"));
    struct Params_CastSpellAtActor {
        AActor* InTargetPtr; // 0x0
        USpellToolRecord* SpellToolRecord; // 0x8
        FName InSocketName; // 0x10
        bool bAlwaysHitTargetActor; // 0x18
    }; // Size: 0x19
    Params_CastSpellAtActor params{};
    params.InTargetPtr = (AActor*)InTargetPtr;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.InSocketName = (FName)InSocketName;
    params.bAlwaysHitTargetActor = (bool)bAlwaysHitTargetActor;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::CanAnyStoredWeaponBeThrown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CanAnyStoredWeaponBeThrown"));
    struct Params_CanAnyStoredWeaponBeThrown {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanAnyStoredWeaponBeThrown params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::CastSpell(USpellToolRecord* SpellToolRecord, FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CastSpell"));
    struct Params_CastSpell {
        USpellToolRecord* SpellToolRecord; // 0x0
        FName InSocketName; // 0x8
    }; // Size: 0x10
    Params_CastSpell params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::CanStoreWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.CanStoreWeapon"));
    struct Params_CanStoreWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanStoreWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::BroadcastAlertSense() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.BroadcastAlertSense"));
    struct Params_BroadcastAlertSense {
    }; // Size: 0x0
    Params_BroadcastAlertSense params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::AttackUpdateStateUpdate(EEnemy_AttackUpdateState AttackUpdateState, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AttackUpdateStateUpdate"));
    struct Params_AttackUpdateStateUpdate {
        EEnemy_AttackUpdateState AttackUpdateState; // 0x0
        char pad_1[0x3];
        float DeltaTime; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AttackUpdateStateUpdate params{};
    params.AttackUpdateState = (EEnemy_AttackUpdateState)AttackUpdateState;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::AttackTreeUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AttackTreeUpdate"));
    struct Params_AttackTreeUpdate {
    }; // Size: 0x0
    Params_AttackTreeUpdate params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AttackExecuteBTInject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AttackExecuteBTInject"));
    struct Params_AttackExecuteBTInject {
    }; // Size: 0x0
    Params_AttackExecuteBTInject params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AttackedEvent(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AttackedEvent"));
    struct Params_AttackedEvent {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_AttackedEvent params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AttackChooseBTInject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AttackChooseBTInject"));
    struct Params_AttackChooseBTInject {
    }; // Size: 0x0
    Params_AttackChooseBTInject params{};
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::ApparateDoneEvent(AActor* InApparateActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.ApparateDoneEvent"));
    struct Params_ApparateDoneEvent {
        AActor* InApparateActor; // 0x0
    }; // Size: 0x8
    Params_ApparateDoneEvent params{};
    params.InApparateActor = (AActor*)InApparateActor;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AllowSingleAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AllowSingleAttack"));
    struct Params_AllowSingleAttack {
    }; // Size: 0x0
    Params_AllowSingleAttack params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIComponent::AdvancePath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AdvancePath"));
    struct Params_AdvancePath {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AdvancePath params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIComponent::AdjustAttackWeightsByID(FString InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AdjustAttackWeightsByID"));
    struct Params_AdjustAttackWeightsByID {
        FString InRegistryID; // 0x0
    }; // Size: 0x10
    Params_AdjustAttackWeightsByID params{};
    params.InRegistryID = (FString)InRegistryID;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AddQBUpdateData(EEnemy_AttackLocSource InSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AddQBUpdateData"));
    struct Params_AddQBUpdateData {
        EEnemy_AttackLocSource InSource; // 0x0
    }; // Size: 0x1
    Params_AddQBUpdateData params{};
    params.InSource = (EEnemy_AttackLocSource)InSource;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AcquireWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AcquireWeapon"));
    struct Params_AcquireWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_AcquireWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AcquireSpellCaster(ASpellCasterTool* InSpellCasterPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AcquireSpellCaster"));
    struct Params_AcquireSpellCaster {
        ASpellCasterTool* InSpellCasterPtr; // 0x0
    }; // Size: 0x8
    Params_AcquireSpellCaster params{};
    params.InSpellCasterPtr = (ASpellCasterTool*)InSpellCasterPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AcquireShield(AEnemyAIWeapon* InShieldPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AcquireShield"));
    struct Params_AcquireShield {
        AEnemyAIWeapon* InShieldPtr; // 0x0
    }; // Size: 0x8
    Params_AcquireShield params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AbortAUS(bool bBranchToIdle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AbortAUS"));
    struct Params_AbortAUS {
        bool bBranchToIdle; // 0x0
    }; // Size: 0x1
    Params_AbortAUS params{};
    params.bBranchToIdle = (bool)bBranchToIdle;
    ProcessEvent(func, &params);
}
void UEnemyAIComponent::AbortAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIComponent.AbortAttack"));
    struct Params_AbortAttack {
    }; // Size: 0x0
    Params_AbortAttack params{};
    ProcessEvent(func, &params);
}
