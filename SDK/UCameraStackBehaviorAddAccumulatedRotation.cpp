#include "FRotator.hpp"
#include "UCameraStackBehaviorAddAccumulatedRotation.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddAccumulatedRotation* UCameraStackBehaviorAddAccumulatedRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddAccumulatedRotation");
    return (UCameraStackBehaviorAddAccumulatedRotation*)res;
}
