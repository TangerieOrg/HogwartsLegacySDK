#pragma once
#include <cstdint>
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXAmbientAudioManaged : public UWorldFXOctreeFX {
public:
    char pad_50[0x8];
    static UWorldFXOctreeFXAmbientAudioManaged* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
