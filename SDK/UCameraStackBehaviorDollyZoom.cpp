#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorDollyZoom.hpp"
UCameraStackBehaviorDollyZoom* UCameraStackBehaviorDollyZoom::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorDollyZoom");
    return (UCameraStackBehaviorDollyZoom*)res;
}
