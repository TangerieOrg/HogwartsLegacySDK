#pragma once
#include <cstdint>
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXCascadeManaged : public UWorldFXOctreeFX {
public:
    char pad_50[0x8];
    static UWorldFXOctreeFXCascadeManaged* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
