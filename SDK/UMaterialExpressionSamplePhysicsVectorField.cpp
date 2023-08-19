#include "EFieldVectorType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSamplePhysicsVectorField.hpp"
UMaterialExpressionSamplePhysicsVectorField* UMaterialExpressionSamplePhysicsVectorField::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSamplePhysicsVectorField");
    return (UMaterialExpressionSamplePhysicsVectorField*)res;
}
