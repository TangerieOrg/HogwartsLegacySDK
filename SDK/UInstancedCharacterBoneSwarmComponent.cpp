#include "FBoneParticleTracker.hpp"
#include "FBoneSwarmGenerationParameters.hpp"
#include "FBoneSwarmerInitialConditions.hpp"
#include "FCharacterBoneProjectionParams.hpp"
#include "UActorComponent.hpp"
#include "UCharacterBoneProjector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInstancedCharacterBoneSwarmComponent.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UParticleSystem.hpp"
#include "USkinFXComponent.hpp"
UInstancedCharacterBoneSwarmComponent* UInstancedCharacterBoneSwarmComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstancedCharacterBoneSwarmComponent");
    return (UInstancedCharacterBoneSwarmComponent*)res;
}
void UInstancedCharacterBoneSwarmComponent::UnhideNext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.UnhideNext"));
    struct Params_UnhideNext {
    }; // Size: 0x0
    Params_UnhideNext params{};
    ProcessEvent(func, &params);
}
int32_t UInstancedCharacterBoneSwarmComponent::UnHide(int32_t howMany) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.UnHide"));
    struct Params_UnHide {
        int32_t howMany; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_UnHide params{};
    params.howMany = (int32_t)howMany;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UInstancedCharacterBoneSwarmComponent::UnhideAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.UnhideAll"));
    struct Params_UnhideAll {
    }; // Size: 0x0
    Params_UnhideAll params{};
    ProcessEvent(func, &params);
}
void UInstancedCharacterBoneSwarmComponent::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
int32_t UInstancedCharacterBoneSwarmComponent::RemainingHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.RemainingHidden"));
    struct Params_RemainingHidden {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_RemainingHidden params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UInstancedCharacterBoneSwarmComponent::Poof() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.Poof"));
    struct Params_Poof {
    }; // Size: 0x0
    Params_Poof params{};
    ProcessEvent(func, &params);
}
void UInstancedCharacterBoneSwarmComponent::KillAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedCharacterBoneSwarmComponent.KillAll"));
    struct Params_KillAll {
    }; // Size: 0x0
    Params_KillAll params{};
    ProcessEvent(func, &params);
}
