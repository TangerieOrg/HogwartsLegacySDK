#include "AGameState.hpp"
#include "AGameStateBase.hpp"
#include "UFunction.hpp"
AGameState* AGameState::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameState");
    return (AGameState*)res;
}
void AGameState::OnRep_MatchState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameState.OnRep_MatchState"));
    struct Params_OnRep_MatchState {
    }; // Size: 0x0
    Params_OnRep_MatchState params{};
    ProcessEvent(func, &params);
}
void AGameState::OnRep_ElapsedTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameState.OnRep_ElapsedTime"));
    struct Params_OnRep_ElapsedTime {
    }; // Size: 0x0
    Params_OnRep_ElapsedTime params{};
    ProcessEvent(func, &params);
}
