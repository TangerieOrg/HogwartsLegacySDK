#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "UAutoDestroySubsystem.hpp"
#include "UFunction.hpp"
#include "UTickableWorldSubsystem.hpp"
UAutoDestroySubsystem* UAutoDestroySubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AutoDestroySubsystem");
    return (UAutoDestroySubsystem*)res;
}
void UAutoDestroySubsystem::OnActorEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AutoDestroySubsystem.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* Actor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnActorEndPlay params{};
    params.Actor = (AActor*)Actor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
