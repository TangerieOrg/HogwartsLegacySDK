#include "EPerformTaskSpeedMode.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskMoveToLocation.hpp"
UAIPerformTaskMoveToLocation* UAIPerformTaskMoveToLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskMoveToLocation");
    return (UAIPerformTaskMoveToLocation*)res;
}
