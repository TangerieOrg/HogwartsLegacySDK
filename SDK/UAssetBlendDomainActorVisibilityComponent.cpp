#include "UAssetBlendDomainActorVisibilityComponent.hpp"
#include "UAssetBlendDomainComponentVisibilityComponent.hpp"
UAssetBlendDomainActorVisibilityComponent* UAssetBlendDomainActorVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.AssetBlendDomainActorVisibilityComponent");
    return (UAssetBlendDomainActorVisibilityComponent*)res;
}
