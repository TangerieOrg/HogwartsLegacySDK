#include "FDirectionalLightShadows.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsShadows.hpp"
UDirectionalLightParamsShadows* UDirectionalLightParamsShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsShadows");
    return (UDirectionalLightParamsShadows*)res;
}
