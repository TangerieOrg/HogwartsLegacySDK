#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.hpp"
UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance* UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance");
    return (UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance*)res;
}
