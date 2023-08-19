#include "UMaterialShaderQualitySettings.hpp"
#include "UObject.hpp"
UMaterialShaderQualitySettings* UMaterialShaderQualitySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings");
    return (UMaterialShaderQualitySettings*)res;
}
