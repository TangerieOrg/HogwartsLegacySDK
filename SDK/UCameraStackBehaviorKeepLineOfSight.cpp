#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorKeepLineOfSight.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorKeepLineOfSight* UCameraStackBehaviorKeepLineOfSight::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorKeepLineOfSight");
    return (UCameraStackBehaviorKeepLineOfSight*)res;
}
