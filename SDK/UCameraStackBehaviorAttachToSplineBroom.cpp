#include "UCameraStackBehaviorAttachToSpline.hpp"
#include "UCameraStackBehaviorAttachToSplineBroom.hpp"
UCameraStackBehaviorAttachToSplineBroom* UCameraStackBehaviorAttachToSplineBroom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorAttachToSplineBroom");
    return (UCameraStackBehaviorAttachToSplineBroom*)res;
}
