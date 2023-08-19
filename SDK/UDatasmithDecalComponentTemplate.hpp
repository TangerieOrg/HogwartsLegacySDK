#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UDatasmithObjectTemplate.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate {
public:
    int32_t SortOrder; // 0x30
    FVector DecalSize; // 0x34
    UMaterialInterface* Material; // 0x40
    static UDatasmithDecalComponentTemplate* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
