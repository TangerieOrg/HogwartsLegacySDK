#pragma once
#include <cstdint>
#include "EFieldScalarType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSamplePhysicsScalarField : public UMaterialExpression {
public:
    FExpressionInput WorldPosition; // 0x40
    EFieldScalarType FieldTarget; // 0x54
    char pad_55[0x3];
    static UMaterialExpressionSamplePhysicsScalarField* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
