#include "AActor.hpp"
#include "APawn.hpp"
#include "UAIPerceptionComponent.hpp"
#include "UAISense.hpp"
#include "UAISenseEvent.hpp"
#include "UAISense_Blueprint.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UAISense_Blueprint* UAISense_Blueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Blueprint");
    return (UAISense_Blueprint*)res;
}
void UAISense_Blueprint::GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents"));
    struct Params_GetAllListenerComponents {
        TArray<UAIPerceptionComponent*> ListenerComponents; // 0x0
    }; // Size: 0x10
    Params_GetAllListenerComponents params{};
    params.ListenerComponents = (TArray<UAIPerceptionComponent*>)ListenerComponents;
    ProcessEvent(func, &params);
    ListenerComponents = params.ListenerComponents;
}
float UAISense_Blueprint::OnUpdate(TArray<UAISenseEvent*>& EventsToProcess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.OnUpdate"));
    struct Params_OnUpdate {
        TArray<UAISenseEvent*> EventsToProcess; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_OnUpdate params{};
    params.EventsToProcess = (TArray<UAISenseEvent*>)EventsToProcess;
    ProcessEvent(func, &params);
    EventsToProcess = params.EventsToProcess;
    return (float)params.ReturnValue;
}
void UAISense_Blueprint::OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated"));
    struct Params_OnListenerUpdated {
        AActor* ActorListener; // 0x0
        UAIPerceptionComponent* PerceptionComponent; // 0x8
    }; // Size: 0x10
    Params_OnListenerUpdated params{};
    params.ActorListener = (AActor*)ActorListener;
    params.PerceptionComponent = (UAIPerceptionComponent*)PerceptionComponent;
    ProcessEvent(func, &params);
}
void UAISense_Blueprint::GetAllListenerActors(TArray<AActor*>& ListenerActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors"));
    struct Params_GetAllListenerActors {
        TArray<AActor*> ListenerActors; // 0x0
    }; // Size: 0x10
    Params_GetAllListenerActors params{};
    params.ListenerActors = (TArray<AActor*>)ListenerActors;
    ProcessEvent(func, &params);
    ListenerActors = params.ListenerActors;
}
void UAISense_Blueprint::OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered"));
    struct Params_OnListenerUnregistered {
        AActor* ActorListener; // 0x0
        UAIPerceptionComponent* PerceptionComponent; // 0x8
    }; // Size: 0x10
    Params_OnListenerUnregistered params{};
    params.ActorListener = (AActor*)ActorListener;
    params.PerceptionComponent = (UAIPerceptionComponent*)PerceptionComponent;
    ProcessEvent(func, &params);
}
void UAISense_Blueprint::K2_OnNewPawn(APawn* NewPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn"));
    struct Params_K2_OnNewPawn {
        APawn* NewPawn; // 0x0
    }; // Size: 0x8
    Params_K2_OnNewPawn params{};
    params.NewPawn = (APawn*)NewPawn;
    ProcessEvent(func, &params);
}
void UAISense_Blueprint::OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered"));
    struct Params_OnListenerRegistered {
        AActor* ActorListener; // 0x0
        UAIPerceptionComponent* PerceptionComponent; // 0x8
    }; // Size: 0x10
    Params_OnListenerRegistered params{};
    params.ActorListener = (AActor*)ActorListener;
    params.PerceptionComponent = (UAIPerceptionComponent*)PerceptionComponent;
    ProcessEvent(func, &params);
}
