#include "UBlendDomainComponentVisibilityComponent.hpp"
#include "UBlendDomainVisibilityComponent.hpp"
UBlendDomainComponentVisibilityComponent* UBlendDomainComponentVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainComponentVisibilityComponent");
    return (UBlendDomainComponentVisibilityComponent*)res;
}
