#include "FExpressionInput.hpp"
#include "UMaterialExpressionClearCoatNormalCustomOutput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
UMaterialExpressionClearCoatNormalCustomOutput* UMaterialExpressionClearCoatNormalCustomOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionClearCoatNormalCustomOutput");
    return (UMaterialExpressionClearCoatNormalCustomOutput*)res;
}
