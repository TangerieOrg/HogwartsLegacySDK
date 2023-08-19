#include "EFieldScalarType.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSamplePhysicsScalarField.hpp"
UMaterialExpressionSamplePhysicsScalarField* UMaterialExpressionSamplePhysicsScalarField::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSamplePhysicsScalarField");
    return (UMaterialExpressionSamplePhysicsScalarField*)res;
}
