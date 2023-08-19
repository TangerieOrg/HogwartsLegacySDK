#include "APlayerController.hpp"
#include "FInAppPurchaseProductRequest.hpp"
#include "UFunction.hpp"
#include "UInAppPurchaseCallbackProxy.hpp"
#include "UObject.hpp"
UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
    return (UInAppPurchaseCallbackProxy*)res;
}
UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase"));
    struct Params_CreateProxyObjectForInAppPurchase {
        APlayerController* PlayerController; // 0x0
        FInAppPurchaseProductRequest ProductRequest; // 0x8
        UInAppPurchaseCallbackProxy* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateProxyObjectForInAppPurchase params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.ProductRequest = (FInAppPurchaseProductRequest)ProductRequest;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ProductRequest = params.ProductRequest;
    return (UInAppPurchaseCallbackProxy*)params.ReturnValue;
}
