#pragma once
#include <cstdint>
#include "EFieldIntegerType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSamplePhysicsIntegerField : public UMaterialExpression {
public:
    FExpressionInput WorldPosition; // 0x40
    EFieldIntegerType FieldTarget; // 0x54
    char pad_55[0x3];
    static UMaterialExpressionSamplePhysicsIntegerField* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
