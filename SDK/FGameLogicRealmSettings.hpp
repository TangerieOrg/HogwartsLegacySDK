#pragma once
#include <cstdint>
#include "EGameLogicRealmPrivacy.hpp"
#pragma pack(push, 1)
struct FGameLogicRealmSettings {
    EGameLogicRealmPrivacy RealmPrivacy; // 0x0
    bool bLocked; // 0x1
    char pad_2[0x2];
    int32_t ElementPanelBitFlags; // 0x4
    int32_t ElementPanelMinimized; // 0x8
    char pad_c[0x54];
}; // Size: 0x60
#pragma pack(pop)
