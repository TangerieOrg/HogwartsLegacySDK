#include "UInterface.hpp"
#include "UPathFollowingAgentInterface.hpp"
UPathFollowingAgentInterface* UPathFollowingAgentInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PathFollowingAgentInterface");
    return (UPathFollowingAgentInterface*)res;
}
