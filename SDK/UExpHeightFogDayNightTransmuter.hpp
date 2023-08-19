#pragma once
#include <cstdint>
#include "UExpHeightFogTransmuter.hpp"
class UDayNightExpHeightFogAdjustments;
#pragma pack(push, 1)
class UExpHeightFogDayNightTransmuter : public UExpHeightFogTransmuter {
public:
    UDayNightExpHeightFogAdjustments* OverrideAdjustments; // 0x28
    bool bEnabled; // 0x30
    char pad_31[0x7];
    static UExpHeightFogDayNightTransmuter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
