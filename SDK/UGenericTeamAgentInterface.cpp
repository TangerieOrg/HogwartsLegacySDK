#include "UGenericTeamAgentInterface.hpp"
#include "UInterface.hpp"
UGenericTeamAgentInterface* UGenericTeamAgentInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.GenericTeamAgentInterface");
    return (UGenericTeamAgentInterface*)res;
}
