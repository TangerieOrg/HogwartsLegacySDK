#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class UInAppPurchaseQueryCallbackProxy2 : public UObject {
public:
    char pad_28[0x40];
    static UInAppPurchaseQueryCallbackProxy2* StaticClass();
    static UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers);
}; // Size: 0x68
#pragma pack(pop)
