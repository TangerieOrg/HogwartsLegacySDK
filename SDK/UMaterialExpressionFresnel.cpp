#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFresnel.hpp"
UMaterialExpressionFresnel* UMaterialExpressionFresnel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFresnel");
    return (UMaterialExpressionFresnel*)res;
}
