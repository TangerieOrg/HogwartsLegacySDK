#include "AActor.hpp"
#include "AController.hpp"
#include "AGameModeBase.hpp"
#include "AGameSession.hpp"
#include "AGameStateBase.hpp"
#include "AInfo.hpp"
#include "APawn.hpp"
#include "APlayerController.hpp"
#include "APlayerState.hpp"
#include "AServerStatReplicator.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
AGameModeBase* AGameModeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameModeBase");
    return (AGameModeBase*)res;
}
void AGameModeBase::StartPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.StartPlay"));
    struct Params_StartPlay {
    }; // Size: 0x0
    Params_StartPlay params{};
    ProcessEvent(func, &params);
}
void AGameModeBase::K2_PostLogin(APlayerController* NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.K2_PostLogin"));
    struct Params_K2_PostLogin {
        APlayerController* NewPlayer; // 0x0
    }; // Size: 0x8
    Params_K2_PostLogin params{};
    params.NewPlayer = (APlayerController*)NewPlayer;
    ProcessEvent(func, &params);
}
APawn* AGameModeBase::SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.SpawnDefaultPawnFor"));
    struct Params_SpawnDefaultPawnFor {
        AController* NewPlayer; // 0x0
        AActor* StartSpot; // 0x8
        APawn* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SpawnDefaultPawnFor params{};
    params.NewPlayer = (AController*)NewPlayer;
    params.StartSpot = (AActor*)StartSpot;
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
APawn* AGameModeBase::SpawnDefaultPawnAtTransform(AController* NewPlayer, FTransform& SpawnTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.SpawnDefaultPawnAtTransform"));
    struct Params_SpawnDefaultPawnAtTransform {
        AController* NewPlayer; // 0x0
        char pad_8[0x8];
        FTransform SpawnTransform; // 0x10
        APawn* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_SpawnDefaultPawnAtTransform params{};
    params.NewPlayer = (AController*)NewPlayer;
    params.SpawnTransform = (FTransform)SpawnTransform;
    ProcessEvent(func, &params);
    SpawnTransform = params.SpawnTransform;
    return (APawn*)params.ReturnValue;
}
void AGameModeBase::RestartPlayer(AController* NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.RestartPlayer"));
    struct Params_RestartPlayer {
        AController* NewPlayer; // 0x0
    }; // Size: 0x8
    Params_RestartPlayer params{};
    params.NewPlayer = (AController*)NewPlayer;
    ProcessEvent(func, &params);
}
void AGameModeBase::RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.RestartPlayerAtPlayerStart"));
    struct Params_RestartPlayerAtPlayerStart {
        AController* NewPlayer; // 0x0
        AActor* StartSpot; // 0x8
    }; // Size: 0x10
    Params_RestartPlayerAtPlayerStart params{};
    params.NewPlayer = (AController*)NewPlayer;
    params.StartSpot = (AActor*)StartSpot;
    ProcessEvent(func, &params);
}
bool AGameModeBase::ShouldReset(AActor* ActorToReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.ShouldReset"));
    struct Params_ShouldReset {
        AActor* ActorToReset; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ShouldReset params{};
    params.ActorToReset = (AActor*)ActorToReset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGameModeBase::RestartPlayerAtTransform(AController* NewPlayer, FTransform& SpawnTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.RestartPlayerAtTransform"));
    struct Params_RestartPlayerAtTransform {
        AController* NewPlayer; // 0x0
        char pad_8[0x8];
        FTransform SpawnTransform; // 0x10
    }; // Size: 0x40
    Params_RestartPlayerAtTransform params{};
    params.NewPlayer = (AController*)NewPlayer;
    params.SpawnTransform = (FTransform)SpawnTransform;
    ProcessEvent(func, &params);
    SpawnTransform = params.SpawnTransform;
}
void AGameModeBase::ReturnToMainMenuHost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.ReturnToMainMenuHost"));
    struct Params_ReturnToMainMenuHost {
    }; // Size: 0x0
    Params_ReturnToMainMenuHost params{};
    ProcessEvent(func, &params);
}
bool AGameModeBase::HasMatchStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.HasMatchStarted"));
    struct Params_HasMatchStarted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMatchStarted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGameModeBase::ResetLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.ResetLevel"));
    struct Params_ResetLevel {
    }; // Size: 0x0
    Params_ResetLevel params{};
    ProcessEvent(func, &params);
}
bool AGameModeBase::PlayerCanRestart(APlayerController* Player) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.PlayerCanRestart"));
    struct Params_PlayerCanRestart {
        APlayerController* Player; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PlayerCanRestart params{};
    params.Player = (APlayerController*)Player;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AGameModeBase::MustSpectate(APlayerController* NewPlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.MustSpectate"));
    struct Params_MustSpectate {
        APlayerController* NewPlayerController; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_MustSpectate params{};
    params.NewPlayerController = (APlayerController*)NewPlayerController;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGameModeBase::K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.K2_OnSwapPlayerControllers"));
    struct Params_K2_OnSwapPlayerControllers {
        APlayerController* OldPC; // 0x0
        APlayerController* NewPC; // 0x8
    }; // Size: 0x10
    Params_K2_OnSwapPlayerControllers params{};
    params.OldPC = (APlayerController*)OldPC;
    params.NewPC = (APlayerController*)NewPC;
    ProcessEvent(func, &params);
}
void AGameModeBase::K2_OnRestartPlayer(AController* NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.K2_OnRestartPlayer"));
    struct Params_K2_OnRestartPlayer {
        AController* NewPlayer; // 0x0
    }; // Size: 0x8
    Params_K2_OnRestartPlayer params{};
    params.NewPlayer = (AController*)NewPlayer;
    ProcessEvent(func, &params);
}
void AGameModeBase::K2_OnLogout(AController* ExitingController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.K2_OnLogout"));
    struct Params_K2_OnLogout {
        AController* ExitingController; // 0x0
    }; // Size: 0x8
    Params_K2_OnLogout params{};
    params.ExitingController = (AController*)ExitingController;
    ProcessEvent(func, &params);
}
void AGameModeBase::K2_OnChangeName(AController* Other, FString NewName, bool bNameChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.K2_OnChangeName"));
    struct Params_K2_OnChangeName {
        AController* Other; // 0x0
        FString NewName; // 0x8
        bool bNameChange; // 0x18
    }; // Size: 0x19
    Params_K2_OnChangeName params{};
    params.Other = (AController*)Other;
    params.NewName = (FString)NewName;
    params.bNameChange = (bool)bNameChange;
    ProcessEvent(func, &params);
}
AActor* AGameModeBase::K2_FindPlayerStart(AController* Player, FString IncomingName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.K2_FindPlayerStart"));
    struct Params_K2_FindPlayerStart {
        AController* Player; // 0x0
        FString IncomingName; // 0x8
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_K2_FindPlayerStart params{};
    params.Player = (AController*)Player;
    params.IncomingName = (FString)IncomingName;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AGameModeBase::InitStartSpot(AActor* StartSpot, AController* NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.InitStartSpot"));
    struct Params_InitStartSpot {
        AActor* StartSpot; // 0x0
        AController* NewPlayer; // 0x8
    }; // Size: 0x10
    Params_InitStartSpot params{};
    params.StartSpot = (AActor*)StartSpot;
    params.NewPlayer = (AController*)NewPlayer;
    ProcessEvent(func, &params);
}
void AGameModeBase::InitializeHUDForPlayer(APlayerController* NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.InitializeHUDForPlayer"));
    struct Params_InitializeHUDForPlayer {
        APlayerController* NewPlayer; // 0x0
    }; // Size: 0x8
    Params_InitializeHUDForPlayer params{};
    params.NewPlayer = (APlayerController*)NewPlayer;
    ProcessEvent(func, &params);
}
bool AGameModeBase::HasMatchEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.HasMatchEnded"));
    struct Params_HasMatchEnded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMatchEnded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AGameModeBase::CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.CanSpectate"));
    struct Params_CanSpectate {
        APlayerController* Viewer; // 0x0
        APlayerState* ViewTarget; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CanSpectate params{};
    params.Viewer = (APlayerController*)Viewer;
    params.ViewTarget = (APlayerState*)ViewTarget;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGameModeBase::HandleStartingNewPlayer(APlayerController* NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.HandleStartingNewPlayer"));
    struct Params_HandleStartingNewPlayer {
        APlayerController* NewPlayer; // 0x0
    }; // Size: 0x8
    Params_HandleStartingNewPlayer params{};
    params.NewPlayer = (APlayerController*)NewPlayer;
    ProcessEvent(func, &params);
}
int32_t AGameModeBase::GetNumSpectators() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.GetNumSpectators"));
    struct Params_GetNumSpectators {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumSpectators params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t AGameModeBase::GetNumPlayers() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.GetNumPlayers"));
    struct Params_GetNumPlayers {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumPlayers params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UClass* AGameModeBase::GetDefaultPawnClassForController(AController* InController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.GetDefaultPawnClassForController"));
    struct Params_GetDefaultPawnClassForController {
        AController* InController; // 0x0
        UClass* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDefaultPawnClassForController params{};
    params.InController = (AController*)InController;
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
AActor* AGameModeBase::FindPlayerStart(AController* Player, FString IncomingName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.FindPlayerStart"));
    struct Params_FindPlayerStart {
        AController* Player; // 0x0
        FString IncomingName; // 0x8
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_FindPlayerStart params{};
    params.Player = (AController*)Player;
    params.IncomingName = (FString)IncomingName;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* AGameModeBase::ChoosePlayerStart(AController* Player) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.ChoosePlayerStart"));
    struct Params_ChoosePlayerStart {
        AController* Player; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ChoosePlayerStart params{};
    params.Player = (AController*)Player;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AGameModeBase::ChangeName(AController* Controller, FString NewName, bool bNameChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameModeBase.ChangeName"));
    struct Params_ChangeName {
        AController* Controller; // 0x0
        FString NewName; // 0x8
        bool bNameChange; // 0x18
    }; // Size: 0x19
    Params_ChangeName params{};
    params.Controller = (AController*)Controller;
    params.NewName = (FString)NewName;
    params.bNameChange = (bool)bNameChange;
    ProcessEvent(func, &params);
}
