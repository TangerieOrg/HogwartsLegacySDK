#include "AVolume.hpp"
#include "AVolumetricLightmapDensityVolume.hpp"
#include "FInt32Interval.hpp"
AVolumetricLightmapDensityVolume* AVolumetricLightmapDensityVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VolumetricLightmapDensityVolume");
    return (AVolumetricLightmapDensityVolume*)res;
}
