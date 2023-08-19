#include "UAblTargetingBase.hpp"
#include "UAblTargetingRaycast.hpp"
UAblTargetingRaycast* UAblTargetingRaycast::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingRaycast");
    return (UAblTargetingRaycast*)res;
}
