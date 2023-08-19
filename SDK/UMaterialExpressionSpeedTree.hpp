#pragma once
#include <cstdint>
#include "ESpeedTreeGeometryType.hpp"
#include "ESpeedTreeLODType.hpp"
#include "ESpeedTreeWindType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSpeedTree : public UMaterialExpression {
public:
    FExpressionInput GeometryInput; // 0x40
    FExpressionInput WindInput; // 0x54
    FExpressionInput LODInput; // 0x68
    FExpressionInput ExtraBendWS; // 0x7c
    ESpeedTreeGeometryType GeometryType; // 0x90
    ESpeedTreeWindType WindType; // 0x91
    ESpeedTreeLODType LODType; // 0x92
    char pad_93[0x1];
    float BillboardThreshold; // 0x94
    bool bAccurateWindVelocities; // 0x98
    char pad_99[0x7];
    static UMaterialExpressionSpeedTree* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
