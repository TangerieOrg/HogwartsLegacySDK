#include "FDirectionalLightShafts.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsLightShafts.hpp"
UDirectionalLightParamsLightShafts* UDirectionalLightParamsLightShafts::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsLightShafts");
    return (UDirectionalLightParamsLightShafts*)res;
}
