#include "APlayerController.hpp"
#include "UDestroySessionCallbackProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy");
    return (UDestroySessionCallbackProxy*)res;
}
UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(UObject* WorldContextObject, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession"));
    struct Params_DestroySession {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        UDestroySessionCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DestroySession params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDestroySessionCallbackProxy*)params.ReturnValue;
}
