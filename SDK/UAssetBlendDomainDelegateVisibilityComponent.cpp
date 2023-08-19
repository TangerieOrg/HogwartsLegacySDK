#include "UAssetBlendDomainDelegateVisibilityComponent.hpp"
#include "UAssetBlendDomainVisibilityComponent.hpp"
UAssetBlendDomainDelegateVisibilityComponent* UAssetBlendDomainDelegateVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.AssetBlendDomainDelegateVisibilityComponent");
    return (UAssetBlendDomainDelegateVisibilityComponent*)res;
}
