#include "UCameraStackBehaviorCore.hpp"
#include "UCameraStackBehaviorCore_Identity.hpp"
UCameraStackBehaviorCore_Identity* UCameraStackBehaviorCore_Identity::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCore_Identity");
    return (UCameraStackBehaviorCore_Identity*)res;
}
