#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDeltaTime.hpp"
UMaterialExpressionDeltaTime* UMaterialExpressionDeltaTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDeltaTime");
    return (UMaterialExpressionDeltaTime*)res;
}
