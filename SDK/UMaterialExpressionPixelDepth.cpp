#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPixelDepth.hpp"
UMaterialExpressionPixelDepth* UMaterialExpressionPixelDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPixelDepth");
    return (UMaterialExpressionPixelDepth*)res;
}
