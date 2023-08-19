#include "AActor.hpp"
#include "AInstancedGroundSwarmingActor.hpp"
#include "EGroundSwarmingExitType.hpp"
#include "FGroundSwarmBurrowingParameters.hpp"
#include "FGroundSwarmExternals.hpp"
#include "FGroundSwarmGenerationParameters.hpp"
#include "FGroundSwarmInitialShapeSettings.hpp"
#include "FGroundSwarmVoxelCollisionParameters.hpp"
#include "FGroundSwarmerInitialConditions.hpp"
#include "FGroundSwarmerInitialState.hpp"
#include "FGroundSwarmingDeathVolumes.hpp"
#include "FGroundSwarmingExternalForces.hpp"
#include "FGroundSwarmingFocus.hpp"
#include "FGroundSwarmingForceModifiers.hpp"
#include "FGroundSwarmingParameters.hpp"
#include "FSimpleTopologyParams.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UParticleSystem.hpp"
void AInstancedGroundSwarmingActor::SetTargetFocii(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.SetTargetFocii"));
    struct Params_SetTargetFocii {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_SetTargetFocii params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
AInstancedGroundSwarmingActor* AInstancedGroundSwarmingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstancedGroundSwarmingActor");
    return (AInstancedGroundSwarmingActor*)res;
}
void AInstancedGroundSwarmingActor::Regenerate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.Regenerate"));
    struct Params_Regenerate {
    }; // Size: 0x0
    Params_Regenerate params{};
    ProcessEvent(func, &params);
}
void AInstancedGroundSwarmingActor::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void AInstancedGroundSwarmingActor::IsRunning(bool& bIsRunning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.IsRunning"));
    struct Params_IsRunning {
        bool bIsRunning; // 0x0
    }; // Size: 0x1
    Params_IsRunning params{};
    params.bIsRunning = (bool)bIsRunning;
    ProcessEvent(func, &params);
    bIsRunning = params.bIsRunning;
}
void AInstancedGroundSwarmingActor::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void AInstancedGroundSwarmingActor::BeginExiting(EGroundSwarmingExitType Type, bool disableTargets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.BeginExiting"));
    struct Params_BeginExiting {
        EGroundSwarmingExitType Type; // 0x0
        bool disableTargets; // 0x1
    }; // Size: 0x2
    Params_BeginExiting params{};
    params.Type = (EGroundSwarmingExitType)Type;
    params.disableTargets = (bool)disableTargets;
    ProcessEvent(func, &params);
}
void AInstancedGroundSwarmingActor::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
bool AInstancedGroundSwarmingActor::IsExiting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.IsExiting"));
    struct Params_IsExiting {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsExiting params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AInstancedGroundSwarmingActor::Go() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.Go"));
    struct Params_Go {
    }; // Size: 0x0
    Params_Go params{};
    ProcessEvent(func, &params);
}
void AInstancedGroundSwarmingActor::Generate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedGroundSwarmingActor.Generate"));
    struct Params_Generate {
    }; // Size: 0x0
    Params_Generate params{};
    ProcessEvent(func, &params);
}
