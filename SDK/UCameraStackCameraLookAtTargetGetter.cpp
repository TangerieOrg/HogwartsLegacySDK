#include "ECameraStackLookAtStrength.hpp"
#include "UCameraStackCameraLookAtTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackCameraLookAtTargetGetter* UCameraStackCameraLookAtTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackCameraLookAtTargetGetter");
    return (UCameraStackCameraLookAtTargetGetter*)res;
}
