#include "UBlendDomainDelegateVisibilityComponent.hpp"
#include "UBlendDomainVisibilityComponent.hpp"
UBlendDomainDelegateVisibilityComponent* UBlendDomainDelegateVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainDelegateVisibilityComponent");
    return (UBlendDomainDelegateVisibilityComponent*)res;
}
