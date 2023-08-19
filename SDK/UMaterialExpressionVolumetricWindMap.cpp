#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVolumetricWindMap.hpp"
UMaterialExpressionVolumetricWindMap* UMaterialExpressionVolumetricWindMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVolumetricWindMap");
    return (UMaterialExpressionVolumetricWindMap*)res;
}
