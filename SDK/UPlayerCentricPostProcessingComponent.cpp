#include "FPostProcessSettings.hpp"
#include "UActorComponent.hpp"
#include "UPlayerCentricPostProcessingComponent.hpp"
UPlayerCentricPostProcessingComponent* UPlayerCentricPostProcessingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PlayerCentricPostProcessingComponent");
    return (UPlayerCentricPostProcessingComponent*)res;
}
