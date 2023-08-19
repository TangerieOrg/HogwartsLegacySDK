#include "FLightingChannels.hpp"
#include "ULightComponentStateIntMap.hpp"
#include "ULightComponentStateLightingChannels.hpp"
ULightComponentStateLightingChannels* ULightComponentStateLightingChannels::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateLightingChannels");
    return (ULightComponentStateLightingChannels*)res;
}
