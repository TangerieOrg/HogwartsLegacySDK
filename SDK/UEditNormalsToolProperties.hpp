#pragma once
#include <cstdint>
#include "ENormalCalculationMethod.hpp"
#include "ESplitNormalMethod.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UEditNormalsToolProperties : public UInteractiveToolPropertySet {
public:
    bool bRecomputeNormals; // 0x60
    ENormalCalculationMethod NormalCalculationMethod; // 0x61
    bool bFixInconsistentNormals; // 0x62
    bool bInvertNormals; // 0x63
    ESplitNormalMethod SplitNormalMethod; // 0x64
    char pad_65[0x3];
    float SharpEdgeAngleThreshold; // 0x68
    bool bAllowSharpVertices; // 0x6c
    char pad_6d[0x3];
    static UEditNormalsToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
