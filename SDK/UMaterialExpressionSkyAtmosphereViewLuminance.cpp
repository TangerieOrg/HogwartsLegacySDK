#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereViewLuminance.hpp"
UMaterialExpressionSkyAtmosphereViewLuminance* UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereViewLuminance");
    return (UMaterialExpressionSkyAtmosphereViewLuminance*)res;
}
