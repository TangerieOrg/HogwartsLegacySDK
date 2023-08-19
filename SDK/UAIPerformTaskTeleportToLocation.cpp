#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskTeleportToLocation.hpp"
UAIPerformTaskTeleportToLocation* UAIPerformTaskTeleportToLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskTeleportToLocation");
    return (UAIPerformTaskTeleportToLocation*)res;
}
