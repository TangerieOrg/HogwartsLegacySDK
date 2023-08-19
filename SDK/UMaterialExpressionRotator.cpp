#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRotator.hpp"
UMaterialExpressionRotator* UMaterialExpressionRotator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRotator");
    return (UMaterialExpressionRotator*)res;
}
