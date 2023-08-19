#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USurfaceImpactSettings : public UObject {
public:
    float VfxLandscapeLayerInfoWetnessOverrideThreshold; // 0x28
    float SfxLandscapeLayerInfoWetnessOverrideThreshold; // 0x2c
    float ImpactLandscapeLayerInfoWetnessOverrideThreshold; // 0x30
    char pad_34[0x4];
    TArray<FString> LandscapeWetnessLayerInfo; // 0x38
    static USurfaceImpactSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
