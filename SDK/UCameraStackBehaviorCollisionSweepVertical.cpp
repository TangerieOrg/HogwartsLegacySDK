#include "ECollisionChannel.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorCollisionSweepVertical.hpp"
UCameraStackBehaviorCollisionSweepVertical* UCameraStackBehaviorCollisionSweepVertical::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCollisionSweepVertical");
    return (UCameraStackBehaviorCollisionSweepVertical*)res;
}
