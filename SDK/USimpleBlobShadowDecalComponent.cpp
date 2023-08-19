#include "UDecalComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "USimpleBlobShadowDecalComponent.hpp"
USimpleBlobShadowDecalComponent* USimpleBlobShadowDecalComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.SimpleBlobShadowDecalComponent");
    return (USimpleBlobShadowDecalComponent*)res;
}
