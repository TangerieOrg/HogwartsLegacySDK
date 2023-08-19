#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionSingleLayerWaterMaterialOutput.hpp"
UMaterialExpressionSingleLayerWaterMaterialOutput* UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSingleLayerWaterMaterialOutput");
    return (UMaterialExpressionSingleLayerWaterMaterialOutput*)res;
}
