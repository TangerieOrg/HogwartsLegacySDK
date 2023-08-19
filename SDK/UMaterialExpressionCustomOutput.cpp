#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
UMaterialExpressionCustomOutput* UMaterialExpressionCustomOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCustomOutput");
    return (UMaterialExpressionCustomOutput*)res;
}
