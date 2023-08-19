#include "UCloudLightingParams.hpp"
#include "UObject.hpp"
UCloudLightingParams* UCloudLightingParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParams");
    return (UCloudLightingParams*)res;
}
