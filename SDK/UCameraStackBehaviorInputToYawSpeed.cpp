#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorInputToYawSpeed.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorInputToYawSpeed* UCameraStackBehaviorInputToYawSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorInputToYawSpeed");
    return (UCameraStackBehaviorInputToYawSpeed*)res;
}
