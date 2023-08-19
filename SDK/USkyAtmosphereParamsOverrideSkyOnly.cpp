#include "FSkyAtmosphereSkyOnlyParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#include "USkyAtmosphereParamsOverrideSkyOnly.hpp"
USkyAtmosphereParamsOverrideSkyOnly* USkyAtmosphereParamsOverrideSkyOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParamsOverrideSkyOnly");
    return (USkyAtmosphereParamsOverrideSkyOnly*)res;
}
