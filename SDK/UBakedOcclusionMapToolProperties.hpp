#pragma once
#include <cstdint>
#include "ENormalMapSpace.hpp"
#include "EOcclusionMapDistribution.hpp"
#include "EOcclusionMapPreview.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet {
public:
    EOcclusionMapPreview Preview; // 0x60
    int32_t OcclusionRays; // 0x64
    float MaxDistance; // 0x68
    float SpreadAngle; // 0x6c
    EOcclusionMapDistribution Distribution; // 0x70
    bool bGaussianBlur; // 0x74
    char pad_75[0x3];
    float BlurRadius; // 0x78
    float BiasAngle; // 0x7c
    ENormalMapSpace NormalSpace; // 0x80
    char pad_84[0x4];
    static UBakedOcclusionMapToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
