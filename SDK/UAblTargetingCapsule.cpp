#include "UAblTargetingBase.hpp"
#include "UAblTargetingCapsule.hpp"
UAblTargetingCapsule* UAblTargetingCapsule::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingCapsule");
    return (UAblTargetingCapsule*)res;
}
