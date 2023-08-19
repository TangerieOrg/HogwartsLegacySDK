#include "ECoverageShapeType.hpp"
#include "UPrimitiveComponent.hpp"
#include "UVolumetricCloudsCoverageComponent.hpp"
UVolumetricCloudsCoverageComponent* UVolumetricCloudsCoverageComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.VolumetricCloudsCoverageComponent");
    return (UVolumetricCloudsCoverageComponent*)res;
}
