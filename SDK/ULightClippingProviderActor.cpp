#include "ALightClippingPlanes.hpp"
#include "ULightClippingProvider.hpp"
#include "ULightClippingProviderActor.hpp"
ULightClippingProviderActor* ULightClippingProviderActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingProviderActor");
    return (ULightClippingProviderActor*)res;
}
