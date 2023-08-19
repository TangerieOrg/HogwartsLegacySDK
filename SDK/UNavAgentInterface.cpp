#include "UInterface.hpp"
#include "UNavAgentInterface.hpp"
UNavAgentInterface* UNavAgentInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavAgentInterface");
    return (UNavAgentInterface*)res;
}
