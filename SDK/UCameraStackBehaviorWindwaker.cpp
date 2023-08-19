#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorWindwaker.hpp"
UCameraStackBehaviorWindwaker* UCameraStackBehaviorWindwaker::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorWindwaker");
    return (UCameraStackBehaviorWindwaker*)res;
}
