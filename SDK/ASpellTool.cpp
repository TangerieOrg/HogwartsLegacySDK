#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AMunitionType_Base.hpp"
#include "ASpellTool.hpp"
#include "ATool.hpp"
#include "AWandTool.hpp"
#include "EAttackState\Type.hpp"
#include "EGameEventLocation.hpp"
#include "EGameEvent_Intensity.hpp"
#include "EImpactTypes.hpp"
#include "ELeftArmState\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "ESpellCategory.hpp"
#include "ESpellUpgrades.hpp"
#include "FAbilityFunction.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FImpactLevelData.hpp"
#include "FMunitionImpactData.hpp"
#include "FVector.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionData.hpp"
#include "UActorComponent.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "ULEDFadeEffect.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiFX2_Base.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UTriggerEffect.hpp"
void ASpellTool::OnMunitionFired(AActor* Target, FVector TargetLocation, AMunitionType_Base* BaseMunition, FGameplayTagContainer& InMunitionTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnMunitionFired"));
    struct Params_OnMunitionFired {
        AActor* Target; // 0x0
        FVector TargetLocation; // 0x8
        char pad_14[0x4];
        AMunitionType_Base* BaseMunition; // 0x18
        FGameplayTagContainer InMunitionTagContainer; // 0x20
    }; // Size: 0x40
    Params_OnMunitionFired params{};
    params.Target = (AActor*)Target;
    params.TargetLocation = (FVector)TargetLocation;
    params.BaseMunition = (AMunitionType_Base*)BaseMunition;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    ProcessEvent(func, &params);
    InMunitionTagContainer = params.InMunitionTagContainer;
}
ASpellTool* ASpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellTool");
    return (ASpellTool*)res;
}
void ASpellTool::StopActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.StopActive"));
    struct Params_StopActive {
    }; // Size: 0x0
    Params_StopActive params{};
    ProcessEvent(func, &params);
}
void ASpellTool::OnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnStart"));
    struct Params_OnStart {
    }; // Size: 0x0
    Params_OnStart params{};
    ProcessEvent(func, &params);
}
void ASpellTool::TriggerReleased(bool bForce, bool bFromStop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.TriggerReleased"));
    struct Params_TriggerReleased {
        bool bForce; // 0x0
        bool bFromStop; // 0x1
    }; // Size: 0x2
    Params_TriggerReleased params{};
    params.bForce = (bool)bForce;
    params.bFromStop = (bool)bFromStop;
    ProcessEvent(func, &params);
}
void ASpellTool::StartChannelingAction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.StartChannelingAction"));
    struct Params_StartChannelingAction {
    }; // Size: 0x0
    Params_StartChannelingAction params{};
    ProcessEvent(func, &params);
}
void ASpellTool::StartCooldown(AActor* TargetedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.StartCooldown"));
    struct Params_StartCooldown {
        AActor* TargetedActor; // 0x0
    }; // Size: 0x8
    Params_StartCooldown params{};
    params.TargetedActor = (AActor*)TargetedActor;
    ProcessEvent(func, &params);
}
bool ASpellTool::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.Start"));
    struct Params_Start {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Start params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector ASpellTool::GetMuzzleLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetMuzzleLocation"));
    struct Params_GetMuzzleLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetMuzzleLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ASpellTool::SpellFlourish() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.SpellFlourish"));
    struct Params_SpellFlourish {
    }; // Size: 0x0
    Params_SpellFlourish params{};
    ProcessEvent(func, &params);
}
bool ASpellTool::IsStopped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.IsStopped"));
    struct Params_IsStopped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStopped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpellTool::Prep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.Prep"));
    struct Params_Prep {
    }; // Size: 0x0
    Params_Prep params{};
    ProcessEvent(func, &params);
}
void ASpellTool::SetIgnoreActors(TArray<AActor*> i_Ignores) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.SetIgnoreActors"));
    struct Params_SetIgnoreActors {
        TArray<AActor*> i_Ignores; // 0x0
    }; // Size: 0x10
    Params_SetIgnoreActors params{};
    params.i_Ignores = (TArray<AActor*>)i_Ignores;
    ProcessEvent(func, &params);
}
void ASpellTool::SetDestinationActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.SetDestinationActor"));
    struct Params_SetDestinationActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_SetDestinationActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
USpellToolRecord* ASpellTool::GetSpellToolRecord() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetSpellToolRecord"));
    struct Params_GetSpellToolRecord {
        USpellToolRecord* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellToolRecord params{};
    ProcessEvent(func, &params);
    return (USpellToolRecord*)params.ReturnValue;
}
void ASpellTool::SetAffectImmuneToSpells(bool bAffectImmune) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.SetAffectImmuneToSpells"));
    struct Params_SetAffectImmuneToSpells {
        bool bAffectImmune; // 0x0
    }; // Size: 0x1
    Params_SetAffectImmuneToSpells params{};
    params.bAffectImmune = (bool)bAffectImmune;
    ProcessEvent(func, &params);
}
EImpactTypes ASpellTool::GetImpactType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetImpactType"));
    struct Params_GetImpactType {
        EImpactTypes ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetImpactType params{};
    ProcessEvent(func, &params);
    return (EImpactTypes)params.ReturnValue;
}
UClass* ASpellTool::GetMunitionActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetMunitionActor"));
    struct Params_GetMunitionActor {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMunitionActor params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
void ASpellTool::ReassignBeamTarget(AActor* CurrentActor, USceneComponent* NewComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.ReassignBeamTarget"));
    struct Params_ReassignBeamTarget {
        AActor* CurrentActor; // 0x0
        USceneComponent* NewComponent; // 0x8
    }; // Size: 0x10
    Params_ReassignBeamTarget params{};
    params.CurrentActor = (AActor*)CurrentActor;
    params.NewComponent = (USceneComponent*)NewComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellTool::OnFizzle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnFizzle"));
    struct Params_OnFizzle {
    }; // Size: 0x0
    Params_OnFizzle params{};
    ProcessEvent(func, &params);
}
void ASpellTool::OnStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnStop"));
    struct Params_OnStop {
    }; // Size: 0x0
    Params_OnStop params{};
    ProcessEvent(func, &params);
}
void ASpellTool::ReactionStart(UAblReactionData* InReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.ReactionStart"));
    struct Params_ReactionStart {
        UAblReactionData* InReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_ReactionStart params{};
    params.InReactionData = (UAblReactionData*)InReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
float ASpellTool::GetMaxRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetMaxRange"));
    struct Params_GetMaxRange {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxRange params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ASpellTool::OnCanAffectTarget(AActor* Target, bool bInCanAffectTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnCanAffectTarget"));
    struct Params_OnCanAffectTarget {
        AActor* Target; // 0x0
        bool bInCanAffectTarget; // 0x8
    }; // Size: 0x9
    Params_OnCanAffectTarget params{};
    params.Target = (AActor*)Target;
    params.bInCanAffectTarget = (bool)bInCanAffectTarget;
    ProcessEvent(func, &params);
}
void ASpellTool::ReactionEnd(UAblReactionData* InReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.ReactionEnd"));
    struct Params_ReactionEnd {
        UAblReactionData* InReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_ReactionEnd params{};
    params.InReactionData = (UAblReactionData*)InReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
void ASpellTool::PreSpawnMunition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.PreSpawnMunition"));
    struct Params_PreSpawnMunition {
    }; // Size: 0x0
    Params_PreSpawnMunition params{};
    ProcessEvent(func, &params);
}
FName ASpellTool::GetSpellType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetSpellType"));
    struct Params_GetSpellType {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellType params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ASpellTool::OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnAffectTarget"));
    struct Params_OnAffectTarget {
        AActor* Target; // 0x0
        USceneComponent* Component; // 0x8
        bool bInTargetAffected; // 0x10
    }; // Size: 0x11
    Params_OnAffectTarget params{};
    params.Target = (AActor*)Target;
    params.Component = (USceneComponent*)Component;
    params.bInTargetAffected = (bool)bInTargetAffected;
    ProcessEvent(func, &params);
}
void ASpellTool::PlayHitActorFX(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.PlayHitActorFX"));
    struct Params_PlayHitActorFX {
        FHitResult HitResult; // 0x0
    }; // Size: 0x88
    Params_PlayHitActorFX params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void ASpellTool::OwnerHasStartedCasting(FName WandCastName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OwnerHasStartedCasting"));
    struct Params_OwnerHasStartedCasting {
        FName WandCastName; // 0x0
    }; // Size: 0x8
    Params_OwnerHasStartedCasting params{};
    params.WandCastName = (FName)WandCastName;
    ProcessEvent(func, &params);
}
void ASpellTool::OnProtegoBlocked(AMunitionType_Base* InMunitionInstance, AActor* Target, FHitResult& Hit, FVector ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnProtegoBlocked"));
    struct Params_OnProtegoBlocked {
        AMunitionType_Base* InMunitionInstance; // 0x0
        AActor* Target; // 0x8
        FHitResult Hit; // 0x10
        FVector ImpactDirection; // 0x98
    }; // Size: 0xa4
    Params_OnProtegoBlocked params{};
    params.InMunitionInstance = (AMunitionType_Base*)InMunitionInstance;
    params.Target = (AActor*)Target;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ASpellTool::Abort() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.Abort"));
    struct Params_Abort {
    }; // Size: 0x0
    Params_Abort params{};
    ProcessEvent(func, &params);
}
void ASpellTool::OnPrep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnPrep"));
    struct Params_OnPrep {
    }; // Size: 0x0
    Params_OnPrep params{};
    ProcessEvent(func, &params);
}
void ASpellTool::ForceStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.ForceStop"));
    struct Params_ForceStop {
    }; // Size: 0x0
    Params_ForceStop params{};
    ProcessEvent(func, &params);
}
void ASpellTool::OnMunitionOverlap(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnMunitionOverlap"));
    struct Params_OnMunitionOverlap {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnMunitionOverlap params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void ASpellTool::OnMunitionImpactDamage(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnMunitionImpactDamage"));
    struct Params_OnMunitionImpactDamage {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnMunitionImpactDamage params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void ASpellTool::OnMunitionImpact(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnMunitionImpact"));
    struct Params_OnMunitionImpact {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnMunitionImpact params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
ESpellCategory ASpellTool::GetSpellCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetSpellCategory"));
    struct Params_GetSpellCategory {
        ESpellCategory ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSpellCategory params{};
    ProcessEvent(func, &params);
    return (ESpellCategory)params.ReturnValue;
}
void ASpellTool::OnMunitionDestroyed(AMunitionType_Base* InMunitionInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnMunitionDestroyed"));
    struct Params_OnMunitionDestroyed {
        AMunitionType_Base* InMunitionInstance; // 0x0
    }; // Size: 0x8
    Params_OnMunitionDestroyed params{};
    params.InMunitionInstance = (AMunitionType_Base*)InMunitionInstance;
    ProcessEvent(func, &params);
}
AActor* ASpellTool::GetCharacterActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetCharacterActor"));
    struct Params_GetCharacterActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacterActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* ASpellTool::GetSourceActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetSourceActor"));
    struct Params_GetSourceActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSourceActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ASpellTool::OnCastSpell(AActor* Target, FVector& Location, FVector& MuzzleLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.OnCastSpell"));
    struct Params_OnCastSpell {
        AActor* Target; // 0x0
        FVector Location; // 0x8
        FVector MuzzleLocation; // 0x14
    }; // Size: 0x20
    Params_OnCastSpell params{};
    params.Target = (AActor*)Target;
    params.Location = (FVector)Location;
    params.MuzzleLocation = (FVector)MuzzleLocation;
    ProcessEvent(func, &params);
    Location = params.Location;
    MuzzleLocation = params.MuzzleLocation;
}
bool ASpellTool::IsToolUsedByPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.IsToolUsedByPlayer"));
    struct Params_IsToolUsedByPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsToolUsedByPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellTool::IsStarted_K2() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.IsStarted_K2"));
    struct Params_IsStarted_K2 {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStarted_K2 params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellTool::IsChanneling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.IsChanneling"));
    struct Params_IsChanneling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsChanneling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellTool::IsBeastCaptureSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.IsBeastCaptureSpell"));
    struct Params_IsBeastCaptureSpell {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBeastCaptureSpell params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellTool::HasUpgradedMechanics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.HasUpgradedMechanics"));
    struct Params_HasUpgradedMechanics {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasUpgradedMechanics params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellTool::HasUpgrade(ESpellUpgrades Upgrade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.HasUpgrade"));
    struct Params_HasUpgrade {
        ESpellUpgrades Upgrade; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_HasUpgrade params{};
    params.Upgrade = (ESpellUpgrades)Upgrade;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AWandTool* ASpellTool::GetWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetWand"));
    struct Params_GetWand {
        AWandTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWand params{};
    ProcessEvent(func, &params);
    return (AWandTool*)params.ReturnValue;
}
ACharacter* ASpellTool::GetCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetCharacter"));
    struct Params_GetCharacter {
        ACharacter* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacter params{};
    ProcessEvent(func, &params);
    return (ACharacter*)params.ReturnValue;
}
float ASpellTool::GetProjectileSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetProjectileSpeed"));
    struct Params_GetProjectileSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetProjectileSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UClass* ASpellTool::GetExecutionClassFromKeyWord(FName KeyWord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetExecutionClassFromKeyWord"));
    struct Params_GetExecutionClassFromKeyWord {
        FName KeyWord; // 0x0
        UClass* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetExecutionClassFromKeyWord params{};
    params.KeyWord = (FName)KeyWord;
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
AMunitionType_Base* ASpellTool::GetActiveMunition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetActiveMunition"));
    struct Params_GetActiveMunition {
        AMunitionType_Base* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveMunition params{};
    ProcessEvent(func, &params);
    return (AMunitionType_Base*)params.ReturnValue;
}
float ASpellTool::GetDuration(bool bTargetIsACharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetDuration"));
    struct Params_GetDuration {
        bool bTargetIsACharacter; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetDuration params{};
    params.bTargetIsACharacter = (bool)bTargetIsACharacter;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AActor* ASpellTool::GetActiveTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.GetActiveTarget"));
    struct Params_GetActiveTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ASpellTool::FireOnHitBySpell(AActor* InTargetActor, AActor* InInstigator, FGameplayTagContainer& InMunitionTagContainer, FHitResult& HitResult, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.FireOnHitBySpell"));
    struct Params_FireOnHitBySpell {
        AActor* InTargetActor; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        FHitResult HitResult; // 0x30
        FVector ImpactDirection; // 0xb8
    }; // Size: 0xc4
    Params_FireOnHitBySpell params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.HitResult = (FHitResult)HitResult;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    InMunitionTagContainer = params.InMunitionTagContainer;
    HitResult = params.HitResult;
    ImpactDirection = params.ImpactDirection;
}
UActorComponent* ASpellTool::CreateImpactComponent(AActor* InTargetActor, FMunitionImpactData& InMunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.CreateImpactComponent"));
    struct Params_CreateImpactComponent {
        AActor* InTargetActor; // 0x0
        FMunitionImpactData InMunitionImpactData; // 0x8
        UActorComponent* ReturnValue; // 0xf8
    }; // Size: 0x100
    Params_CreateImpactComponent params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InMunitionImpactData = (FMunitionImpactData)InMunitionImpactData;
    ProcessEvent(func, &params);
    InMunitionImpactData = params.InMunitionImpactData;
    return (UActorComponent*)params.ReturnValue;
}
void ASpellTool::Failed_K2() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.Failed_K2"));
    struct Params_Failed_K2 {
    }; // Size: 0x0
    Params_Failed_K2 params{};
    ProcessEvent(func, &params);
}
void ASpellTool::EndToggleSpell(bool bForcedExternally) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.EndToggleSpell"));
    struct Params_EndToggleSpell {
        bool bForcedExternally; // 0x0
    }; // Size: 0x1
    Params_EndToggleSpell params{};
    params.bForcedExternally = (bool)bForcedExternally;
    ProcessEvent(func, &params);
}
float ASpellTool::CalculateCharacterDamage(AActor* InTarget, bool& OutWillKillTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.CalculateCharacterDamage"));
    struct Params_CalculateCharacterDamage {
        AActor* InTarget; // 0x0
        bool OutWillKillTarget; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_CalculateCharacterDamage params{};
    params.InTarget = (AActor*)InTarget;
    params.OutWillKillTarget = (bool)OutWillKillTarget;
    ProcessEvent(func, &params);
    OutWillKillTarget = params.OutWillKillTarget;
    return (float)params.ReturnValue;
}
bool ASpellTool::BreaksShield(AActor* Target, FGameplayTagContainer& InTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellTool.BreaksShield"));
    struct Params_BreaksShield {
        AActor* Target; // 0x0
        FGameplayTagContainer InTagContainer; // 0x8
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_BreaksShield params{};
    params.Target = (AActor*)Target;
    params.InTagContainer = (FGameplayTagContainer)InTagContainer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTagContainer = params.InTagContainer;
    return (bool)params.ReturnValue;
}
