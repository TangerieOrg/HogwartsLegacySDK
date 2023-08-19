#include "UAIResourceInterface.hpp"
#include "UInterface.hpp"
UAIResourceInterface* UAIResourceInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIResourceInterface");
    return (UAIResourceInterface*)res;
}
