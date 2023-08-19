#include "FVector.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddCameraSpaceTranslation* UCameraStackBehaviorAddCameraSpaceTranslation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddCameraSpaceTranslation");
    return (UCameraStackBehaviorAddCameraSpaceTranslation*)res;
}
