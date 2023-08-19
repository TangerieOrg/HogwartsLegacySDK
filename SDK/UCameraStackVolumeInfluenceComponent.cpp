#include "FCameraStackVolumeInfluence.hpp"
#include "UActorComponent.hpp"
#include "UCameraStackVolumeInfluenceComponent.hpp"
UCameraStackVolumeInfluenceComponent* UCameraStackVolumeInfluenceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackVolumeInfluenceComponent");
    return (UCameraStackVolumeInfluenceComponent*)res;
}
