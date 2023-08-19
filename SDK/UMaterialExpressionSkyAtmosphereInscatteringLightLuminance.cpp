#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereInscatteringLightLuminance.hpp"
UMaterialExpressionSkyAtmosphereInscatteringLightLuminance* UMaterialExpressionSkyAtmosphereInscatteringLightLuminance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereInscatteringLightLuminance");
    return (UMaterialExpressionSkyAtmosphereInscatteringLightLuminance*)res;
}
