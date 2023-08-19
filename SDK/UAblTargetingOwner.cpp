#include "UAblTargetingBase.hpp"
#include "UAblTargetingOwner.hpp"
UAblTargetingOwner* UAblTargetingOwner::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingOwner");
    return (UAblTargetingOwner*)res;
}
