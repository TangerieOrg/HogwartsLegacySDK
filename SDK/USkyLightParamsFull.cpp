#include "FSkyLightLightingParameters.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsFull.hpp"
USkyLightParamsFull* USkyLightParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsFull");
    return (USkyLightParamsFull*)res;
}
