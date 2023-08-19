#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class UInAppPurchaseQueryCallbackProxy : public UObject {
public:
    char pad_28[0x68];
    static UInAppPurchaseQueryCallbackProxy* StaticClass();
    static UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers);
}; // Size: 0x90
#pragma pack(pop)
