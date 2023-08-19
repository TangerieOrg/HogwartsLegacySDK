#include "AActor.hpp"
#include "AHideTrigger.hpp"
#include "ANavigationDisruptor.hpp"
#include "ATriggerBox.hpp"
#include "EDynamicObstacleShape.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UFunction.hpp"
#include "UOdcObstacleComponent.hpp"
#include "UShapeComponent.hpp"
AHideTrigger* AHideTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HideTrigger");
    return (AHideTrigger*)res;
}
void AHideTrigger::OnEndAggroActorOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTrigger.OnEndAggroActorOverlap"));
    struct Params_OnEndAggroActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndAggroActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHideTrigger::OnEndActorOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTrigger.OnEndActorOverlap"));
    struct Params_OnEndActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHideTrigger::OnBeginAggroActorOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTrigger.OnBeginAggroActorOverlap"));
    struct Params_OnBeginAggroActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginAggroActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHideTrigger::Deactivate(bool bInFromEndPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTrigger.Deactivate"));
    struct Params_Deactivate {
        bool bInFromEndPlay; // 0x0
    }; // Size: 0x1
    Params_Deactivate params{};
    params.bInFromEndPlay = (bool)bInFromEndPlay;
    ProcessEvent(func, &params);
}
void AHideTrigger::OnBeginActorOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTrigger.OnBeginActorOverlap"));
    struct Params_OnBeginActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHideTrigger::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HideTrigger.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}
