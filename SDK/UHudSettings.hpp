#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHudSettings : public UObject {
public:
    uint8_t bShowHUD : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    char pad_29[0x7];
    TArray<FName> DebugDisplay; // 0x30
    static UHudSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
