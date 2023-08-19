#include "FSkyLightBasicParameters.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsSimple.hpp"
USkyLightParamsSimple* USkyLightParamsSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsSimple");
    return (USkyLightParamsSimple*)res;
}
