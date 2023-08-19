#include "AActor.hpp"
#include "AEnemy_SplineSpawnActor.hpp"
#include "FEnemy_SplineSpawnActorData.hpp"
#include "FMultiFX2Handle.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
AEnemy_SplineSpawnActor* AEnemy_SplineSpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SplineSpawnActor");
    return (AEnemy_SplineSpawnActor*)res;
}
void AEnemy_SplineSpawnActor::StartLandingVFX(FVector StartLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.StartLandingVFX"));
    struct Params_StartLandingVFX {
        FVector StartLocation; // 0x0
    }; // Size: 0xc
    Params_StartLandingVFX params{};
    params.StartLocation = (FVector)StartLocation;
    ProcessEvent(func, &params);
}
void AEnemy_SplineSpawnActor::StartArrivedVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.StartArrivedVFX"));
    struct Params_StartArrivedVFX {
    }; // Size: 0x0
    Params_StartArrivedVFX params{};
    ProcessEvent(func, &params);
}
void AEnemy_SplineSpawnActor::ApplyStopFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.ApplyStopFX"));
    struct Params_ApplyStopFX {
    }; // Size: 0x0
    Params_ApplyStopFX params{};
    ProcessEvent(func, &params);
}
void AEnemy_SplineSpawnActor::BroadcastDone(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.BroadcastDone"));
    struct Params_BroadcastDone {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BroadcastDone params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void AEnemy_SplineSpawnActor::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
bool AEnemy_SplineSpawnActor::HasArrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.HasArrived"));
    struct Params_HasArrived {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasArrived params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AEnemy_SplineSpawnActor::BroadcastArrived(AActor* pActor, FVector Loc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.BroadcastArrived"));
    struct Params_BroadcastArrived {
        AActor* pActor; // 0x0
        FVector Loc; // 0x8
    }; // Size: 0x14
    Params_BroadcastArrived params{};
    params.pActor = (AActor*)pActor;
    params.Loc = (FVector)Loc;
    ProcessEvent(func, &params);
}
void AEnemy_SplineSpawnActor::ApplyStartFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SplineSpawnActor.ApplyStartFX"));
    struct Params_ApplyStartFX {
    }; // Size: 0x0
    Params_ApplyStartFX params{};
    ProcessEvent(func, &params);
}
