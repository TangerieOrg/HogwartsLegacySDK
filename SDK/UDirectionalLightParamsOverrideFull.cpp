#include "FDirectionalLightParametersOverride.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsOverrideFull.hpp"
UDirectionalLightParamsOverrideFull* UDirectionalLightParamsOverrideFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsOverrideFull");
    return (UDirectionalLightParamsOverrideFull*)res;
}
