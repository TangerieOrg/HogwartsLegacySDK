#include "FDirectionalLightAdvancedParameters.hpp"
#include "FDirectionalLightBasicParameters.hpp"
#include "FDirectionalLightShafts.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsSimple.hpp"
UDirectionalLightParamsSimple* UDirectionalLightParamsSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsSimple");
    return (UDirectionalLightParamsSimple*)res;
}
