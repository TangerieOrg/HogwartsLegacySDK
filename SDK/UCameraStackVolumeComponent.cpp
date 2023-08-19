#include "FCameraStackVolumeInterfaceProperties.hpp"
#include "UCameraStackVolumeComponent.hpp"
#include "UCameraStackVolumePreset.hpp"
#include "USceneComponent.hpp"
UCameraStackVolumeComponent* UCameraStackVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackVolumeComponent");
    return (UCameraStackVolumeComponent*)res;
}
