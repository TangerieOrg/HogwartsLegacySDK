#include "UCameraStackBehaviorCollisionBase.hpp"
#include "UCameraStackBehaviorCollisionPrediction.hpp"
UCameraStackBehaviorCollisionPrediction* UCameraStackBehaviorCollisionPrediction::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCollisionPrediction");
    return (UCameraStackBehaviorCollisionPrediction*)res;
}
