#include "AActor.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FGameplayProperty_Int.hpp"
#include "FHealthThreshold.hpp"
#include "UCharacterStateInfo.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
UCharacterStateInfo* UCharacterStateInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterStateInfo");
    return (UCharacterStateInfo*)res;
}
void UCharacterStateInfo::ResetAllInteractionsFrom(AActor* InteractorActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ResetAllInteractionsFrom"));
    struct Params_ResetAllInteractionsFrom {
        AActor* InteractorActorPtr; // 0x0
    }; // Size: 0x8
    Params_ResetAllInteractionsFrom params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCharacterStateInfo::WereSameTeam(AActor* ActorPtr1, AActor* ActorPtr2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.WereSameTeam"));
    struct Params_WereSameTeam {
        AActor* ActorPtr1; // 0x0
        AActor* ActorPtr2; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_WereSameTeam params{};
    params.ActorPtr1 = (AActor*)ActorPtr1;
    params.ActorPtr2 = (AActor*)ActorPtr2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsActorVulnerable(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsActorVulnerable"));
    struct Params_IsActorVulnerable {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorVulnerable params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::SetTeammateAllyOverride(bool bOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetTeammateAllyOverride"));
    struct Params_SetTeammateAllyOverride {
        bool bOverride; // 0x0
    }; // Size: 0x1
    Params_SetTeammateAllyOverride params{};
    params.bOverride = (bool)bOverride;
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::WereAllies(AActor* ActorPtr1, AActor* ActorPtr2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.WereAllies"));
    struct Params_WereAllies {
        AActor* ActorPtr1; // 0x0
        AActor* ActorPtr2; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_WereAllies params{};
    params.ActorPtr1 = (AActor*)ActorPtr1;
    params.ActorPtr2 = (AActor*)ActorPtr2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::ResetInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ResetInteractionBetween"));
    struct Params_ResetInteractionBetween {
        AActor* InteractorActorPtr; // 0x0
        AActor* InteracteeActorPtr; // 0x8
    }; // Size: 0x10
    Params_ResetInteractionBetween params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetInteraction(AActor* InteracteeActorPtr, FName& InInteraction, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetInteraction"));
    struct Params_SetInteraction {
        AActor* InteracteeActorPtr; // 0x0
        FName InInteraction; // 0x8
        int32_t Priority; // 0x10
    }; // Size: 0x14
    Params_SetInteraction params{};
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    params.InInteraction = (FName)InInteraction;
    params.Priority = (int32_t)Priority;
    ProcessEvent(func, &params);
    InInteraction = params.InInteraction;
}
void UCharacterStateInfo::RestoreHealthToMax(bool bRemoveTAK) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.RestoreHealthToMax"));
    struct Params_RestoreHealthToMax {
        bool bRemoveTAK; // 0x0
    }; // Size: 0x1
    Params_RestoreHealthToMax params{};
    params.bRemoveTAK = (bool)bRemoveTAK;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetHealthThresholdArray(TArray<FHealthThreshold>& HealthThresholdArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetHealthThresholdArray"));
    struct Params_SetHealthThresholdArray {
        TArray<FHealthThreshold> HealthThresholdArray; // 0x0
    }; // Size: 0x10
    Params_SetHealthThresholdArray params{};
    params.HealthThresholdArray = (TArray<FHealthThreshold>)HealthThresholdArray;
    ProcessEvent(func, &params);
    HealthThresholdArray = params.HealthThresholdArray;
}
void UCharacterStateInfo::SetVulnerable(bool bInIsVulnerable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetVulnerable"));
    struct Params_SetVulnerable {
        bool bInIsVulnerable; // 0x0
    }; // Size: 0x1
    Params_SetVulnerable params{};
    params.bInIsVulnerable = (bool)bInIsVulnerable;
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::WasSameTeam(AActor* ActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.WasSameTeam"));
    struct Params_WasSameTeam {
        AActor* ActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_WasSameTeam params{};
    params.ActorPtr = (AActor*)ActorPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::RestoreLastTeam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.RestoreLastTeam"));
    struct Params_RestoreLastTeam {
    }; // Size: 0x0
    Params_RestoreLastTeam params{};
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::WasAlly(AActor* ActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.WasAlly"));
    struct Params_WasAlly {
        AActor* ActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_WasAlly params{};
    params.ActorPtr = (AActor*)ActorPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::StopIntervalHealthAdjust() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.StopIntervalHealthAdjust"));
    struct Params_StopIntervalHealthAdjust {
    }; // Size: 0x0
    Params_StopIntervalHealthAdjust params{};
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::RestoreActorToLastTeam(AActor* DestActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.RestoreActorToLastTeam"));
    struct Params_RestoreActorToLastTeam {
        AActor* DestActor; // 0x0
    }; // Size: 0x8
    Params_RestoreActorToLastTeam params{};
    params.DestActor = (AActor*)DestActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::RestoreActorToInitialTeam(AActor* DestActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.RestoreActorToInitialTeam"));
    struct Params_RestoreActorToInitialTeam {
        AActor* DestActor; // 0x0
    }; // Size: 0x8
    Params_RestoreActorToInitialTeam params{};
    params.DestActor = (AActor*)DestActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCharacterStateInfo::IsSameTeam(AActor* ActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsSameTeam"));
    struct Params_IsSameTeam {
        AActor* ActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSameTeam params{};
    params.ActorPtr = (AActor*)ActorPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::StartIntervalHealthAdjust(float Interval, float Duration, float DeltaAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.StartIntervalHealthAdjust"));
    struct Params_StartIntervalHealthAdjust {
        float Interval; // 0x0
        float Duration; // 0x4
        float DeltaAmount; // 0x8
    }; // Size: 0xc
    Params_StartIntervalHealthAdjust params{};
    params.Interval = (float)Interval;
    params.Duration = (float)Duration;
    params.DeltaAmount = (float)DeltaAmount;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetOverrideNearDeathRecoverTime(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetOverrideNearDeathRecoverTime"));
    struct Params_SetOverrideNearDeathRecoverTime {
        float Time; // 0x0
    }; // Size: 0x4
    Params_SetOverrideNearDeathRecoverTime params{};
    params.Time = (float)Time;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetTeamInteractionBetween(AActor* InteractorActorPtr, FName& InteracteeTeam, FName& InInteraction, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetTeamInteractionBetween"));
    struct Params_SetTeamInteractionBetween {
        AActor* InteractorActorPtr; // 0x0
        FName InteracteeTeam; // 0x8
        FName InInteraction; // 0x10
        int32_t Priority; // 0x18
    }; // Size: 0x1c
    Params_SetTeamInteractionBetween params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    params.InteracteeTeam = (FName)InteracteeTeam;
    params.InInteraction = (FName)InInteraction;
    params.Priority = (int32_t)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InteracteeTeam = params.InteracteeTeam;
    InInteraction = params.InInteraction;
}
void UCharacterStateInfo::SetTeamInteraction(FName& InteracteeTeam, FName& InInteraction, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetTeamInteraction"));
    struct Params_SetTeamInteraction {
        FName InteracteeTeam; // 0x0
        FName InInteraction; // 0x8
        int32_t Priority; // 0x10
    }; // Size: 0x14
    Params_SetTeamInteraction params{};
    params.InteracteeTeam = (FName)InteracteeTeam;
    params.InInteraction = (FName)InInteraction;
    params.Priority = (int32_t)Priority;
    ProcessEvent(func, &params);
    InteracteeTeam = params.InteracteeTeam;
    InInteraction = params.InInteraction;
}
void UCharacterStateInfo::SetTeam(FName& InTeam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetTeam"));
    struct Params_SetTeam {
        FName InTeam; // 0x0
    }; // Size: 0x8
    Params_SetTeam params{};
    params.InTeam = (FName)InTeam;
    ProcessEvent(func, &params);
    InTeam = params.InTeam;
}
void UCharacterStateInfo::SetRegenerationRate(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetRegenerationRate"));
    struct Params_SetRegenerationRate {
        float Rate; // 0x0
    }; // Size: 0x4
    Params_SetRegenerationRate params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetProtegoActive(bool bProtegoActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetProtegoActive"));
    struct Params_SetProtegoActive {
        bool bProtegoActive; // 0x0
    }; // Size: 0x1
    Params_SetProtegoActive params{};
    params.bProtegoActive = (bool)bProtegoActive;
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::IsPlayerSpawnableAlly(AActor* ActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsPlayerSpawnableAlly"));
    struct Params_IsPlayerSpawnableAlly {
        AActor* ActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsPlayerSpawnableAlly params{};
    params.ActorPtr = (AActor*)ActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::SetInvincible(bool bInIsInvincible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetInvincible"));
    struct Params_SetInvincible {
        bool bInIsInvincible; // 0x0
    }; // Size: 0x1
    Params_SetInvincible params{};
    params.bInIsInvincible = (bool)bInIsInvincible;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::ResetInteraction(AActor* InteracteeActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ResetInteraction"));
    struct Params_ResetInteraction {
        AActor* InteracteeActorPtr; // 0x0
    }; // Size: 0x8
    Params_ResetInteraction params{};
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetDamageable(bool bAttackable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetDamageable"));
    struct Params_SetDamageable {
        bool bAttackable; // 0x0
    }; // Size: 0x1
    Params_SetDamageable params{};
    params.bAttackable = (bool)bAttackable;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetProtected(bool bInProtected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetProtected"));
    struct Params_SetProtected {
        bool bInProtected; // 0x0
    }; // Size: 0x1
    Params_SetProtected params{};
    params.bInProtected = (bool)bInProtected;
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::IsDamageable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsDamageable"));
    struct Params_IsDamageable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDamageable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::SetLootable(bool bInLootable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetLootable"));
    struct Params_SetLootable {
        bool bInLootable; // 0x0
    }; // Size: 0x1
    Params_SetLootable params{};
    params.bInLootable = (bool)bInLootable;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetIsAsleep(bool bInAsleep) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetIsAsleep"));
    struct Params_SetIsAsleep {
        bool bInAsleep; // 0x0
    }; // Size: 0x1
    Params_SetIsAsleep params{};
    params.bInAsleep = (bool)bInAsleep;
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::IsDueling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsDueling"));
    struct Params_IsDueling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDueling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::ResetAllInteractions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ResetAllInteractions"));
    struct Params_ResetAllInteractions {
    }; // Size: 0x0
    Params_ResetAllInteractions params{};
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::IsLootable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsLootable"));
    struct Params_IsLootable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLootable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::SetInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr, FName& InInteraction, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetInteractionBetween"));
    struct Params_SetInteractionBetween {
        AActor* InteractorActorPtr; // 0x0
        AActor* InteracteeActorPtr; // 0x8
        FName InInteraction; // 0x10
        int32_t Priority; // 0x18
    }; // Size: 0x1c
    Params_SetInteractionBetween params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    params.InInteraction = (FName)InInteraction;
    params.Priority = (int32_t)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InInteraction = params.InInteraction;
}
void UCharacterStateInfo::SetImperiusInstigator(AActor* InInstigatorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetImperiusInstigator"));
    struct Params_SetImperiusInstigator {
        AActor* InInstigatorPtr; // 0x0
    }; // Size: 0x8
    Params_SetImperiusInstigator params{};
    params.InInstigatorPtr = (AActor*)InInstigatorPtr;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::ResetTeamInteraction(FName& InteracteeTeam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ResetTeamInteraction"));
    struct Params_ResetTeamInteraction {
        FName InteracteeTeam; // 0x0
    }; // Size: 0x8
    Params_ResetTeamInteraction params{};
    params.InteracteeTeam = (FName)InteracteeTeam;
    ProcessEvent(func, &params);
    InteracteeTeam = params.InteracteeTeam;
}
void UCharacterStateInfo::SetImperiusCharTakesFullDamage(bool TakesFullDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetImperiusCharTakesFullDamage"));
    struct Params_SetImperiusCharTakesFullDamage {
        bool TakesFullDamage; // 0x0
    }; // Size: 0x1
    Params_SetImperiusCharTakesFullDamage params{};
    params.TakesFullDamage = (bool)TakesFullDamage;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetAttackable(bool bAttackable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetAttackable"));
    struct Params_SetAttackable {
        bool bAttackable; // 0x0
    }; // Size: 0x1
    Params_SetAttackable params{};
    params.bAttackable = (bool)bAttackable;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetIgnoreProtego(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetIgnoreProtego"));
    struct Params_SetIgnoreProtego {
        float Time; // 0x0
    }; // Size: 0x4
    Params_SetIgnoreProtego params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
bool UCharacterStateInfo::GetIgnoreAllyAttacks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetIgnoreAllyAttacks"));
    struct Params_GetIgnoreAllyAttacks {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIgnoreAllyAttacks params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCharacterStateInfo::SetIgnoreAllyAttacks(bool Ignore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetIgnoreAllyAttacks"));
    struct Params_SetIgnoreAllyAttacks {
        bool Ignore; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreAllyAttacks params{};
    params.Ignore = (bool)Ignore;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetBlockingActor(AActor* InBlockingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetBlockingActor"));
    struct Params_SetBlockingActor {
        AActor* InBlockingActor; // 0x0
    }; // Size: 0x8
    Params_SetBlockingActor params{};
    params.InBlockingActor = (AActor*)InBlockingActor;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetActorVulnerable(AActor* InActor, bool bInIsVulnerable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetActorVulnerable"));
    struct Params_SetActorVulnerable {
        AActor* InActor; // 0x0
        bool bInIsVulnerable; // 0x8
    }; // Size: 0x9
    Params_SetActorVulnerable params{};
    params.InActor = (AActor*)InActor;
    params.bInIsVulnerable = (bool)bInIsVulnerable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetActorToTeam(AActor* DestActor, AActor* SourceActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetActorToTeam"));
    struct Params_SetActorToTeam {
        AActor* DestActor; // 0x0
        AActor* SourceActor; // 0x8
    }; // Size: 0x10
    Params_SetActorToTeam params{};
    params.DestActor = (AActor*)DestActor;
    params.SourceActor = (AActor*)SourceActor;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetActorInvincible(AActor* InActor, bool bInIsInvincible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetActorInvincible"));
    struct Params_SetActorInvincible {
        AActor* InActor; // 0x0
        bool bInIsInvincible; // 0x8
    }; // Size: 0x9
    Params_SetActorInvincible params{};
    params.InActor = (AActor*)InActor;
    params.bInIsInvincible = (bool)bInIsInvincible;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetActorAttackable(AActor* InActor, bool bInAttackable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetActorAttackable"));
    struct Params_SetActorAttackable {
        AActor* InActor; // 0x0
        bool bInAttackable; // 0x8
    }; // Size: 0x9
    Params_SetActorAttackable params{};
    params.InActor = (AActor*)InActor;
    params.bInAttackable = (bool)bInAttackable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::SetActiveAuthorityFigure(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.SetActiveAuthorityFigure"));
    struct Params_SetActiveAuthorityFigure {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetActiveAuthorityFigure params{};
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::RestoreInitialTeam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.RestoreInitialTeam"));
    struct Params_RestoreInitialTeam {
    }; // Size: 0x0
    Params_RestoreInitialTeam params{};
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::ResetTeamInteractionBetween(AActor* InteractorActorPtr, FName& InteracteeTeam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ResetTeamInteractionBetween"));
    struct Params_ResetTeamInteractionBetween {
        AActor* InteractorActorPtr; // 0x0
        FName InteracteeTeam; // 0x8
    }; // Size: 0x10
    Params_ResetTeamInteractionBetween params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    params.InteracteeTeam = (FName)InteracteeTeam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InteracteeTeam = params.InteracteeTeam;
}
bool UCharacterStateInfo::IsProtected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsProtected"));
    struct Params_IsProtected {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProtected params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsVulnerable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsVulnerable"));
    struct Params_IsVulnerable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVulnerable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCharacterStateInfo::GetLastTeam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetLastTeam"));
    struct Params_GetLastTeam {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastTeam params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCharacterStateInfo::IsUnaware(AActor* Source, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsUnaware"));
    struct Params_IsUnaware {
        AActor* Source; // 0x0
        AActor* Target; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsUnaware params{};
    params.Source = (AActor*)Source;
    params.Target = (AActor*)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsProtegoActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsProtegoActive"));
    struct Params_IsProtegoActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProtegoActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsInvincible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsInvincible"));
    struct Params_IsInvincible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInvincible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsIgnoringProtego() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsIgnoringProtego"));
    struct Params_IsIgnoringProtego {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsIgnoringProtego params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsAttackable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsAttackable"));
    struct Params_IsAttackable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAttackable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsAsleep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsAsleep"));
    struct Params_IsAsleep {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAsleep params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsActorInvincible(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsActorInvincible"));
    struct Params_IsActorInvincible {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorInvincible params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsActorAttackable(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsActorAttackable"));
    struct Params_IsActorAttackable {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorAttackable params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::IsActiveAuthorityFigure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.IsActiveAuthorityFigure"));
    struct Params_IsActiveAuthorityFigure {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActiveAuthorityFigure params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::ImmuneToFinisherDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ImmuneToFinisherDeath"));
    struct Params_ImmuneToFinisherDeath {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ImmuneToFinisherDeath params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::HasInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.HasInteractionBetween"));
    struct Params_HasInteractionBetween {
        AActor* InteractorActorPtr; // 0x0
        AActor* InteracteeActorPtr; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasInteractionBetween params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::HasInteraction(AActor* InteracteeActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.HasInteraction"));
    struct Params_HasInteraction {
        AActor* InteracteeActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasInteraction params{};
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::HasChangedTeams() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.HasChangedTeams"));
    struct Params_HasChangedTeams {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasChangedTeams params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCharacterStateInfo::GetTeamInteraction(AActor* InteracteeActorPtr, FName& Team) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetTeamInteraction"));
    struct Params_GetTeamInteraction {
        AActor* InteracteeActorPtr; // 0x0
        FName Team; // 0x8
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetTeamInteraction params{};
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    params.Team = (FName)Team;
    ProcessEvent(func, &params);
    Team = params.Team;
    return (FName)params.ReturnValue;
}
FName UCharacterStateInfo::GetTeam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetTeam"));
    struct Params_GetTeam {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTeam params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UCharacterStateInfo::GetRegenerationRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetRegenerationRate"));
    struct Params_GetRegenerationRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRegenerationRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UCharacterStateInfo::GetObjectClassName(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetObjectClassName"));
    struct Params_GetObjectClassName {
        AActor* InActor; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetObjectClassName params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
float UCharacterStateInfo::GetNumberOfHappyBeasts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetNumberOfHappyBeasts"));
    struct Params_GetNumberOfHappyBeasts {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfHappyBeasts params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UCharacterStateInfo::GetInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetInteractionBetween"));
    struct Params_GetInteractionBetween {
        AActor* InteractorActorPtr; // 0x0
        AActor* InteracteeActorPtr; // 0x8
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetInteractionBetween params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UCharacterStateInfo::GetInteraction(AActor* InteracteeActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetInteraction"));
    struct Params_GetInteraction {
        AActor* InteracteeActorPtr; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetInteraction params{};
    params.InteracteeActorPtr = (AActor*)InteracteeActorPtr;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UClass* UCharacterStateInfo::GetBonySkeleton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetBonySkeleton"));
    struct Params_GetBonySkeleton {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBonySkeleton params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
FName UCharacterStateInfo::GetInitialTeam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetInitialTeam"));
    struct Params_GetInitialTeam {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInitialTeam params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
AActor* UCharacterStateInfo::GetImperiusInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetImperiusInstigator"));
    struct Params_GetImperiusInstigator {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetImperiusInstigator params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UCharacterStateInfo::GetImperiusCharTakesFullDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetImperiusCharTakesFullDamage"));
    struct Params_GetImperiusCharTakesFullDamage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetImperiusCharTakesFullDamage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FHealthThreshold> UCharacterStateInfo::GetHealthThresholdArray() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetHealthThresholdArray"));
    struct Params_GetHealthThresholdArray {
        TArray<FHealthThreshold> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetHealthThresholdArray params{};
    ProcessEvent(func, &params);
    return (TArray<FHealthThreshold>)params.ReturnValue;
}
float UCharacterStateInfo::GetGameEventRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetGameEventRadius"));
    struct Params_GetGameEventRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGameEventRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCharacterStateInfo::GetEvilEffectiveness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetEvilEffectiveness"));
    struct Params_GetEvilEffectiveness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEvilEffectiveness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UCharacterStateInfo::GetEnemyInteractionWith(AActor* InteractorActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetEnemyInteractionWith"));
    struct Params_GetEnemyInteractionWith {
        AActor* InteractorActorPtr; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetEnemyInteractionWith params{};
    params.InteractorActorPtr = (AActor*)InteractorActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UCharacterStateInfo::GetEnemyInteraction(FName InInteractorTeam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetEnemyInteraction"));
    struct Params_GetEnemyInteraction {
        FName InInteractorTeam; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetEnemyInteraction params{};
    params.InInteractorTeam = (FName)InInteractorTeam;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UCharacterStateInfo* UCharacterStateInfo::GetCharacterStateInfo(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetCharacterStateInfo"));
    struct Params_GetCharacterStateInfo {
        AActor* InActor; // 0x0
        UCharacterStateInfo* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCharacterStateInfo params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCharacterStateInfo*)params.ReturnValue;
}
AActor* UCharacterStateInfo::GetBlockingActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetBlockingActor"));
    struct Params_GetBlockingActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBlockingActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FName UCharacterStateInfo::GetActorTeam(AActor* DestActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetActorTeam"));
    struct Params_GetActorTeam {
        AActor* DestActor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActorTeam params{};
    params.DestActor = (AActor*)DestActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UCharacterStateInfo::GetActorSubtypeID(AActor* ActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.GetActorSubtypeID"));
    struct Params_GetActorSubtypeID {
        AActor* ActorPtr; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActorSubtypeID params{};
    params.ActorPtr = (AActor*)ActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UCharacterStateInfo::EndNearDeathKneel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.EndNearDeathKneel"));
    struct Params_EndNearDeathKneel {
    }; // Size: 0x0
    Params_EndNearDeathKneel params{};
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::ClearOverrideNearDeathRecoverTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ClearOverrideNearDeathRecoverTime"));
    struct Params_ClearOverrideNearDeathRecoverTime {
    }; // Size: 0x0
    Params_ClearOverrideNearDeathRecoverTime params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCharacterStateInfo::ClearIgnoreProtego() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ClearIgnoreProtego"));
    struct Params_ClearIgnoreProtego {
    }; // Size: 0x0
    Params_ClearIgnoreProtego params{};
    ProcessEvent(func, &params);
}
void UCharacterStateInfo::ChangeTeam(FName& InTeam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ChangeTeam"));
    struct Params_ChangeTeam {
        FName InTeam; // 0x0
    }; // Size: 0x8
    Params_ChangeTeam params{};
    params.InTeam = (FName)InTeam;
    ProcessEvent(func, &params);
    InTeam = params.InTeam;
}
void UCharacterStateInfo::ChangeActorToTeam(AActor* DestActor, AActor* SourceActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.ChangeActorToTeam"));
    struct Params_ChangeActorToTeam {
        AActor* DestActor; // 0x0
        AActor* SourceActor; // 0x8
    }; // Size: 0x10
    Params_ChangeActorToTeam params{};
    params.DestActor = (AActor*)DestActor;
    params.SourceActor = (AActor*)SourceActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCharacterStateInfo::CanHitTarget(AActor* Attacker, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.CanHitTarget"));
    struct Params_CanHitTarget {
        AActor* Attacker; // 0x0
        AActor* Target; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CanHitTarget params{};
    params.Attacker = (AActor*)Attacker;
    params.Target = (AActor*)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::AreSameTeam(AActor* ActorPtr1, AActor* ActorPtr2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.AreSameTeam"));
    struct Params_AreSameTeam {
        AActor* ActorPtr1; // 0x0
        AActor* ActorPtr2; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AreSameTeam params{};
    params.ActorPtr1 = (AActor*)ActorPtr1;
    params.ActorPtr2 = (AActor*)ActorPtr2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterStateInfo::AreAllies(AActor* ActorPtr1, AActor* ActorPtr2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateInfo.AreAllies"));
    struct Params_AreAllies {
        AActor* ActorPtr1; // 0x0
        AActor* ActorPtr2; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AreAllies params{};
    params.ActorPtr1 = (AActor*)ActorPtr1;
    params.ActorPtr2 = (AActor*)ActorPtr2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
