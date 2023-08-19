#pragma once
#include <cstdint>
#include "ERevolvePropertiesCapFillMode.hpp"
#include "ERevolvePropertiesPolygroupMode.hpp"
#include "ERevolvePropertiesQuadSplit.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class URevolveProperties : public UInteractiveToolPropertySet {
public:
    double RevolutionDegrees; // 0x60
    double RevolutionDegreesOffset; // 0x68
    int32_t Steps; // 0x70
    bool bReverseRevolutionDirection; // 0x74
    bool bFlipMesh; // 0x75
    bool bProfileIsCrossSectionOfSide; // 0x76
    ERevolvePropertiesPolygroupMode PolygroupMode; // 0x77
    ERevolvePropertiesQuadSplit QuadSplitMode; // 0x78
    char pad_79[0x7];
    double DiagonalProportionTolerance; // 0x80
    ERevolvePropertiesCapFillMode CapFillMode; // 0x88
    bool bWeldFullRevolution; // 0x89
    bool bWeldVertsOnAxis; // 0x8a
    char pad_8b[0x5];
    double AxisWeldTolerance; // 0x90
    bool bSharpNormals; // 0x98
    char pad_99[0x7];
    double SharpNormalAngleTolerance; // 0xa0
    bool bFlipVs; // 0xa8
    bool bUVsSkipFullyWeldedEdges; // 0xa9
    char pad_aa[0x6];
    static URevolveProperties* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
