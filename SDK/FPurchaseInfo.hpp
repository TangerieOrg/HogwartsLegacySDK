#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPurchaseInfo {
    FString Identifier; // 0x0
    FString DisplayName; // 0x10
    FString DisplayDescription; // 0x20
    FString DisplayPrice; // 0x30
}; // Size: 0x40
#pragma pack(pop)
