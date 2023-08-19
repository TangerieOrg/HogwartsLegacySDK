#pragma once
#include <cstdint>
#include "FInAppPurchaseProductRequest.hpp"
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class UInAppPurchaseRestoreCallbackProxy : public UObject {
public:
    char pad_28[0x68];
    static UInAppPurchaseRestoreCallbackProxy* StaticClass();
    static UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController);
}; // Size: 0x90
#pragma pack(pop)
