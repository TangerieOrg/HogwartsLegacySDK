#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorFocusDistanceToTarget.hpp"
UCameraStackBehaviorFocusDistanceToTarget* UCameraStackBehaviorFocusDistanceToTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorFocusDistanceToTarget");
    return (UCameraStackBehaviorFocusDistanceToTarget*)res;
}
