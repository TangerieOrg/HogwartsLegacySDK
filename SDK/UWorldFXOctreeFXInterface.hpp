#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXInterface : public UWorldFXOctreeFX {
public:
    char pad_50[0x8];
    FVector Position; // 0x58
    float ExtraRadius; // 0x64
    bool bActive; // 0x68
    char pad_69[0x7];
    static UWorldFXOctreeFXInterface* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
