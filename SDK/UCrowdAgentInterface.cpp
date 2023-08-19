#include "UCrowdAgentInterface.hpp"
#include "UInterface.hpp"
UCrowdAgentInterface* UCrowdAgentInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.CrowdAgentInterface");
    return (UCrowdAgentInterface*)res;
}
