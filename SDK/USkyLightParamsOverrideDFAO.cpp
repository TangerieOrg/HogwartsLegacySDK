#include "FSkyLightDFAOParametersOverride.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsOverrideDFAO.hpp"
USkyLightParamsOverrideDFAO* USkyLightParamsOverrideDFAO::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsOverrideDFAO");
    return (USkyLightParamsOverrideDFAO*)res;
}
