#include "APlayerController.hpp"
#include "FInAppPurchaseProductRequest.hpp"
#include "UFunction.hpp"
#include "UInAppPurchaseRestoreCallbackProxy.hpp"
#include "UObject.hpp"
UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
    return (UInAppPurchaseRestoreCallbackProxy*)res;
}
UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore"));
    struct Params_CreateProxyObjectForInAppPurchaseRestore {
        TArray<FInAppPurchaseProductRequest> ConsumableProductFlags; // 0x0
        APlayerController* PlayerController; // 0x10
        UInAppPurchaseRestoreCallbackProxy* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateProxyObjectForInAppPurchaseRestore params{};
    params.ConsumableProductFlags = (TArray<FInAppPurchaseProductRequest>)ConsumableProductFlags;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConsumableProductFlags = params.ConsumableProductFlags;
    return (UInAppPurchaseRestoreCallbackProxy*)params.ReturnValue;
}
