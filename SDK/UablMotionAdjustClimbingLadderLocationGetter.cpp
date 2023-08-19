#include "EClimbingLadderState\Type.hpp"
#include "UablMotionAdjustClimbingLadderLocationGetter.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
UablMotionAdjustClimbingLadderLocationGetter* UablMotionAdjustClimbingLadderLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustClimbingLadderLocationGetter");
    return (UablMotionAdjustClimbingLadderLocationGetter*)res;
}
