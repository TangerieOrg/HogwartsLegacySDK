#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorPushPull.hpp"
UCameraStackBehaviorPushPull* UCameraStackBehaviorPushPull::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorPushPull");
    return (UCameraStackBehaviorPushPull*)res;
}
