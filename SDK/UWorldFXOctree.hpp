#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "UObject.hpp"
class UWorldFXOctreeFX;
#pragma pack(push, 1)
class UWorldFXOctree : public UObject {
public:
    char pad_28[0x58];
    FBox Bounds; // 0x80
    char pad_9c[0x4];
    TArray<UWorldFXOctreeFX*> ActiveFX; // 0xa0
    TArray<UWorldFXOctreeFX*> VisibleFX; // 0xb0
    bool bVisibleFXValid; // 0xc0
    char pad_c1[0x7];
    static UWorldFXOctree* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
