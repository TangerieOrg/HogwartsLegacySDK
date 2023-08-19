#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUDSPlayerState {
    char pad_0[0x230];
    FString EquippedInventoryItem; // 0x230
}; // Size: 0x240
#pragma pack(pop)
