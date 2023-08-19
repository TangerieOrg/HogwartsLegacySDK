#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInAppPurchaseProductRequest {
    FString ProductIdentifier; // 0x0
    bool bIsConsumable; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
