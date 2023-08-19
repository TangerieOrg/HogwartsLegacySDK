#include "UAssetBlendDomainComponentVisibilityComponent.hpp"
#include "UAssetBlendDomainParentVisibilityComponent.hpp"
UAssetBlendDomainParentVisibilityComponent* UAssetBlendDomainParentVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.AssetBlendDomainParentVisibilityComponent");
    return (UAssetBlendDomainParentVisibilityComponent*)res;
}
