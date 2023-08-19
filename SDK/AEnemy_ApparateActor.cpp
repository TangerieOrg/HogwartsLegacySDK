#include "AActor.hpp"
#include "AEnemy_ApparateActor.hpp"
#include "FEnemy_ApparateActorData.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
AEnemy_ApparateActor* AEnemy_ApparateActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_ApparateActor");
    return (AEnemy_ApparateActor*)res;
}
bool AEnemy_ApparateActor::HasArrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_ApparateActor.HasArrived"));
    struct Params_HasArrived {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasArrived params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEnemy_ApparateActor::BroadcastDone(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_ApparateActor.BroadcastDone"));
    struct Params_BroadcastDone {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BroadcastDone params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void AEnemy_ApparateActor::BroadcastArrived(AActor* pActor, FVector Loc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_ApparateActor.BroadcastArrived"));
    struct Params_BroadcastArrived {
        AActor* pActor; // 0x0
        FVector Loc; // 0x8
    }; // Size: 0x14
    Params_BroadcastArrived params{};
    params.pActor = (AActor*)pActor;
    params.Loc = (FVector)Loc;
    ProcessEvent(func, &params);
}
