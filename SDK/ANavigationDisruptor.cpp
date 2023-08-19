#include "AActor.hpp"
#include "ANavigationDisruptor.hpp"
#include "ATriggerBox.hpp"
#include "UFunction.hpp"
ANavigationDisruptor* ANavigationDisruptor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavigationDisruptor");
    return (ANavigationDisruptor*)res;
}
void ANavigationDisruptor::OnEndActorOverlap(AActor* SelfActor, AActor* Other) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationDisruptor.OnEndActorOverlap"));
    struct Params_OnEndActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* Other; // 0x8
    }; // Size: 0x10
    Params_OnEndActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.Other = (AActor*)Other;
    ProcessEvent(func, &params);
}
void ANavigationDisruptor::OnBeginActorOverlap(AActor* SelfActor, AActor* Other) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationDisruptor.OnBeginActorOverlap"));
    struct Params_OnBeginActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* Other; // 0x8
    }; // Size: 0x10
    Params_OnBeginActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.Other = (AActor*)Other;
    ProcessEvent(func, &params);
}
