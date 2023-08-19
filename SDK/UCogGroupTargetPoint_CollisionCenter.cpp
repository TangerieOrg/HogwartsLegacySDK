#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_CollisionCenter.hpp"
UCogGroupTargetPoint_CollisionCenter* UCogGroupTargetPoint_CollisionCenter::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_CollisionCenter");
    return (UCogGroupTargetPoint_CollisionCenter*)res;
}
