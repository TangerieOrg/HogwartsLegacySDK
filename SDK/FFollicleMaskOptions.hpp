#pragma once
#include <cstdint>
#include "EFollicleMaskChannel.hpp"
class UGroomAsset;
#pragma pack(push, 1)
struct FFollicleMaskOptions {
    UGroomAsset* Groom; // 0x0
    EFollicleMaskChannel Channel; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
