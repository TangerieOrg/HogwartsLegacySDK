#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMatchFloorRotation.hpp"
UCameraStackBehaviorMatchFloorRotation* UCameraStackBehaviorMatchFloorRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMatchFloorRotation");
    return (UCameraStackBehaviorMatchFloorRotation*)res;
}
