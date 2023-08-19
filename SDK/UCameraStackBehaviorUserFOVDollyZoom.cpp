#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorDollyZoom.hpp"
#include "UCameraStackBehaviorUserFOVDollyZoom.hpp"
UCameraStackBehaviorUserFOVDollyZoom* UCameraStackBehaviorUserFOVDollyZoom::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorUserFOVDollyZoom");
    return (UCameraStackBehaviorUserFOVDollyZoom*)res;
}
