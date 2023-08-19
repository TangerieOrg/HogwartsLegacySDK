#include "AActor.hpp"
#include "UFunction.hpp"
#include "UPointAtActorBaseComponent.hpp"
#include "UPointAtActorTargetComponent.hpp"
UPointAtActorTargetComponent* UPointAtActorTargetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PointAtActorTargetComponent");
    return (UPointAtActorTargetComponent*)res;
}
void UPointAtActorTargetComponent::PointAtActorSetTarget(AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PointAtActorTargetComponent.PointAtActorSetTarget"));
    struct Params_PointAtActorSetTarget {
        AActor* TargetActor; // 0x0
    }; // Size: 0x8
    Params_PointAtActorSetTarget params{};
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
}
void UPointAtActorTargetComponent::PointAtActorClearTarget(AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PointAtActorTargetComponent.PointAtActorClearTarget"));
    struct Params_PointAtActorClearTarget {
        AActor* TargetActor; // 0x0
    }; // Size: 0x8
    Params_PointAtActorClearTarget params{};
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
}
