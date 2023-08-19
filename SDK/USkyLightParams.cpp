#include "UObject.hpp"
#include "USkyLightParams.hpp"
USkyLightParams* USkyLightParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParams");
    return (USkyLightParams*)res;
}
