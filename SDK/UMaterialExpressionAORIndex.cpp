#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAORIndex.hpp"
UMaterialExpressionAORIndex* UMaterialExpressionAORIndex::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAORIndex");
    return (UMaterialExpressionAORIndex*)res;
}
