#include "UChaosNotifyHandlerInterface.hpp"
#include "UInterface.hpp"
UChaosNotifyHandlerInterface* UChaosNotifyHandlerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface");
    return (UChaosNotifyHandlerInterface*)res;
}
