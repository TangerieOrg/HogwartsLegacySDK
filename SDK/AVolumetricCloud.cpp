#include "AInfo.hpp"
#include "AVolumetricCloud.hpp"
#include "UVolumetricCloudComponent.hpp"
AVolumetricCloud* AVolumetricCloud::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VolumetricCloud");
    return (AVolumetricCloud*)res;
}
