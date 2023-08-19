#include "AActor.hpp"
#include "ACombatVolume.hpp"
#include "ADynamicObjectVolume.hpp"
#include "AEnemy_Character.hpp"
#include "ANPC_Character.hpp"
#include "FBossFightData.hpp"
#include "FGameplayTag.hpp"
#include "FHealthThreshold.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UBTCustomComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UEnemyStateComponent.hpp"
#include "UEnemy_AttackComponent.hpp"
#include "UEnemy_WeaponComponent.hpp"
#include "UFunction.hpp"
#include "UObjectArchitectAsset.hpp"
#include "UStaticMesh.hpp"
#include "UToolSetComponent.hpp"
void AEnemy_Character::UpdateBossStateEvent(FBossFightData InBossFightData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.UpdateBossStateEvent"));
    struct Params_UpdateBossStateEvent {
        FBossFightData InBossFightData; // 0x0
    }; // Size: 0x24
    Params_UpdateBossStateEvent params{};
    params.InBossFightData = (FBossFightData)InBossFightData;
    ProcessEvent(func, &params);
}
bool AEnemy_Character::IsLeader() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.IsLeader"));
    struct Params_IsLeader {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLeader params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AEnemy_Character* AEnemy_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Character");
    return (AEnemy_Character*)res;
}
void AEnemy_Character::SetAsLeader(bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.SetAsLeader"));
    struct Params_SetAsLeader {
        bool bSet; // 0x0
    }; // Size: 0x1
    Params_SetAsLeader params{};
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
void AEnemy_Character::UnhideAndEnableEnemyCharacter(AActor* EnemyCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.UnhideAndEnableEnemyCharacter"));
    struct Params_UnhideAndEnableEnemyCharacter {
        AActor* EnemyCharacter; // 0x0
    }; // Size: 0x8
    Params_UnhideAndEnableEnemyCharacter params{};
    params.EnemyCharacter = (AActor*)EnemyCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AEnemy_Character::Throw(AActor* Target, AActor* SourceActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.Throw"));
    struct Params_Throw {
        AActor* Target; // 0x0
        AActor* SourceActor; // 0x8
    }; // Size: 0x10
    Params_Throw params{};
    params.Target = (AActor*)Target;
    params.SourceActor = (AActor*)SourceActor;
    ProcessEvent(func, &params);
}
bool AEnemy_Character::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.StartFire"));
    struct Params_StartFire {
        float Amount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartFire params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEnemy_Character::SetAsFightClubOpponent(bool bSet, FName InNewTeamName, FName InAudioSubtypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.SetAsFightClubOpponent"));
    struct Params_SetAsFightClubOpponent {
        bool bSet; // 0x0
        char pad_1[0x3];
        FName InNewTeamName; // 0x4
        FName InAudioSubtypeID; // 0xc
    }; // Size: 0x14
    Params_SetAsFightClubOpponent params{};
    params.bSet = (bool)bSet;
    params.InNewTeamName = (FName)InNewTeamName;
    params.InAudioSubtypeID = (FName)InAudioSubtypeID;
    ProcessEvent(func, &params);
}
void AEnemy_Character::SetAsAggressor(bool bSet, FName InNewTeamName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.SetAsAggressor"));
    struct Params_SetAsAggressor {
        bool bSet; // 0x0
        char pad_1[0x3];
        FName InNewTeamName; // 0x4
    }; // Size: 0xc
    Params_SetAsAggressor params{};
    params.bSet = (bool)bSet;
    params.InNewTeamName = (FName)InNewTeamName;
    ProcessEvent(func, &params);
}
void AEnemy_Character::SetAsGroupAggressor(bool bSet, FName InNewTeamName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.SetAsGroupAggressor"));
    struct Params_SetAsGroupAggressor {
        bool bSet; // 0x0
        char pad_1[0x3];
        FName InNewTeamName; // 0x4
    }; // Size: 0xc
    Params_SetAsGroupAggressor params{};
    params.bSet = (bool)bSet;
    params.InNewTeamName = (FName)InNewTeamName;
    ProcessEvent(func, &params);
}
void AEnemy_Character::SetAsDuelOpponent(bool bSet, FName InAudioSubtypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.SetAsDuelOpponent"));
    struct Params_SetAsDuelOpponent {
        bool bSet; // 0x0
        char pad_1[0x3];
        FName InAudioSubtypeID; // 0x4
    }; // Size: 0xc
    Params_SetAsDuelOpponent params{};
    params.bSet = (bool)bSet;
    params.InAudioSubtypeID = (FName)InAudioSubtypeID;
    ProcessEvent(func, &params);
}
void AEnemy_Character::AttackWindowStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.AttackWindowStart"));
    struct Params_AttackWindowStart {
    }; // Size: 0x0
    Params_AttackWindowStart params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::SetAsCompanion(bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.SetAsCompanion"));
    struct Params_SetAsCompanion {
        bool bSet; // 0x0
    }; // Size: 0x1
    Params_SetAsCompanion params{};
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
void AEnemy_Character::HideAndDisableEnemyCharacter(AActor* EnemyCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.HideAndDisableEnemyCharacter"));
    struct Params_HideAndDisableEnemyCharacter {
        AActor* EnemyCharacter; // 0x0
    }; // Size: 0x8
    Params_HideAndDisableEnemyCharacter params{};
    params.EnemyCharacter = (AActor*)EnemyCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AEnemy_Character::OnTakeAKneeTimedOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.OnTakeAKneeTimedOut"));
    struct Params_OnTakeAKneeTimedOut {
    }; // Size: 0x0
    Params_OnTakeAKneeTimedOut params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::ExitSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.ExitSpline"));
    struct Params_ExitSpline {
    }; // Size: 0x0
    Params_ExitSpline params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::MunitionCreated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.MunitionCreated"));
    struct Params_MunitionCreated {
    }; // Size: 0x0
    Params_MunitionCreated params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::Landed(FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.Landed"));
    struct Params_Landed {
        FHitResult Hit; // 0x0
    }; // Size: 0x88
    Params_Landed params{};
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
bool AEnemy_Character::IsDuelOpponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.IsDuelOpponent"));
    struct Params_IsDuelOpponent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDuelOpponent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AEnemy_Character::IsCompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.IsCompanion"));
    struct Params_IsCompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AEnemy_Character::IsCombatOpponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.IsCombatOpponent"));
    struct Params_IsCombatOpponent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCombatOpponent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEnemy_Character::HandleNearDeathKneelStart(AActor* ActorKneeling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.HandleNearDeathKneelStart"));
    struct Params_HandleNearDeathKneelStart {
        AActor* ActorKneeling; // 0x0
    }; // Size: 0x8
    Params_HandleNearDeathKneelStart params{};
    params.ActorKneeling = (AActor*)ActorKneeling;
    ProcessEvent(func, &params);
}
bool AEnemy_Character::IsAggressor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.IsAggressor"));
    struct Params_IsAggressor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAggressor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEnemy_Character::HandleNearDeathKneelEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.HandleNearDeathKneelEnd"));
    struct Params_HandleNearDeathKneelEnd {
    }; // Size: 0x0
    Params_HandleNearDeathKneelEnd params{};
    ProcessEvent(func, &params);
}
void AEnemy_Character::HandleHealthThresholdReached(FHealthThreshold InHealthThreshold, int32_t InLevel, int32_t InMaxLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.HandleHealthThresholdReached"));
    struct Params_HandleHealthThresholdReached {
        FHealthThreshold InHealthThreshold; // 0x0
        int32_t InLevel; // 0x38
        int32_t InMaxLevel; // 0x3c
    }; // Size: 0x40
    Params_HandleHealthThresholdReached params{};
    params.InHealthThreshold = (FHealthThreshold)InHealthThreshold;
    params.InLevel = (int32_t)InLevel;
    params.InMaxLevel = (int32_t)InMaxLevel;
    ProcessEvent(func, &params);
}
void AEnemy_Character::HandleMeleeHit(AActor* Victim, FVector& NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.HandleMeleeHit"));
    struct Params_HandleMeleeHit {
        AActor* Victim; // 0x0
        FVector NormalImpulse; // 0x8
        FHitResult Hit; // 0x14
    }; // Size: 0x9c
    Params_HandleMeleeHit params{};
    params.Victim = (AActor*)Victim;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    NormalImpulse = params.NormalImpulse;
    Hit = params.Hit;
}
bool AEnemy_Character::ChangeTeamWithCombat(FName TeamName, bool bEnableCombat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.ChangeTeamWithCombat"));
    struct Params_ChangeTeamWithCombat {
        FName TeamName; // 0x0
        bool bEnableCombat; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_ChangeTeamWithCombat params{};
    params.TeamName = (FName)TeamName;
    params.bEnableCombat = (bool)bEnableCombat;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEnemy_Character::AttackWindowStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_Character.AttackWindowStop"));
    struct Params_AttackWindowStop {
    }; // Size: 0x0
    Params_AttackWindowStop params{};
    ProcessEvent(func, &params);
}
