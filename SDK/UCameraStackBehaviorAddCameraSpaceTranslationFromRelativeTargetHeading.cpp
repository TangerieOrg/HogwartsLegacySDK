#include "FRuntimeCurveVector.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading* UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading");
    return (UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading*)res;
}
