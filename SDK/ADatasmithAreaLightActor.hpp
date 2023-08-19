#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "EDatasmithAreaLightActorShape.hpp"
#include "EDatasmithAreaLightActorType.hpp"
#include "ELightUnits.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
class UTextureLightProfile;
#pragma pack(push, 1)
class ADatasmithAreaLightActor : public AActor {
public:
    EComponentMobility::Type Mobility; // 0x248
    EDatasmithAreaLightActorType LightType; // 0x249
    EDatasmithAreaLightActorShape LightShape; // 0x24a
    char pad_24b[0x1];
    FVector2D Dimensions; // 0x24c
    float Intensity; // 0x254
    ELightUnits IntensityUnits; // 0x258
    char pad_259[0x3];
    FLinearColor Color; // 0x25c
    float Temperature; // 0x26c
    UTextureLightProfile* IESTexture; // 0x270
    bool bUseIESBrightness; // 0x278
    char pad_279[0x3];
    float IESBrightnessScale; // 0x27c
    FRotator Rotation; // 0x280
    float SourceRadius; // 0x28c
    float SourceLength; // 0x290
    float AttenuationRadius; // 0x294
    float SpotlightInnerAngle; // 0x298
    float SpotlightOuterAngle; // 0x29c
    static ADatasmithAreaLightActor* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
