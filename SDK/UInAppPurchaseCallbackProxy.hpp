#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
struct FInAppPurchaseProductRequest;
#pragma pack(push, 1)
class UInAppPurchaseCallbackProxy : public UObject {
public:
    char pad_28[0x58];
    static UInAppPurchaseCallbackProxy* StaticClass();
    static UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest);
}; // Size: 0x80
#pragma pack(pop)
