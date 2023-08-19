#include "UAssetBlendDomainComponentVisibilityComponent.hpp"
#include "UAssetBlendDomainVisibilityComponent.hpp"
UAssetBlendDomainComponentVisibilityComponent* UAssetBlendDomainComponentVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.AssetBlendDomainComponentVisibilityComponent");
    return (UAssetBlendDomainComponentVisibilityComponent*)res;
}
