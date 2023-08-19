#include "AActor.hpp"
#include "AVolumetricCloudsCoverageActor.hpp"
#include "UVolumetricCloudsCoverageComponent.hpp"
AVolumetricCloudsCoverageActor* AVolumetricCloudsCoverageActor::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.VolumetricCloudsCoverageActor");
    return (AVolumetricCloudsCoverageActor*)res;
}
