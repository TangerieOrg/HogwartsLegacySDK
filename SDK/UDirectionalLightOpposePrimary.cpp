#include "UDirectionalLightDirection.hpp"
#include "UDirectionalLightOpposePrimary.hpp"
UDirectionalLightOpposePrimary* UDirectionalLightOpposePrimary::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightOpposePrimary");
    return (UDirectionalLightOpposePrimary*)res;
}
