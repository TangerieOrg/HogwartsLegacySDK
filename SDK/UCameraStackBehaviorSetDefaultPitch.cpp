#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorSetDefaultPitch.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorSetDefaultPitch* UCameraStackBehaviorSetDefaultPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetDefaultPitch");
    return (UCameraStackBehaviorSetDefaultPitch*)res;
}
