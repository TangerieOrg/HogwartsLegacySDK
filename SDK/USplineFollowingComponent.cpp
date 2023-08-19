#include "UPathFollowingComponent.hpp"
#include "USocialAgentPawnComponent.hpp"
#include "USplineFollowingComponent.hpp"
USplineFollowingComponent* USplineFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SplineFollowingComponent");
    return (USplineFollowingComponent*)res;
}
