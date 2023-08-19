#pragma once
#include <cstdint>
#include "EFieldVectorType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSamplePhysicsVectorField : public UMaterialExpression {
public:
    FExpressionInput WorldPosition; // 0x40
    EFieldVectorType FieldTarget; // 0x54
    char pad_55[0x3];
    static UMaterialExpressionSamplePhysicsVectorField* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
