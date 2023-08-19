#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLocalForces.hpp"
UMaterialExpressionLocalForces* UMaterialExpressionLocalForces::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLocalForces");
    return (UMaterialExpressionLocalForces*)res;
}
