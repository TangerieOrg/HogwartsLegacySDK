#include "USimpleBlobShadowDecalCharacterComponent.hpp"
#include "USimpleBlobShadowDecalComponent.hpp"
USimpleBlobShadowDecalCharacterComponent* USimpleBlobShadowDecalCharacterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.SimpleBlobShadowDecalCharacterComponent");
    return (USimpleBlobShadowDecalCharacterComponent*)res;
}
