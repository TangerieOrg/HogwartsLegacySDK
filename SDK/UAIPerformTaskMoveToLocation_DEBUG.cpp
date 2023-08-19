#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskMoveToLocation_DEBUG.hpp"
UAIPerformTaskMoveToLocation_DEBUG* UAIPerformTaskMoveToLocation_DEBUG::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskMoveToLocation_DEBUG");
    return (UAIPerformTaskMoveToLocation_DEBUG*)res;
}
