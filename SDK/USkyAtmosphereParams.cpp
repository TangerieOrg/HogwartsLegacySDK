#include "UObject.hpp"
#include "USkyAtmosphereParams.hpp"
USkyAtmosphereParams* USkyAtmosphereParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParams");
    return (USkyAtmosphereParams*)res;
}
