#include "APlayerController.hpp"
#include "EMPMatchOutcome\Outcome.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
#include "UQuitMatchCallbackProxy.hpp"
UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy");
    return (UQuitMatchCallbackProxy*)res;
}
UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, EMPMatchOutcome::Outcome Outcome, int32_t TurnTimeoutInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch"));
    struct Params_QuitMatch {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FString MatchID; // 0x10
        EMPMatchOutcome::Outcome Outcome; // 0x20
        char pad_21[0x3];
        int32_t TurnTimeoutInSeconds; // 0x24
        UQuitMatchCallbackProxy* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_QuitMatch params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.MatchID = (FString)MatchID;
    params.Outcome = (EMPMatchOutcome::Outcome)Outcome;
    params.TurnTimeoutInSeconds = (int32_t)TurnTimeoutInSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UQuitMatchCallbackProxy*)params.ReturnValue;
}
