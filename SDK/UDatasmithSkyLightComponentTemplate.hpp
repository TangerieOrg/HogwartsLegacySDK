#pragma once
#include <cstdint>
#include "ESkyLightSourceType.hpp"
#include "UDatasmithObjectTemplate.hpp"
class UTextureCube;
#pragma pack(push, 1)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {
public:
    ESkyLightSourceType SourceType; // 0x30
    char pad_31[0x3];
    int32_t CubemapResolution; // 0x34
    UTextureCube* CubeMap; // 0x38
    static UDatasmithSkyLightComponentTemplate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
