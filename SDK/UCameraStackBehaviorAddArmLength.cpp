#include "UCameraStackBehaviorAddArmLength.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddArmLength* UCameraStackBehaviorAddArmLength::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddArmLength");
    return (UCameraStackBehaviorAddArmLength*)res;
}
