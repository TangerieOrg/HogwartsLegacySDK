#include "UAISightTargetInterface.hpp"
#include "UInterface.hpp"
UAISightTargetInterface* UAISightTargetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISightTargetInterface");
    return (UAISightTargetInterface*)res;
}
