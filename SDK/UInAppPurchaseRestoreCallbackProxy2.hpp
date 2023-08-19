#pragma once
#include <cstdint>
#include "FInAppPurchaseProductRequest2.hpp"
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject {
public:
    char pad_28[0x80];
    static UInAppPurchaseRestoreCallbackProxy2* StaticClass();
    static UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController);
}; // Size: 0xa8
#pragma pack(pop)
