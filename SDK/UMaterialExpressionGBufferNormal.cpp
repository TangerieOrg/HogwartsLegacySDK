#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionGBufferNormal.hpp"
UMaterialExpressionGBufferNormal* UMaterialExpressionGBufferNormal::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionGBufferNormal");
    return (UMaterialExpressionGBufferNormal*)res;
}
