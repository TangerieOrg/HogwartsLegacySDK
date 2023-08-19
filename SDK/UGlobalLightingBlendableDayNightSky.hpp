#pragma once
#include <cstdint>
#include "UGlobalLightingBlendableBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableDayNightSky : public UGlobalLightingBlendableBase {
public:
    bool bDisableSkySunDisk; // 0x28
    bool bDisableSkyMoonDisk; // 0x29
    char pad_2a[0x6];
    static UGlobalLightingBlendableDayNightSky* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
