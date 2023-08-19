#include "UDirectionalLightParams.hpp"
#include "UObject.hpp"
UDirectionalLightParams* UDirectionalLightParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParams");
    return (UDirectionalLightParams*)res;
}
