#pragma once
#include <cstdint>
#include "FOutfitDefinition.hpp"
#include "ULoadEntry.hpp"
#pragma pack(push, 1)
class ULoadIntoCurrentOutfitLoadEntry : public ULoadEntry {
public:
    FOutfitDefinition OutfitToLoad; // 0x28
    char pad_78[0x8];
    static ULoadIntoCurrentOutfitLoadEntry* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
