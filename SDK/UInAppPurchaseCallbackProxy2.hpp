#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
struct FInAppPurchaseProductRequest2;
#pragma pack(push, 1)
class UInAppPurchaseCallbackProxy2 : public UObject {
public:
    char pad_28[0x80];
    static UInAppPurchaseCallbackProxy2* StaticClass();
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest);
}; // Size: 0xa8
#pragma pack(pop)
