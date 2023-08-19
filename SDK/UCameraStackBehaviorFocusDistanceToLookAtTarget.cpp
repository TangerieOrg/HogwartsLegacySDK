#include "UCameraStackBehaviorFocusDistanceToLookAtTarget.hpp"
#include "UCameraStackBehaviorFocusDistanceToTarget.hpp"
UCameraStackBehaviorFocusDistanceToLookAtTarget* UCameraStackBehaviorFocusDistanceToLookAtTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorFocusDistanceToLookAtTarget");
    return (UCameraStackBehaviorFocusDistanceToLookAtTarget*)res;
}
