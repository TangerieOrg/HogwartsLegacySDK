#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorCameraStackComponent.hpp"
UCameraStackBehaviorCameraStackComponent* UCameraStackBehaviorCameraStackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCameraStackComponent");
    return (UCameraStackBehaviorCameraStackComponent*)res;
}
