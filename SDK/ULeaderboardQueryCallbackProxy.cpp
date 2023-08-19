#include "APlayerController.hpp"
#include "UFunction.hpp"
#include "ULeaderboardQueryCallbackProxy.hpp"
#include "UObject.hpp"
ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
    return (ULeaderboardQueryCallbackProxy*)res;
}
ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery"));
    struct Params_CreateProxyObjectForIntQuery {
        APlayerController* PlayerController; // 0x0
        FName StatName; // 0x8
        ULeaderboardQueryCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateProxyObjectForIntQuery params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.StatName = (FName)StatName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULeaderboardQueryCallbackProxy*)params.ReturnValue;
}
