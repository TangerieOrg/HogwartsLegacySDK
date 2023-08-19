#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereAerialPerspective.hpp"
UMaterialExpressionSkyAtmosphereAerialPerspective* UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereAerialPerspective");
    return (UMaterialExpressionSkyAtmosphereAerialPerspective*)res;
}
