#include "UCameraStackBehaviorFocusDistanceToSecondaryTarget.hpp"
#include "UCameraStackBehaviorFocusDistanceToTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorFocusDistanceToSecondaryTarget* UCameraStackBehaviorFocusDistanceToSecondaryTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorFocusDistanceToSecondaryTarget");
    return (UCameraStackBehaviorFocusDistanceToSecondaryTarget*)res;
}
