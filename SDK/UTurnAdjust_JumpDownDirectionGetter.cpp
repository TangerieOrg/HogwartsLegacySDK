#include "UTurnAdjust_JumpDownDirectionGetter.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
UTurnAdjust_JumpDownDirectionGetter* UTurnAdjust_JumpDownDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_JumpDownDirectionGetter");
    return (UTurnAdjust_JumpDownDirectionGetter*)res;
}
