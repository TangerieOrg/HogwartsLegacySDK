#include "APlayerController.hpp"
#include "UFunction.hpp"
#include "ULeaderboardFlushCallbackProxy.hpp"
#include "UObject.hpp"
ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
    return (ULeaderboardFlushCallbackProxy*)res;
}
ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush"));
    struct Params_CreateProxyObjectForFlush {
        APlayerController* PlayerController; // 0x0
        FName SessionName; // 0x8
        ULeaderboardFlushCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateProxyObjectForFlush params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.SessionName = (FName)SessionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULeaderboardFlushCallbackProxy*)params.ReturnValue;
}
