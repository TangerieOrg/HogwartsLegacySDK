#include "UGlobalLightingBlendableInterface.hpp"
#include "UInterface.hpp"
UGlobalLightingBlendableInterface* UGlobalLightingBlendableInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableInterface");
    return (UGlobalLightingBlendableInterface*)res;
}
