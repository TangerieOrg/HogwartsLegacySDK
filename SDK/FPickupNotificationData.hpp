#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPickupNotificationData {
    FString ItemName; // 0x0
    FString DisplayName; // 0x10
    bool IsNameTranslatable; // 0x20
    char pad_21[0x7];
    FString ItemIcon; // 0x28
    int32_t ItemCount; // 0x38
    char pad_3c[0x4];
    FString HeaderText; // 0x40
    bool SpecialCollection; // 0x50
    char pad_51[0x3];
    FName ItemVariation; // 0x54
    char pad_5c[0x4];
}; // Size: 0x60
#pragma pack(pop)
