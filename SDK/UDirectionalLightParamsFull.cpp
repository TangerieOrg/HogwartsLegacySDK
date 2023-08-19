#include "FDirectionalLightParameters.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsFull.hpp"
UDirectionalLightParamsFull* UDirectionalLightParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsFull");
    return (UDirectionalLightParamsFull*)res;
}
