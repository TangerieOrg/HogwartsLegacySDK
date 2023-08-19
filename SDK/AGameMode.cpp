#include "AGameMode.hpp"
#include "AGameModeBase.hpp"
#include "APlayerState.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
bool AGameMode::ReadyToStartMatch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.ReadyToStartMatch"));
    struct Params_ReadyToStartMatch {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ReadyToStartMatch params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AGameMode* AGameMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameMode");
    return (AGameMode*)res;
}
void AGameMode::StartMatch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.StartMatch"));
    struct Params_StartMatch {
    }; // Size: 0x0
    Params_StartMatch params{};
    ProcessEvent(func, &params);
}
void AGameMode::SetBandwidthLimit(float AsyncIOBandwidthLimit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.SetBandwidthLimit"));
    struct Params_SetBandwidthLimit {
        float AsyncIOBandwidthLimit; // 0x0
    }; // Size: 0x4
    Params_SetBandwidthLimit params{};
    params.AsyncIOBandwidthLimit = (float)AsyncIOBandwidthLimit;
    ProcessEvent(func, &params);
}
void AGameMode::RestartGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.RestartGame"));
    struct Params_RestartGame {
    }; // Size: 0x0
    Params_RestartGame params{};
    ProcessEvent(func, &params);
}
void AGameMode::Say(FString Msg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.Say"));
    struct Params_Say {
        FString Msg; // 0x0
    }; // Size: 0x10
    Params_Say params{};
    params.Msg = (FString)Msg;
    ProcessEvent(func, &params);
}
bool AGameMode::ReadyToEndMatch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.ReadyToEndMatch"));
    struct Params_ReadyToEndMatch {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ReadyToEndMatch params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGameMode::K2_OnSetMatchState(FName NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.K2_OnSetMatchState"));
    struct Params_K2_OnSetMatchState {
        FName NewState; // 0x0
    }; // Size: 0x8
    Params_K2_OnSetMatchState params{};
    params.NewState = (FName)NewState;
    ProcessEvent(func, &params);
}
bool AGameMode::IsMatchInProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.IsMatchInProgress"));
    struct Params_IsMatchInProgress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMatchInProgress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName AGameMode::GetMatchState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.GetMatchState"));
    struct Params_GetMatchState {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMatchState params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void AGameMode::EndMatch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.EndMatch"));
    struct Params_EndMatch {
    }; // Size: 0x0
    Params_EndMatch params{};
    ProcessEvent(func, &params);
}
void AGameMode::AbortMatch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameMode.AbortMatch"));
    struct Params_AbortMatch {
    }; // Size: 0x0
    Params_AbortMatch params{};
    ProcessEvent(func, &params);
}
