#include "FBlendDomain.hpp"
#include "UBlendDomainVisibilityComponent.hpp"
#include "UBlendDomainVisibilityComponentBase.hpp"
UBlendDomainVisibilityComponent* UBlendDomainVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainVisibilityComponent");
    return (UBlendDomainVisibilityComponent*)res;
}
