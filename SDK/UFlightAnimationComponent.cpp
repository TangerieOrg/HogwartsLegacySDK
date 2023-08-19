#include "FBoneReferenceEx.hpp"
#include "UActorComponent.hpp"
#include "UFlightAnimationComponent.hpp"
UFlightAnimationComponent* UFlightAnimationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlightAnimationComponent");
    return (UFlightAnimationComponent*)res;
}
