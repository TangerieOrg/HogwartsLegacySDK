#include "UAblTargetingBase.hpp"
#include "UAblTargetingCone.hpp"
UAblTargetingCone* UAblTargetingCone::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingCone");
    return (UAblTargetingCone*)res;
}
