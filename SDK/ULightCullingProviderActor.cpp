#include "ALight.hpp"
#include "ULightCullingProvider.hpp"
#include "ULightCullingProviderActor.hpp"
ULightCullingProviderActor* ULightCullingProviderActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightCullingProviderActor");
    return (ULightCullingProviderActor*)res;
}
