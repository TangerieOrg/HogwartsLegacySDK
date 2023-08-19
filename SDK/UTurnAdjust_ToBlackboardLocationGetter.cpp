#include "UTurnAdjust_TargetDirectionGetter.hpp"
#include "UTurnAdjust_ToBlackboardLocationGetter.hpp"
UTurnAdjust_ToBlackboardLocationGetter* UTurnAdjust_ToBlackboardLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_ToBlackboardLocationGetter");
    return (UTurnAdjust_ToBlackboardLocationGetter*)res;
}
