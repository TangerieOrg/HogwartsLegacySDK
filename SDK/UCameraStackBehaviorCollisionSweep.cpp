#include "UCameraStackBehaviorCollisionBase.hpp"
#include "UCameraStackBehaviorCollisionSweep.hpp"
UCameraStackBehaviorCollisionSweep* UCameraStackBehaviorCollisionSweep::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCollisionSweep");
    return (UCameraStackBehaviorCollisionSweep*)res;
}
