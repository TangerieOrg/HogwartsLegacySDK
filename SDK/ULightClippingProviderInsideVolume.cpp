#include "AInsideVolume.hpp"
#include "ELightClippingProviderInsideVolumeMode.hpp"
#include "ULightClippingProvider.hpp"
#include "ULightClippingProviderInsideVolume.hpp"
ULightClippingProviderInsideVolume* ULightClippingProviderInsideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingProviderInsideVolume");
    return (ULightClippingProviderInsideVolume*)res;
}
