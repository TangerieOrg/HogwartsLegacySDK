#include "AActor.hpp"
#include "AVolumetricCloudsActor.hpp"
#include "FDataTableRowHandle.hpp"
#include "FVolumetricCloudsLightingParams.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "UVolumetricCloudsComponent.hpp"
AVolumetricCloudsActor* AVolumetricCloudsActor::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.VolumetricCloudsActor");
    return (AVolumetricCloudsActor*)res;
}
