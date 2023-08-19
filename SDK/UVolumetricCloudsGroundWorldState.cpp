#include "FVolumetricCloudsGroundShadowsState.hpp"
#include "UObject.hpp"
#include "UTexture2DAlias.hpp"
#include "UVolumetricCloudsGroundWorldState.hpp"
UVolumetricCloudsGroundWorldState* UVolumetricCloudsGroundWorldState::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.VolumetricCloudsGroundWorldState");
    return (UVolumetricCloudsGroundWorldState*)res;
}
