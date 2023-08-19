#include "UCameraStackCineComponent.hpp"
#include "UCineCameraComponent.hpp"
UCameraStackCineComponent* UCameraStackCineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackCineComponent");
    return (UCameraStackCineComponent*)res;
}
