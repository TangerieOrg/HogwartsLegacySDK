#pragma once
#include <cstdint>
#include "FLandscapeSeasonParameters.hpp"
#include "FLinearColor.hpp"
#include "UObject.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
class ULandscapeLayerInfoObject : public UObject {
public:
    FName LayerName; // 0x28
    UPhysicalMaterial* PhysMaterial; // 0x30
    float Hardness; // 0x38
    FLinearColor LayerUsageDebugColor; // 0x3c
    char pad_4c[0x4];
    FLandscapeSeasonParameters SeasonParameters; // 0x50
    static ULandscapeLayerInfoObject* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
