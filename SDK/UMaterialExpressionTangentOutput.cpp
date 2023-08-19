#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionTangentOutput.hpp"
UMaterialExpressionTangentOutput* UMaterialExpressionTangentOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTangentOutput");
    return (UMaterialExpressionTangentOutput*)res;
}
