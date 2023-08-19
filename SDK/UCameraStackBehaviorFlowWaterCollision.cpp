#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorFlowWaterCollision.hpp"
UCameraStackBehaviorFlowWaterCollision* UCameraStackBehaviorFlowWaterCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorFlowWaterCollision");
    return (UCameraStackBehaviorFlowWaterCollision*)res;
}
