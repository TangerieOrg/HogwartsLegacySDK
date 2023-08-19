#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorCore.hpp"
UCameraStackBehaviorCore* UCameraStackBehaviorCore::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCore");
    return (UCameraStackBehaviorCore*)res;
}
