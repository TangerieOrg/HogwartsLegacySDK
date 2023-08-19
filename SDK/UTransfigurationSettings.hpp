#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTransfigurationSettings : public UObject {
public:
    char pad_28[0x28];
    float MinSecondsBetweenVanishments; // 0x50
    float FoliageHidingZOffset; // 0x54
    float BoundsMinZ; // 0x58
    float BoundsMaxZ; // 0x5c
    static UTransfigurationSettings* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
