#pragma once
#include <cstdint>
#include "FOutfitDefinition.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UOutfitDefinitionWrapper : public UObject {
public:
    FOutfitDefinition OutfitDefinition; // 0x28
    static UOutfitDefinitionWrapper* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
