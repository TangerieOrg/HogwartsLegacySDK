#include "FDefaultPBRValidationProfile.hpp"
#include "FPBRValidationProfile.hpp"
#include "UDeveloperSettings.hpp"
#include "UPBRValidatorSettings.hpp"
UPBRValidatorSettings* UPBRValidatorSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Renderer.PBRValidatorSettings");
    return (UPBRValidatorSettings*)res;
}
