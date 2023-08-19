#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetArmLength.hpp"
UCameraStackBehaviorSetArmLength* UCameraStackBehaviorSetArmLength::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetArmLength");
    return (UCameraStackBehaviorSetArmLength*)res;
}
