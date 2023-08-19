#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorNoOp.hpp"
UCameraStackBehaviorNoOp* UCameraStackBehaviorNoOp::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorNoOp");
    return (UCameraStackBehaviorNoOp*)res;
}
