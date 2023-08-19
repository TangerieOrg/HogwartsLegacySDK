#include "UTurnAdjust_TargetDirectionGetter.hpp"
#include "UTurnAdjust_TowardsLedgeDirectionGetter.hpp"
UTurnAdjust_TowardsLedgeDirectionGetter* UTurnAdjust_TowardsLedgeDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_TowardsLedgeDirectionGetter");
    return (UTurnAdjust_TowardsLedgeDirectionGetter*)res;
}
