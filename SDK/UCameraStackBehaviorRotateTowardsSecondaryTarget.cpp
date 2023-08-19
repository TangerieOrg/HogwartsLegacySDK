#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotateTowardsSecondaryTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorRotateTowardsSecondaryTarget* UCameraStackBehaviorRotateTowardsSecondaryTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotateTowardsSecondaryTarget");
    return (UCameraStackBehaviorRotateTowardsSecondaryTarget*)res;
}
