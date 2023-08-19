#include "AActor.hpp"
#include "UCharacterStateInfo.hpp"
#include "UClass.hpp"
#include "UEnemyStateInfo.hpp"
#include "UFunction.hpp"
UEnemyStateInfo* UEnemyStateInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyStateInfo");
    return (UEnemyStateInfo*)res;
}
void UEnemyStateInfo::SetIgnoreActorHitFrom(AActor* IgnoreActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.SetIgnoreActorHitFrom"));
    struct Params_SetIgnoreActorHitFrom {
        AActor* IgnoreActor; // 0x0
    }; // Size: 0x8
    Params_SetIgnoreActorHitFrom params{};
    params.IgnoreActor = (AActor*)IgnoreActor;
    ProcessEvent(func, &params);
}
void UEnemyStateInfo::SetPullsAggro(bool bInPullsAggro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.SetPullsAggro"));
    struct Params_SetPullsAggro {
        bool bInPullsAggro; // 0x0
    }; // Size: 0x1
    Params_SetPullsAggro params{};
    params.bInPullsAggro = (bool)bInPullsAggro;
    ProcessEvent(func, &params);
}
float UEnemyStateInfo::GetPullAggroAmount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.GetPullAggroAmount"));
    struct Params_GetPullAggroAmount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPullAggroAmount params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UEnemyStateInfo::UpdateMass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.UpdateMass"));
    struct Params_UpdateMass {
    }; // Size: 0x0
    Params_UpdateMass params{};
    ProcessEvent(func, &params);
}
bool UEnemyStateInfo::PullsAggro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.PullsAggro"));
    struct Params_PullsAggro {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PullsAggro params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyStateInfo::SetPullsAggroAmount(float InAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.SetPullsAggroAmount"));
    struct Params_SetPullsAggroAmount {
        float InAmount; // 0x0
    }; // Size: 0x4
    Params_SetPullsAggroAmount params{};
    params.InAmount = (float)InAmount;
    ProcessEvent(func, &params);
}
void UEnemyStateInfo::SetInvulnerableToStaticObjects(bool bInInvulnerable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.SetInvulnerableToStaticObjects"));
    struct Params_SetInvulnerableToStaticObjects {
        bool bInInvulnerable; // 0x0
    }; // Size: 0x1
    Params_SetInvulnerableToStaticObjects params{};
    params.bInInvulnerable = (bool)bInInvulnerable;
    ProcessEvent(func, &params);
}
void UEnemyStateInfo::RemoveIgnoreActorHitFrom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.RemoveIgnoreActorHitFrom"));
    struct Params_RemoveIgnoreActorHitFrom {
    }; // Size: 0x0
    Params_RemoveIgnoreActorHitFrom params{};
    ProcessEvent(func, &params);
}
TArray<UClass*> UEnemyStateInfo::GetFriendlyFireTypeList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyStateInfo.GetFriendlyFireTypeList"));
    struct Params_GetFriendlyFireTypeList {
        TArray<UClass*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFriendlyFireTypeList params{};
    ProcessEvent(func, &params);
    return (TArray<UClass*>)params.ReturnValue;
}
