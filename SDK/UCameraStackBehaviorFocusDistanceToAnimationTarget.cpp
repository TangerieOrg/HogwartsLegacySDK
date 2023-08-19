#include "UCameraStackBehaviorFocusDistanceToAnimationTarget.hpp"
#include "UCameraStackBehaviorFocusDistanceToTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorFocusDistanceToAnimationTarget* UCameraStackBehaviorFocusDistanceToAnimationTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorFocusDistanceToAnimationTarget");
    return (UCameraStackBehaviorFocusDistanceToAnimationTarget*)res;
}
