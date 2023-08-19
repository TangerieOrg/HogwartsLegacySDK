#include "UDirectionalLightDirection.hpp"
#include "UObject.hpp"
UDirectionalLightDirection* UDirectionalLightDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightDirection");
    return (UDirectionalLightDirection*)res;
}
