#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetFOV.hpp"
UCameraStackBehaviorSetFOV* UCameraStackBehaviorSetFOV::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetFOV");
    return (UCameraStackBehaviorSetFOV*)res;
}
