#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableSkyAtmosphere.hpp"
#include "USkyAtmosphereParams.hpp"
UGlobalLightingBlendableSkyAtmosphere* UGlobalLightingBlendableSkyAtmosphere::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableSkyAtmosphere");
    return (UGlobalLightingBlendableSkyAtmosphere*)res;
}
