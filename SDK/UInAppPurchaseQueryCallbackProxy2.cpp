#include "APlayerController.hpp"
#include "UFunction.hpp"
#include "UInAppPurchaseQueryCallbackProxy2.hpp"
#include "UObject.hpp"
UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2");
    return (UInAppPurchaseQueryCallbackProxy2*)res;
}
UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery"));
    struct Params_CreateProxyObjectForInAppPurchaseQuery {
        APlayerController* PlayerController; // 0x0
        TArray<FString> ProductIdentifiers; // 0x8
        UInAppPurchaseQueryCallbackProxy2* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateProxyObjectForInAppPurchaseQuery params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.ProductIdentifiers = (TArray<FString>)ProductIdentifiers;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ProductIdentifiers = params.ProductIdentifiers;
    return (UInAppPurchaseQueryCallbackProxy2*)params.ReturnValue;
}
