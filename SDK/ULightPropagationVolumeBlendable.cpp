#include "FLightPropagationVolumeSettings.hpp"
#include "ULightPropagationVolumeBlendable.hpp"
#include "UObject.hpp"
ULightPropagationVolumeBlendable* ULightPropagationVolumeBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
    return (ULightPropagationVolumeBlendable*)res;
}
