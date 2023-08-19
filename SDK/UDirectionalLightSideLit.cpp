#include "UDirectionalLightDirection.hpp"
#include "UDirectionalLightSideLit.hpp"
UDirectionalLightSideLit* UDirectionalLightSideLit::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightSideLit");
    return (UDirectionalLightSideLit*)res;
}
