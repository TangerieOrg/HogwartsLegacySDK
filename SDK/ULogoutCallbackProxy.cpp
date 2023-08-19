#include "APlayerController.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "ULogoutCallbackProxy.hpp"
#include "UObject.hpp"
ULogoutCallbackProxy* ULogoutCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy");
    return (ULogoutCallbackProxy*)res;
}
ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(UObject* WorldContextObject, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout"));
    struct Params_Logout {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        ULogoutCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Logout params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULogoutCallbackProxy*)params.ReturnValue;
}
