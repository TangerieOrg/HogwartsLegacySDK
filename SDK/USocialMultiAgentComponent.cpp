#include "FSocialMultiAgentMember.hpp"
#include "UActorComponent.hpp"
#include "USocialMultiAgentComponent.hpp"
USocialMultiAgentComponent* USocialMultiAgentComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialMultiAgentComponent");
    return (USocialMultiAgentComponent*)res;
}
