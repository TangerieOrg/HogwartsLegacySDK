#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UTurnBasedMatchInterface.hpp"
UTurnBasedMatchInterface* UTurnBasedMatchInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystem.TurnBasedMatchInterface");
    return (UTurnBasedMatchInterface*)res;
}
void UTurnBasedMatchInterface::OnMatchReceivedTurn(FString Match, bool bDidBecomeActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn"));
    struct Params_OnMatchReceivedTurn {
        FString Match; // 0x0
        bool bDidBecomeActive; // 0x10
    }; // Size: 0x11
    Params_OnMatchReceivedTurn params{};
    params.Match = (FString)Match;
    params.bDidBecomeActive = (bool)bDidBecomeActive;
    ProcessEvent(func, &params);
}
void UTurnBasedMatchInterface::OnMatchEnded(FString Match) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded"));
    struct Params_OnMatchEnded {
        FString Match; // 0x0
    }; // Size: 0x10
    Params_OnMatchEnded params{};
    params.Match = (FString)Match;
    ProcessEvent(func, &params);
}
