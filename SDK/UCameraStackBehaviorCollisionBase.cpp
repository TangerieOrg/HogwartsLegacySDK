#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorCollisionBase.hpp"
UCameraStackBehaviorCollisionBase* UCameraStackBehaviorCollisionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCollisionBase");
    return (UCameraStackBehaviorCollisionBase*)res;
}
