#include "FExpressionInput.hpp"
#include "UCurveLinearColor.hpp"
#include "UCurveLinearColorAtlas.hpp"
#include "UMaterialExpressionCurveAtlasRowParameter.hpp"
#include "UMaterialExpressionScalarParameter.hpp"
UMaterialExpressionCurveAtlasRowParameter* UMaterialExpressionCurveAtlasRowParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCurveAtlasRowParameter");
    return (UMaterialExpressionCurveAtlasRowParameter*)res;
}
