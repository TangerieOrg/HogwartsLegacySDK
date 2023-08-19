#include "ALightClippingVolume.hpp"
#include "AVolume.hpp"
#include "ULightClippingVolumeComponent.hpp"
ALightClippingVolume* ALightClippingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingVolume");
    return (ALightClippingVolume*)res;
}
