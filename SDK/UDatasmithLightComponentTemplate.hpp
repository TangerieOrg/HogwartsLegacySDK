#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UDatasmithObjectTemplate.hpp"
class UMaterialInterface;
class UTextureLightProfile;
#pragma pack(push, 1)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate {
public:
    uint8_t bVisible : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    uint8_t CastShadows : 1; // 0x34
    uint8_t bUseTemperature : 1; // 0x34
    uint8_t bUseIESBrightness : 1; // 0x34
    uint8_t pad_bitfield_34_3 : 5;
    char pad_35[0x3];
    float Intensity; // 0x38
    float Temperature; // 0x3c
    float IESBrightnessScale; // 0x40
    FLinearColor LightColor; // 0x44
    char pad_54[0x4];
    UMaterialInterface* LightFunctionMaterial; // 0x58
    UTextureLightProfile* IESTexture; // 0x60
    static UDatasmithLightComponentTemplate* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
