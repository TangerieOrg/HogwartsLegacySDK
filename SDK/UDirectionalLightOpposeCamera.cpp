#include "UDirectionalLightDirection.hpp"
#include "UDirectionalLightOpposeCamera.hpp"
UDirectionalLightOpposeCamera* UDirectionalLightOpposeCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightOpposeCamera");
    return (UDirectionalLightOpposeCamera*)res;
}
