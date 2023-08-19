#include "UDrawPortalComponent.hpp"
#include "UPrimitiveComponent.hpp"
UDrawPortalComponent* UDrawPortalComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.DrawPortalComponent");
    return (UDrawPortalComponent*)res;
}
