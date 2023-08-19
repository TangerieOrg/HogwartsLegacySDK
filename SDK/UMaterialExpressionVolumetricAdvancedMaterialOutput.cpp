#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionVolumetricAdvancedMaterialOutput.hpp"
UMaterialExpressionVolumetricAdvancedMaterialOutput* UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVolumetricAdvancedMaterialOutput");
    return (UMaterialExpressionVolumetricAdvancedMaterialOutput*)res;
}
