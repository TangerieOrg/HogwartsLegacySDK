#include "UCameraStackComponent.hpp"
#include "UCameraStackSettings.hpp"
#include "UClass.hpp"
#include "USceneComponent.hpp"
UCameraStackComponent* UCameraStackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackComponent");
    return (UCameraStackComponent*)res;
}
