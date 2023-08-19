#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "ULightComponentStateIntMap.hpp"
#pragma pack(push, 1)
class ULightComponentStateLightingChannels : public ULightComponentStateIntMap {
public:
    FLightingChannels LightingChannels; // 0x28
    char pad_29[0x7];
    static ULightComponentStateLightingChannels* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
