#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionVertexInterpolator.hpp"
UMaterialExpressionVertexInterpolator* UMaterialExpressionVertexInterpolator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVertexInterpolator");
    return (UMaterialExpressionVertexInterpolator*)res;
}
