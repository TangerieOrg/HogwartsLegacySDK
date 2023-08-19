#include "FVector.hpp"
#include "UCameraStackBehaviorAddTargetOffset.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddTargetOffset* UCameraStackBehaviorAddTargetOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddTargetOffset");
    return (UCameraStackBehaviorAddTargetOffset*)res;
}
