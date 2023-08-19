#include "UObject.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
UablMotionAdjustTargetLocationGetter* UablMotionAdjustTargetLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustTargetLocationGetter");
    return (UablMotionAdjustTargetLocationGetter*)res;
}
