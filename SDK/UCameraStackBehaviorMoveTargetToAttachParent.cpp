#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMoveTargetToAttachParent.hpp"
UCameraStackBehaviorMoveTargetToAttachParent* UCameraStackBehaviorMoveTargetToAttachParent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMoveTargetToAttachParent");
    return (UCameraStackBehaviorMoveTargetToAttachParent*)res;
}
