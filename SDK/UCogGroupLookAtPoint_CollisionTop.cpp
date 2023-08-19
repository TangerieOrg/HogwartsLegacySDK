#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_CollisionTop.hpp"
UCogGroupLookAtPoint_CollisionTop* UCogGroupLookAtPoint_CollisionTop::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_CollisionTop");
    return (UCogGroupLookAtPoint_CollisionTop*)res;
}
