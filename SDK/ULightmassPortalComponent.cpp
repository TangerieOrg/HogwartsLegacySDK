#include "UBoxComponent.hpp"
#include "ULightmassPortalComponent.hpp"
#include "USceneComponent.hpp"
ULightmassPortalComponent* ULightmassPortalComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightmassPortalComponent");
    return (ULightmassPortalComponent*)res;
}
