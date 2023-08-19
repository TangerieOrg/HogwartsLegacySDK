#include "FSkyAtmosphereParameters.hpp"
#include "USkyAtmosphereParams.hpp"
#include "USkyAtmosphereParamsFull.hpp"
USkyAtmosphereParamsFull* USkyAtmosphereParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParamsFull");
    return (USkyAtmosphereParamsFull*)res;
}
