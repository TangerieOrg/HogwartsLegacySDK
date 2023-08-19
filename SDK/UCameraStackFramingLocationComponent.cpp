#include "UCameraStackFramingLocationComponent.hpp"
#include "USceneComponent.hpp"
UCameraStackFramingLocationComponent* UCameraStackFramingLocationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackFramingLocationComponent");
    return (UCameraStackFramingLocationComponent*)res;
}
