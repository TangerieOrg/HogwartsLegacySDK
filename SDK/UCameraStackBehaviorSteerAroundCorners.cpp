#include "FCameraOptionName.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSteerAroundCorners.hpp"
UCameraStackBehaviorSteerAroundCorners* UCameraStackBehaviorSteerAroundCorners::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSteerAroundCorners");
    return (UCameraStackBehaviorSteerAroundCorners*)res;
}
