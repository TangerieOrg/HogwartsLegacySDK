#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXDummy : public UWorldFXOctreeFX {
public:
    FVector Position; // 0x50
    float ExtraRadius; // 0x5c
    static UWorldFXOctreeFXDummy* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
