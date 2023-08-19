#pragma once
#include <cstdint>
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXAudioManaged : public UWorldFXOctreeFX {
public:
    char pad_50[0x8];
    int32_t PlayingID; // 0x58
    char pad_5c[0x4];
    static UWorldFXOctreeFXAudioManaged* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
