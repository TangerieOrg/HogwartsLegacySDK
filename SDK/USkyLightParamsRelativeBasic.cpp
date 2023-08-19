#include "FSkyLightBasicParametersRelative.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsRelativeBasic.hpp"
USkyLightParamsRelativeBasic* USkyLightParamsRelativeBasic::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsRelativeBasic");
    return (USkyLightParamsRelativeBasic*)res;
}
