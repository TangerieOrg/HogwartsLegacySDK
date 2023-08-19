#include "UTurnAdjust_BlackboardDirectionGetter.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
UTurnAdjust_BlackboardDirectionGetter* UTurnAdjust_BlackboardDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_BlackboardDirectionGetter");
    return (UTurnAdjust_BlackboardDirectionGetter*)res;
}
