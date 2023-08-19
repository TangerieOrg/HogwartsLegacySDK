#include "FColor.hpp"
#include "UDrawFrustumComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTexture.hpp"
UDrawFrustumComponent* UDrawFrustumComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DrawFrustumComponent");
    return (UDrawFrustumComponent*)res;
}
