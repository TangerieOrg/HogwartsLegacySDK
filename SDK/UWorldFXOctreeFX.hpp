#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWorldFXOctree;
class UWorldFXRule;
#pragma pack(push, 1)
class UWorldFXOctreeFX : public UObject {
public:
    UWorldFXOctree* OwningOctree; // 0x28
    char pad_30[0x10];
    UWorldFXRule* Rule; // 0x40
    char pad_48[0x8];
    static UWorldFXOctreeFX* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
