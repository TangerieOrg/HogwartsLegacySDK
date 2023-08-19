#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInAppPurchaseReceiptInfo {
    FString ItemName; // 0x0
    FString ItemId; // 0x10
    FString ValidationInfo; // 0x20
}; // Size: 0x30
#pragma pack(pop)
