#include "AController.hpp"
#include "AGameModeBase.hpp"
#include "AGameStateBase.hpp"
#include "AInfo.hpp"
#include "APlayerState.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
bool AGameStateBase::HasBegunPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.HasBegunPlay"));
    struct Params_HasBegunPlay {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasBegunPlay params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGameStateBase::OnRep_SpectatorClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.OnRep_SpectatorClass"));
    struct Params_OnRep_SpectatorClass {
    }; // Size: 0x0
    Params_OnRep_SpectatorClass params{};
    ProcessEvent(func, &params);
}
AGameStateBase* AGameStateBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameStateBase");
    return (AGameStateBase*)res;
}
void AGameStateBase::OnRep_GameModeClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.OnRep_GameModeClass"));
    struct Params_OnRep_GameModeClass {
    }; // Size: 0x0
    Params_OnRep_GameModeClass params{};
    ProcessEvent(func, &params);
}
void AGameStateBase::OnRep_ReplicatedWorldTimeSeconds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds"));
    struct Params_OnRep_ReplicatedWorldTimeSeconds {
    }; // Size: 0x0
    Params_OnRep_ReplicatedWorldTimeSeconds params{};
    ProcessEvent(func, &params);
}
float AGameStateBase::GetPlayerStartTime(AController* Controller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.GetPlayerStartTime"));
    struct Params_GetPlayerStartTime {
        AController* Controller; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlayerStartTime params{};
    params.Controller = (AController*)Controller;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AGameStateBase::OnRep_ReplicatedHasBegunPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay"));
    struct Params_OnRep_ReplicatedHasBegunPlay {
    }; // Size: 0x0
    Params_OnRep_ReplicatedHasBegunPlay params{};
    ProcessEvent(func, &params);
}
bool AGameStateBase::HasMatchStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.HasMatchStarted"));
    struct Params_HasMatchStarted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMatchStarted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AGameStateBase::HasMatchEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.HasMatchEnded"));
    struct Params_HasMatchEnded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMatchEnded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float AGameStateBase::GetServerWorldTimeSeconds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.GetServerWorldTimeSeconds"));
    struct Params_GetServerWorldTimeSeconds {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetServerWorldTimeSeconds params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float AGameStateBase::GetPlayerRespawnDelay(AController* Controller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameStateBase.GetPlayerRespawnDelay"));
    struct Params_GetPlayerRespawnDelay {
        AController* Controller; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlayerRespawnDelay params{};
    params.Controller = (AController*)Controller;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
