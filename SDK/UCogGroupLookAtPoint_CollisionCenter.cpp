#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_CollisionCenter.hpp"
UCogGroupLookAtPoint_CollisionCenter* UCogGroupLookAtPoint_CollisionCenter::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_CollisionCenter");
    return (UCogGroupLookAtPoint_CollisionCenter*)res;
}
