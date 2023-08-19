#include "UCameraStackBehaviorCollisionBase.hpp"
#include "UCameraStackBehaviorCollisionEyeOverlap.hpp"
UCameraStackBehaviorCollisionEyeOverlap* UCameraStackBehaviorCollisionEyeOverlap::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCollisionEyeOverlap");
    return (UCameraStackBehaviorCollisionEyeOverlap*)res;
}
