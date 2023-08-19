#include "UAblTargetingBase.hpp"
#include "UAblTargetingSphere.hpp"
UAblTargetingSphere* UAblTargetingSphere::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingSphere");
    return (UAblTargetingSphere*)res;
}
