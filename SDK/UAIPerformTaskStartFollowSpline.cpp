#include "ASplineFollowerForAI.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskStartFollowSpline.hpp"
UAIPerformTaskStartFollowSpline* UAIPerformTaskStartFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskStartFollowSpline");
    return (UAIPerformTaskStartFollowSpline*)res;
}
