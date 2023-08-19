#include "AActor.hpp"
#include "AVolumetricCloudsPreviewActor.hpp"
#include "UVolumetricCloudsPreviewComponent.hpp"
AVolumetricCloudsPreviewActor* AVolumetricCloudsPreviewActor::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.VolumetricCloudsPreviewActor");
    return (AVolumetricCloudsPreviewActor*)res;
}
