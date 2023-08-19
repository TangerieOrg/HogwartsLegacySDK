#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FTransformationOverlandData.hpp"
#include "UFunction.hpp"
#include "UStateEffectComponent.hpp"
#include "UTransformationOverlandComponent.hpp"
void UTransformationOverlandComponent::OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationOverlandComponent.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* DestroyedActor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnActorEndPlay params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
UTransformationOverlandComponent* UTransformationOverlandComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationOverlandComponent");
    return (UTransformationOverlandComponent*)res;
}
void UTransformationOverlandComponent::HealthZero(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationOverlandComponent.HealthZero"));
    struct Params_HealthZero {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_HealthZero params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
