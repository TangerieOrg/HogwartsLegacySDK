#include "UMaterialExpressionFunctionOutput.hpp"
#include "UMaterialExpressionMaterialLayerOutput.hpp"
UMaterialExpressionMaterialLayerOutput* UMaterialExpressionMaterialLayerOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMaterialLayerOutput");
    return (UMaterialExpressionMaterialLayerOutput*)res;
}
