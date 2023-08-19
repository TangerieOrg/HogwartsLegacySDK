#include "UAssetBlendDomainChildVisibilityComponent.hpp"
#include "UAssetBlendDomainComponentVisibilityComponent.hpp"
UAssetBlendDomainChildVisibilityComponent* UAssetBlendDomainChildVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.AssetBlendDomainChildVisibilityComponent");
    return (UAssetBlendDomainChildVisibilityComponent*)res;
}
