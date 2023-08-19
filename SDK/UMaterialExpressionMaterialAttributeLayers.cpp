#include "FGuid.hpp"
#include "FMaterialAttributesInput.hpp"
#include "FMaterialLayersFunctions.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMaterialAttributeLayers.hpp"
#include "UMaterialExpressionMaterialFunctionCall.hpp"
UMaterialExpressionMaterialAttributeLayers* UMaterialExpressionMaterialAttributeLayers::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMaterialAttributeLayers");
    return (UMaterialExpressionMaterialAttributeLayers*)res;
}
