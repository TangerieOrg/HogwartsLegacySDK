#include "FRuntimeCurveVector.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize* UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddCameraSpaceTranslationFromTargetSize");
    return (UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize*)res;
}
