#include "USocialAgentPathFollowerComponent.hpp"
#include "USocialAgentPawnComponent.hpp"
USocialAgentPathFollowerComponent* USocialAgentPathFollowerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialAgentPathFollowerComponent");
    return (USocialAgentPathFollowerComponent*)res;
}
