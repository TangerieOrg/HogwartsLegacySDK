#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMaintainTargetFraming.hpp"
UCameraStackBehaviorMaintainTargetFraming* UCameraStackBehaviorMaintainTargetFraming::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMaintainTargetFraming");
    return (UCameraStackBehaviorMaintainTargetFraming*)res;
}
