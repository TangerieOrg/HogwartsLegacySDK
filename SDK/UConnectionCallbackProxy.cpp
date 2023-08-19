#include "APlayerController.hpp"
#include "UConnectionCallbackProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UConnectionCallbackProxy* UConnectionCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy");
    return (UConnectionCallbackProxy*)res;
}
UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService"));
    struct Params_ConnectToService {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        UConnectionCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ConnectToService params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UConnectionCallbackProxy*)params.ReturnValue;
}
