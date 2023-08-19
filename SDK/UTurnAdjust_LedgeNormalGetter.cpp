#include "UTurnAdjust_LedgeNormalGetter.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
UTurnAdjust_LedgeNormalGetter* UTurnAdjust_LedgeNormalGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_LedgeNormalGetter");
    return (UTurnAdjust_LedgeNormalGetter*)res;
}
