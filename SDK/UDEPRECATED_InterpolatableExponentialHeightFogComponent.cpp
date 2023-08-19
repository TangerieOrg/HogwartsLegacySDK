#include "UActorComponent.hpp"
#include "UDEPRECATED_InterpolatableExponentialHeightFogComponent.hpp"
UDEPRECATED_InterpolatableExponentialHeightFogComponent* UDEPRECATED_InterpolatableExponentialHeightFogComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.InterpolatableExponentialHeightFogComponent");
    return (UDEPRECATED_InterpolatableExponentialHeightFogComponent*)res;
}
