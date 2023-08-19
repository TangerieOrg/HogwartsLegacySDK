#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "UPostProcessWithBlendDomainComponent.hpp"
#include "USceneComponent.hpp"
UPostProcessWithBlendDomainComponent* UPostProcessWithBlendDomainComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessWithBlendDomainComponent");
    return (UPostProcessWithBlendDomainComponent*)res;
}
void UPostProcessWithBlendDomainComponent::AddOrUpdateBlendable() {}
