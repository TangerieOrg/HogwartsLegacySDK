#include "UTurnAdjust_DesiredDirectionGetter.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
UTurnAdjust_DesiredDirectionGetter* UTurnAdjust_DesiredDirectionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TurnAdjust_DesiredDirectionGetter");
    return (UTurnAdjust_DesiredDirectionGetter*)res;
}
