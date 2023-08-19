#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRPGUIInfo {
    FName SourceID; // 0x0
    int32_t SlotID; // 0x8
    bool bShowInHUD; // 0xc
    bool bShowInMenu; // 0xd
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
