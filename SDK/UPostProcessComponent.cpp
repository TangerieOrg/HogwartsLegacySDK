#include "FPostProcessSettings.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
UPostProcessComponent* UPostProcessComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PostProcessComponent");
    return (UPostProcessComponent*)res;
}
void UPostProcessComponent::AddOrUpdateBlendable() {}
