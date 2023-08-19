#include "UAmbulatoryBlobShadowDecalCharacterComponent.hpp"
#include "USimpleBlobShadowDecalCharacterComponent.hpp"
UAmbulatoryBlobShadowDecalCharacterComponent* UAmbulatoryBlobShadowDecalCharacterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbulatoryBlobShadowDecalCharacterComponent");
    return (UAmbulatoryBlobShadowDecalCharacterComponent*)res;
}
