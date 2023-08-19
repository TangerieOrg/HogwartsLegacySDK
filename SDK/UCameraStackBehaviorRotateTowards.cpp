#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotateTowards.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorRotateTowards* UCameraStackBehaviorRotateTowards::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotateTowards");
    return (UCameraStackBehaviorRotateTowards*)res;
}
