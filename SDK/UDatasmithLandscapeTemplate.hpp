#pragma once
#include <cstdint>
#include "UDatasmithObjectTemplate.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate {
public:
    UMaterialInterface* LandscapeMaterial; // 0x30
    int32_t StaticLightingLOD; // 0x38
    char pad_3c[0x4];
    static UDatasmithLandscapeTemplate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
