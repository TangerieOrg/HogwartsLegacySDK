#include "UDirectionalLightOff.hpp"
#include "UDirectionalLightParams.hpp"
UDirectionalLightOff* UDirectionalLightOff::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightOff");
    return (UDirectionalLightOff*)res;
}
