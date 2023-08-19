#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereLightIlluminance.hpp"
UMaterialExpressionSkyAtmosphereLightIlluminance* UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereLightIlluminance");
    return (UMaterialExpressionSkyAtmosphereLightIlluminance*)res;
}
