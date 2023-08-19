#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetRotationLimitsRelativeToTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorSetRotationLimitsRelativeToTarget* UCameraStackBehaviorSetRotationLimitsRelativeToTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetRotationLimitsRelativeToTarget");
    return (UCameraStackBehaviorSetRotationLimitsRelativeToTarget*)res;
}
