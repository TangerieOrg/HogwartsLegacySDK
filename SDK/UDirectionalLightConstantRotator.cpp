#include "FRotator.hpp"
#include "UDirectionalLightConstantRotator.hpp"
#include "UDirectionalLightDirection.hpp"
UDirectionalLightConstantRotator* UDirectionalLightConstantRotator::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightConstantRotator");
    return (UDirectionalLightConstantRotator*)res;
}
