#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorLineOfSightDistance.hpp"
UCameraStackBehaviorLineOfSightDistance* UCameraStackBehaviorLineOfSightDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLineOfSightDistance");
    return (UCameraStackBehaviorLineOfSightDistance*)res;
}
