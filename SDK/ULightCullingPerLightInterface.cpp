#include "UInterface.hpp"
#include "ULightCullingPerLightInterface.hpp"
ULightCullingPerLightInterface* ULightCullingPerLightInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightCullingPerLightInterface");
    return (ULightCullingPerLightInterface*)res;
}
