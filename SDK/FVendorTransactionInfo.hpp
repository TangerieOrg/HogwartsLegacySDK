#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVendorTransactionInfo {
    FName ItemName; // 0x0
    FName ItemGroup; // 0x8
    bool bIsBuying; // 0x10
    bool bIsStolen; // 0x11
    char pad_12[0x2];
}; // Size: 0x14
#pragma pack(pop)
