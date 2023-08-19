#pragma once
#include <cstdint>
#include "EDatasmithAreaLightActorShape.hpp"
#include "EDatasmithAreaLightActorType.hpp"
#include "ELightUnits.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {
public:
    EDatasmithAreaLightActorType LightType; // 0x30
    EDatasmithAreaLightActorShape LightShape; // 0x31
    char pad_32[0x2];
    FVector2D Dimensions; // 0x34
    FLinearColor Color; // 0x3c
    float Intensity; // 0x4c
    ELightUnits IntensityUnits; // 0x50
    char pad_51[0x3];
    float Temperature; // 0x54
    char pad_58[0x28];
    bool bUseIESBrightness; // 0x80
    char pad_81[0x3];
    float IESBrightnessScale; // 0x84
    FRotator Rotation; // 0x88
    float SourceRadius; // 0x94
    float SourceLength; // 0x98
    float AttenuationRadius; // 0x9c
    static UDatasmithAreaLightActorTemplate* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
