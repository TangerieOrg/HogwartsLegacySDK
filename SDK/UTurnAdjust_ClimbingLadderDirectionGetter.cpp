#include "UTurnAdjust_ClimbingLadderDirectionGetter.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
UTurnAdjust_ClimbingLadderDirectionGetter* UTurnAdjust_ClimbingLadderDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_ClimbingLadderDirectionGetter");
    return (UTurnAdjust_ClimbingLadderDirectionGetter*)res;
}
