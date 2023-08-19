#include "AActor.hpp"
#include "FFrozenData.hpp"
#include "UFrozenComponent.hpp"
#include "UFunction.hpp"
#include "UStateEffectComponent.hpp"
UFrozenComponent* UFrozenComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FrozenComponent");
    return (UFrozenComponent*)res;
}
void UFrozenComponent::SetupDelegate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenComponent.SetupDelegate"));
    struct Params_SetupDelegate {
    }; // Size: 0x0
    Params_SetupDelegate params{};
    ProcessEvent(func, &params);
}
void UFrozenComponent::OnBroken(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenComponent.OnBroken"));
    struct Params_OnBroken {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnBroken params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
bool UFrozenComponent::RemoveFrozenActor(AActor* OutFrozenActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenComponent.RemoveFrozenActor"));
    struct Params_RemoveFrozenActor {
        AActor* OutFrozenActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveFrozenActor params{};
    params.OutFrozenActor = (AActor*)OutFrozenActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFrozenComponent::ClearFrozenActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenComponent.ClearFrozenActors"));
    struct Params_ClearFrozenActors {
    }; // Size: 0x0
    Params_ClearFrozenActors params{};
    ProcessEvent(func, &params);
}
void UFrozenComponent::AddFrozenActor(AActor* InFrozenActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenComponent.AddFrozenActor"));
    struct Params_AddFrozenActor {
        AActor* InFrozenActor; // 0x0
    }; // Size: 0x8
    Params_AddFrozenActor params{};
    params.InFrozenActor = (AActor*)InFrozenActor;
    ProcessEvent(func, &params);
}
void UFrozenComponent::AddToInstanceList(AActor* InInstigator, int32_t InMaxObjectInstancesPerInstigator, int32_t InMaxCharacterInstancesPerInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenComponent.AddToInstanceList"));
    struct Params_AddToInstanceList {
        AActor* InInstigator; // 0x0
        int32_t InMaxObjectInstancesPerInstigator; // 0x8
        int32_t InMaxCharacterInstancesPerInstigator; // 0xc
    }; // Size: 0x10
    Params_AddToInstanceList params{};
    params.InInstigator = (AActor*)InInstigator;
    params.InMaxObjectInstancesPerInstigator = (int32_t)InMaxObjectInstancesPerInstigator;
    params.InMaxCharacterInstancesPerInstigator = (int32_t)InMaxCharacterInstancesPerInstigator;
    ProcessEvent(func, &params);
}
