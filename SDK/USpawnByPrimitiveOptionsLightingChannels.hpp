#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsLightingChannels : public USpawnByPrimitiveOptions {
public:
    FLightingChannels LightingChannels; // 0x28
    char pad_29[0x7];
    static USpawnByPrimitiveOptionsLightingChannels* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
