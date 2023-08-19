#include "AInfo.hpp"
#include "AWLightProbesVolume.hpp"
#include "UWLightProbesVolumeComponent.hpp"
AWLightProbesVolume* AWLightProbesVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WLightProbesVolume");
    return (AWLightProbesVolume*)res;
}
