#include "FVector.hpp"
#include "UDirectionalLightConstantDirection.hpp"
#include "UDirectionalLightDirection.hpp"
UDirectionalLightConstantDirection* UDirectionalLightConstantDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightConstantDirection");
    return (UDirectionalLightConstantDirection*)res;
}
