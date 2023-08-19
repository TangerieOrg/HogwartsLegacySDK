#include "USimpleBlobShadowDecalComponent.hpp"
#include "USimpleBlobShadowDecalNoDrawComponent.hpp"
USimpleBlobShadowDecalNoDrawComponent* USimpleBlobShadowDecalNoDrawComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.SimpleBlobShadowDecalNoDrawComponent");
    return (USimpleBlobShadowDecalNoDrawComponent*)res;
}
