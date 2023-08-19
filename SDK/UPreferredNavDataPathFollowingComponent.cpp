#include "FSoftClassPath.hpp"
#include "UPathFollowingComponent.hpp"
#include "UPreferredNavDataPathFollowingComponent.hpp"
UPreferredNavDataPathFollowingComponent* UPreferredNavDataPathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.PreferredNavDataPathFollowingComponent");
    return (UPreferredNavDataPathFollowingComponent*)res;
}
