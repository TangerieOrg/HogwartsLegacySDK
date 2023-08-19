#include "FRuntimeCurveVector.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslationFromPitch.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddCameraSpaceTranslationFromPitch* UCameraStackBehaviorAddCameraSpaceTranslationFromPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddCameraSpaceTranslationFromPitch");
    return (UCameraStackBehaviorAddCameraSpaceTranslationFromPitch*)res;
}
