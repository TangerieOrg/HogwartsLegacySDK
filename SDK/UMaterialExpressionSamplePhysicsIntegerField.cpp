#include "EFieldIntegerType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSamplePhysicsIntegerField.hpp"
UMaterialExpressionSamplePhysicsIntegerField* UMaterialExpressionSamplePhysicsIntegerField::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSamplePhysicsIntegerField");
    return (UMaterialExpressionSamplePhysicsIntegerField*)res;
}
