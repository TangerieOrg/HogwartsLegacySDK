#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInAppPurchaseProductInfo {
    FString Identifier; // 0x0
    FString TransactionIdentifier; // 0x10
    FString DisplayName; // 0x20
    FString DisplayDescription; // 0x30
    FString DisplayPrice; // 0x40
    float RawPrice; // 0x50
    char pad_54[0x4];
    FString CurrencyCode; // 0x58
    FString CurrencySymbol; // 0x68
    FString DecimalSeparator; // 0x78
    FString GroupingSeparator; // 0x88
    FString ReceiptData; // 0x98
}; // Size: 0xa8
#pragma pack(pop)
