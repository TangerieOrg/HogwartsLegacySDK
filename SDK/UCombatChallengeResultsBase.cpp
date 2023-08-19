#include "UCombatChallengeResultsBase.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
void UCombatChallengeResultsBase::RestartFromDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatChallengeResultsBase.RestartFromDeath"));
    struct Params_RestartFromDeath {
    }; // Size: 0x0
    Params_RestartFromDeath params{};
    ProcessEvent(func, &params);
}
UCombatChallengeResultsBase* UCombatChallengeResultsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatChallengeResultsBase");
    return (UCombatChallengeResultsBase*)res;
}
void UCombatChallengeResultsBase::ExitRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatChallengeResultsBase.ExitRequested"));
    struct Params_ExitRequested {
    }; // Size: 0x0
    Params_ExitRequested params{};
    ProcessEvent(func, &params);
}
void UCombatChallengeResultsBase::ShowResultsScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatChallengeResultsBase.ShowResultsScreen"));
    struct Params_ShowResultsScreen {
    }; // Size: 0x0
    Params_ShowResultsScreen params{};
    ProcessEvent(func, &params);
}
void UCombatChallengeResultsBase::RestartRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatChallengeResultsBase.RestartRequested"));
    struct Params_RestartRequested {
    }; // Size: 0x0
    Params_RestartRequested params{};
    ProcessEvent(func, &params);
}
void UCombatChallengeResultsBase::OnPostGameSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatChallengeResultsBase.OnPostGameSave"));
    struct Params_OnPostGameSave {
    }; // Size: 0x0
    Params_OnPostGameSave params{};
    ProcessEvent(func, &params);
}
