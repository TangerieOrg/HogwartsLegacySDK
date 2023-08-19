#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereLuminance.hpp"
UMaterialExpressionSkyAtmosphereLuminance* UMaterialExpressionSkyAtmosphereLuminance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereLuminance");
    return (UMaterialExpressionSkyAtmosphereLuminance*)res;
}
