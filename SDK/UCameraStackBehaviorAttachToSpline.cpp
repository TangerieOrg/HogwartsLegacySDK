#include "FVector.hpp"
#include "UCameraStackBehaviorAttachToSpline.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackBehaviorAttachToSpline* UCameraStackBehaviorAttachToSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAttachToSpline");
    return (UCameraStackBehaviorAttachToSpline*)res;
}
