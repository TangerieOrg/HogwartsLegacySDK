#include "ALightClippingVolume.hpp"
#include "ELightClippingProviderVolumeMode.hpp"
#include "ULightClippingProvider.hpp"
#include "ULightClippingProviderVolume.hpp"
ULightClippingProviderVolume* ULightClippingProviderVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingProviderVolume");
    return (ULightClippingProviderVolume*)res;
}
