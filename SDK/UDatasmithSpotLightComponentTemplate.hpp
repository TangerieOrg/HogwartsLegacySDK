#pragma once
#include <cstdint>
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {
public:
    float InnerConeAngle; // 0x30
    float OuterConeAngle; // 0x34
    static UDatasmithSpotLightComponentTemplate* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
