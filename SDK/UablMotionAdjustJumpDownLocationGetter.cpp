#include "UablMotionAdjustJumpDownLocationGetter.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
UablMotionAdjustJumpDownLocationGetter* UablMotionAdjustJumpDownLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustJumpDownLocationGetter");
    return (UablMotionAdjustJumpDownLocationGetter*)res;
}
