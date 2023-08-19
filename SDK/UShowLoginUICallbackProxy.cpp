#include "APlayerController.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UShowLoginUICallbackProxy.hpp"
UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy");
    return (UShowLoginUICallbackProxy*)res;
}
UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI"));
    struct Params_ShowExternalLoginUI {
        UObject* WorldContextObject; // 0x0
        APlayerController* InPlayerController; // 0x8
        UShowLoginUICallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ShowExternalLoginUI params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InPlayerController = (APlayerController*)InPlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UShowLoginUICallbackProxy*)params.ReturnValue;
}
