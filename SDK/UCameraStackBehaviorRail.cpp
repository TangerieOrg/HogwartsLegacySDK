#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRail.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackBehaviorRail* UCameraStackBehaviorRail::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRail");
    return (UCameraStackBehaviorRail*)res;
}
