#include "AVolume.hpp"
#include "AWLightProbeCullingVolume.hpp"
#include "EWCullingVolumeAreaType.hpp"
#include "EWCullingVolumeRemoveType.hpp"
AWLightProbeCullingVolume* AWLightProbeCullingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WLightProbeCullingVolume");
    return (AWLightProbeCullingVolume*)res;
}
