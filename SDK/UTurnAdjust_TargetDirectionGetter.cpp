#include "UObject.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
UTurnAdjust_TargetDirectionGetter* UTurnAdjust_TargetDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_TargetDirectionGetter");
    return (UTurnAdjust_TargetDirectionGetter*)res;
}
