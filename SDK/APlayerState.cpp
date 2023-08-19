#include "AInfo.hpp"
#include "APawn.hpp"
#include "APlayerState.hpp"
#include "FUniqueNetIdRepl.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
APlayerState* APlayerState::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlayerState");
    return (APlayerState*)res;
}
void APlayerState::OnRep_UniqueId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.OnRep_UniqueId"));
    struct Params_OnRep_UniqueId {
    }; // Size: 0x0
    Params_OnRep_UniqueId params{};
    ProcessEvent(func, &params);
}
void APlayerState::ReceiveCopyProperties(APlayerState* NewPlayerState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.ReceiveCopyProperties"));
    struct Params_ReceiveCopyProperties {
        APlayerState* NewPlayerState; // 0x0
    }; // Size: 0x8
    Params_ReceiveCopyProperties params{};
    params.NewPlayerState = (APlayerState*)NewPlayerState;
    ProcessEvent(func, &params);
}
void APlayerState::ReceiveOverrideWith(APlayerState* OldPlayerState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.ReceiveOverrideWith"));
    struct Params_ReceiveOverrideWith {
        APlayerState* OldPlayerState; // 0x0
    }; // Size: 0x8
    Params_ReceiveOverrideWith params{};
    params.OldPlayerState = (APlayerState*)OldPlayerState;
    ProcessEvent(func, &params);
}
void APlayerState::OnRep_Score() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.OnRep_Score"));
    struct Params_OnRep_Score {
    }; // Size: 0x0
    Params_OnRep_Score params{};
    ProcessEvent(func, &params);
}
void APlayerState::OnRep_PlayerName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.OnRep_PlayerName"));
    struct Params_OnRep_PlayerName {
    }; // Size: 0x0
    Params_OnRep_PlayerName params{};
    ProcessEvent(func, &params);
}
void APlayerState::OnRep_bIsInactive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.OnRep_bIsInactive"));
    struct Params_OnRep_bIsInactive {
    }; // Size: 0x0
    Params_OnRep_bIsInactive params{};
    ProcessEvent(func, &params);
}
void APlayerState::OnRep_PlayerId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.OnRep_PlayerId"));
    struct Params_OnRep_PlayerId {
    }; // Size: 0x0
    Params_OnRep_PlayerId params{};
    ProcessEvent(func, &params);
}
bool APlayerState::IsOnlyASpectator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.IsOnlyASpectator"));
    struct Params_IsOnlyASpectator {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOnlyASpectator params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString APlayerState::GetPlayerName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerState.GetPlayerName"));
    struct Params_GetPlayerName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
