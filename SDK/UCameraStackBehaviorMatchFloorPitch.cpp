#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMatchFloorPitch.hpp"
UCameraStackBehaviorMatchFloorPitch* UCameraStackBehaviorMatchFloorPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMatchFloorPitch");
    return (UCameraStackBehaviorMatchFloorPitch*)res;
}
