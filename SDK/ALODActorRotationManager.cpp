#include "AActor.hpp"
#include "ALODActorRotationManager.hpp"
#include "UFunction.hpp"
ALODActorRotationManager* ALODActorRotationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LODActorRotationManager");
    return (ALODActorRotationManager*)res;
}
TArray<AActor*> ALODActorRotationManager::FilterValidActorRef(TArray<void*> ActorRefList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODActorRotationManager.FilterValidActorRef"));
    struct Params_FilterValidActorRef {
        TArray<void*> ActorRefList; // 0x0
        TArray<AActor*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FilterValidActorRef params{};
    params.ActorRefList = (TArray<void*>)ActorRefList;
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
void ALODActorRotationManager::CheckLOD0ActorRefValid() {}
void ALODActorRotationManager::CheckAnyActorRefValid(TArray<void*> ActorRefList, bool& bTrue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LODActorRotationManager.CheckAnyActorRefValid"));
    struct Params_CheckAnyActorRefValid {
        TArray<void*> ActorRefList; // 0x0
        bool bTrue; // 0x10
    }; // Size: 0x11
    Params_CheckAnyActorRefValid params{};
    params.ActorRefList = (TArray<void*>)ActorRefList;
    params.bTrue = (bool)bTrue;
    ProcessEvent(func, &params);
    bTrue = params.bTrue;
}
