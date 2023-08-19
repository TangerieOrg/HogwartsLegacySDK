#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_CollisionCenterOLD.hpp"
UCogGroupTargetPoint_CollisionCenterOLD* UCogGroupTargetPoint_CollisionCenterOLD::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_CollisionCenterOLD");
    return (UCogGroupTargetPoint_CollisionCenterOLD*)res;
}
