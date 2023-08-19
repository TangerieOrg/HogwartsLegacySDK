#include "APlayerController.hpp"
#include "FInAppPurchaseProductRequest2.hpp"
#include "UFunction.hpp"
#include "UInAppPurchaseCallbackProxy2.hpp"
#include "UObject.hpp"
UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2");
    return (UInAppPurchaseCallbackProxy2*)res;
}
UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases"));
    struct Params_CreateProxyObjectForInAppPurchaseUnprocessedPurchases {
        APlayerController* PlayerController; // 0x0
        UInAppPurchaseCallbackProxy2* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateProxyObjectForInAppPurchaseUnprocessedPurchases params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInAppPurchaseCallbackProxy2*)params.ReturnValue;
}
UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned"));
    struct Params_CreateProxyObjectForInAppPurchaseQueryOwned {
        APlayerController* PlayerController; // 0x0
        UInAppPurchaseCallbackProxy2* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateProxyObjectForInAppPurchaseQueryOwned params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInAppPurchaseCallbackProxy2*)params.ReturnValue;
}
UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase"));
    struct Params_CreateProxyObjectForInAppPurchase {
        APlayerController* PlayerController; // 0x0
        FInAppPurchaseProductRequest2 ProductRequest; // 0x8
        UInAppPurchaseCallbackProxy2* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateProxyObjectForInAppPurchase params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.ProductRequest = (FInAppPurchaseProductRequest2)ProductRequest;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ProductRequest = params.ProductRequest;
    return (UInAppPurchaseCallbackProxy2*)params.ReturnValue;
}
