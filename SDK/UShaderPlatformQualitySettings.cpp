#include "FMaterialQualityOverrides.hpp"
#include "UObject.hpp"
#include "UShaderPlatformQualitySettings.hpp"
UShaderPlatformQualitySettings* UShaderPlatformQualitySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
    return (UShaderPlatformQualitySettings*)res;
}
