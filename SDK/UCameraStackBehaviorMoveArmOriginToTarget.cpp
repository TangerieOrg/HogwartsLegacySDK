#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMoveArmOriginToTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorMoveArmOriginToTarget* UCameraStackBehaviorMoveArmOriginToTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMoveArmOriginToTarget");
    return (UCameraStackBehaviorMoveArmOriginToTarget*)res;
}
