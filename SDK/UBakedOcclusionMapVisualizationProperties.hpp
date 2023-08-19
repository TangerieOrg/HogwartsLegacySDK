#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet {
public:
    float BaseGrayLevel; // 0x60
    float OcclusionMultiplier; // 0x64
    static UBakedOcclusionMapVisualizationProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
