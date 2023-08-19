#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionGIReplace.hpp"
UMaterialExpressionGIReplace* UMaterialExpressionGIReplace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionGIReplace");
    return (UMaterialExpressionGIReplace*)res;
}
