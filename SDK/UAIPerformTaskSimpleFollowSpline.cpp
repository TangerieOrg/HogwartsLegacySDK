#include "ASimpleSplineFollowerForAI.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskSimpleFollowSpline.hpp"
UAIPerformTaskSimpleFollowSpline* UAIPerformTaskSimpleFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskSimpleFollowSpline");
    return (UAIPerformTaskSimpleFollowSpline*)res;
}
