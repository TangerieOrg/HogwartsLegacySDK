#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotateEyeToBisector.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorRotateEyeToBisector* UCameraStackBehaviorRotateEyeToBisector::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotateEyeToBisector");
    return (UCameraStackBehaviorRotateEyeToBisector*)res;
}
