#include "UGridPathFollowingComponent.hpp"
#include "UNavLocalGridManager.hpp"
#include "UPathFollowingComponent.hpp"
UGridPathFollowingComponent* UGridPathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.GridPathFollowingComponent");
    return (UGridPathFollowingComponent*)res;
}
