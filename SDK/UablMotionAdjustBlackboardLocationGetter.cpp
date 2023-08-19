#include "UablMotionAdjustBlackboardLocationGetter.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
UablMotionAdjustBlackboardLocationGetter* UablMotionAdjustBlackboardLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustBlackboardLocationGetter");
    return (UablMotionAdjustBlackboardLocationGetter*)res;
}
