#pragma once
#include <cstdint>
#include "ELightUnits.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate {
public:
    ELightUnits IntensityUnits; // 0x30
    char pad_31[0x3];
    float SourceRadius; // 0x34
    float SourceLength; // 0x38
    float AttenuationRadius; // 0x3c
    static UDatasmithPointLightComponentTemplate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
