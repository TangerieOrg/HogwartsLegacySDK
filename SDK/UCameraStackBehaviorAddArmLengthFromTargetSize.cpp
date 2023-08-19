#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorAddArmLengthFromTargetSize.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorAddArmLengthFromTargetSize* UCameraStackBehaviorAddArmLengthFromTargetSize::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddArmLengthFromTargetSize");
    return (UCameraStackBehaviorAddArmLengthFromTargetSize*)res;
}
