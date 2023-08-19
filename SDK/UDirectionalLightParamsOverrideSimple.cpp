#include "FDirectionalLightBasicParametersOverride.hpp"
#include "FDirectionalLightShaftsOverride.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsOverrideSimple.hpp"
UDirectionalLightParamsOverrideSimple* UDirectionalLightParamsOverrideSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsOverrideSimple");
    return (UDirectionalLightParamsOverrideSimple*)res;
}
