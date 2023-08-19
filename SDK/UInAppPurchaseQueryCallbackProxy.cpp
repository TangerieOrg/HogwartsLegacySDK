#include "APlayerController.hpp"
#include "UFunction.hpp"
#include "UInAppPurchaseQueryCallbackProxy.hpp"
#include "UObject.hpp"
UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
    return (UInAppPurchaseQueryCallbackProxy*)res;
}
UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery"));
    struct Params_CreateProxyObjectForInAppPurchaseQuery {
        APlayerController* PlayerController; // 0x0
        TArray<FString> ProductIdentifiers; // 0x8
        UInAppPurchaseQueryCallbackProxy* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateProxyObjectForInAppPurchaseQuery params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.ProductIdentifiers = (TArray<FString>)ProductIdentifiers;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ProductIdentifiers = params.ProductIdentifiers;
    return (UInAppPurchaseQueryCallbackProxy*)params.ReturnValue;
}
