#include "ECollisionChannel.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorMirrorOnCollision.hpp"
UCameraStackBehaviorMirrorOnCollision* UCameraStackBehaviorMirrorOnCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMirrorOnCollision");
    return (UCameraStackBehaviorMirrorOnCollision*)res;
}
