#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVolumetricAdvancedMaterialInput.hpp"
UMaterialExpressionVolumetricAdvancedMaterialInput* UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVolumetricAdvancedMaterialInput");
    return (UMaterialExpressionVolumetricAdvancedMaterialInput*)res;
}
