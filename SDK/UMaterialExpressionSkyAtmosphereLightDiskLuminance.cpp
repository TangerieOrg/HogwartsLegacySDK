#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereLightDiskLuminance.hpp"
UMaterialExpressionSkyAtmosphereLightDiskLuminance* UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance");
    return (UMaterialExpressionSkyAtmosphereLightDiskLuminance*)res;
}
