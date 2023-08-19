#include "UActorComponent.hpp"
#include "USocialAgentComponent.hpp"
USocialAgentComponent* USocialAgentComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialAgentComponent");
    return (USocialAgentComponent*)res;
}
