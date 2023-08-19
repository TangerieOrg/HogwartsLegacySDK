#include "FExpressionInput.hpp"
#include "UMaterialExpressionBentNormalCustomOutput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
UMaterialExpressionBentNormalCustomOutput* UMaterialExpressionBentNormalCustomOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionBentNormalCustomOutput");
    return (UMaterialExpressionBentNormalCustomOutput*)res;
}
