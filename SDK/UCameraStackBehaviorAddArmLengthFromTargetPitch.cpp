#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorAddArmLengthFromTargetPitch.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddArmLengthFromTargetPitch* UCameraStackBehaviorAddArmLengthFromTargetPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddArmLengthFromTargetPitch");
    return (UCameraStackBehaviorAddArmLengthFromTargetPitch*)res;
}
