#pragma once
#include <cstdint>
#include "EOcclusionCalculationUIMode.hpp"
#include "EOcclusionTriangleSamplingUIMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet {
public:
    EOcclusionCalculationUIMode OcclusionTestMethod; // 0x60
    EOcclusionTriangleSamplingUIMode TriangleSampling; // 0x61
    char pad_62[0x6];
    double WindingIsoValue; // 0x68
    int32_t AddRandomRays; // 0x70
    int32_t AddTriangleSamples; // 0x74
    bool bOnlySelfOcclude; // 0x78
    char pad_79[0x7];
    static URemoveOccludedTrianglesToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
