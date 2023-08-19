#include "APlayerController.hpp"
#include "FInAppPurchaseProductRequest2.hpp"
#include "UFunction.hpp"
#include "UInAppPurchaseRestoreCallbackProxy2.hpp"
#include "UObject.hpp"
UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2");
    return (UInAppPurchaseRestoreCallbackProxy2*)res;
}
UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore"));
    struct Params_CreateProxyObjectForInAppPurchaseRestore {
        TArray<FInAppPurchaseProductRequest2> ConsumableProductFlags; // 0x0
        APlayerController* PlayerController; // 0x10
        UInAppPurchaseRestoreCallbackProxy2* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateProxyObjectForInAppPurchaseRestore params{};
    params.ConsumableProductFlags = (TArray<FInAppPurchaseProductRequest2>)ConsumableProductFlags;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConsumableProductFlags = params.ConsumableProductFlags;
    return (UInAppPurchaseRestoreCallbackProxy2*)params.ReturnValue;
}
