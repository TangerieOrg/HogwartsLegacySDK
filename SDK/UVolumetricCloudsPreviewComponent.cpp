#include "EPreviewMode.hpp"
#include "USceneComponent.hpp"
#include "UVolumetricCloudsPreviewComponent.hpp"
UVolumetricCloudsPreviewComponent* UVolumetricCloudsPreviewComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.VolumetricCloudsPreviewComponent");
    return (UVolumetricCloudsPreviewComponent*)res;
}
