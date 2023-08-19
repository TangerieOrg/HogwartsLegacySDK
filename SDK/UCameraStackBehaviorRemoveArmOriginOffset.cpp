#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRemoveArmOriginOffset.hpp"
UCameraStackBehaviorRemoveArmOriginOffset* UCameraStackBehaviorRemoveArmOriginOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRemoveArmOriginOffset");
    return (UCameraStackBehaviorRemoveArmOriginOffset*)res;
}
