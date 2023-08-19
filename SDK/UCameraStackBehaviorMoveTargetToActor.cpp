#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMoveTargetToActor.hpp"
UCameraStackBehaviorMoveTargetToActor* UCameraStackBehaviorMoveTargetToActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMoveTargetToActor");
    return (UCameraStackBehaviorMoveTargetToActor*)res;
}
