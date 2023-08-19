#pragma once
#include <cstdint>
#include "ULoadEntry.hpp"
#pragma pack(push, 1)
class USetCurrentOutfitLoadEntry : public ULoadEntry {
public:
    char pad_28[0x8];
    static USetCurrentOutfitLoadEntry* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
