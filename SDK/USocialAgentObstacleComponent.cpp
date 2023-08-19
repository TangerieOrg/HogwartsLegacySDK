#include "USocialAgentComponent.hpp"
#include "USocialAgentObstacleComponent.hpp"
USocialAgentObstacleComponent* USocialAgentObstacleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialAgentObstacleComponent");
    return (USocialAgentObstacleComponent*)res;
}
