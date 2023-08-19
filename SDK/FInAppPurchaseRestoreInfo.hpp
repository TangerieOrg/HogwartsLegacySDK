#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInAppPurchaseRestoreInfo {
    FString Identifier; // 0x0
    FString ReceiptData; // 0x10
    FString TransactionIdentifier; // 0x20
}; // Size: 0x30
#pragma pack(pop)
