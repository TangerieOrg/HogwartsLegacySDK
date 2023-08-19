#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMoveTargetToIKHeight.hpp"
UCameraStackBehaviorMoveTargetToIKHeight* UCameraStackBehaviorMoveTargetToIKHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorMoveTargetToIKHeight");
    return (UCameraStackBehaviorMoveTargetToIKHeight*)res;
}
