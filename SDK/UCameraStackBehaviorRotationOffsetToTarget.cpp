#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotationOffsetToTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorRotationOffsetToTarget* UCameraStackBehaviorRotationOffsetToTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotationOffsetToTarget");
    return (UCameraStackBehaviorRotationOffsetToTarget*)res;
}
