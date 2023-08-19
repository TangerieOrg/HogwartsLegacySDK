#include "UablMotionAdjustLedgeLocationGetter.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
UablMotionAdjustLedgeLocationGetter* UablMotionAdjustLedgeLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustLedgeLocationGetter");
    return (UablMotionAdjustLedgeLocationGetter*)res;
}
