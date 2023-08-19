#include "UAIPerformTaskMoveToStation.hpp"
#include "UAIPerformTaskTeleportToStation.hpp"
UAIPerformTaskTeleportToStation* UAIPerformTaskTeleportToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskTeleportToStation");
    return (UAIPerformTaskTeleportToStation*)res;
}
