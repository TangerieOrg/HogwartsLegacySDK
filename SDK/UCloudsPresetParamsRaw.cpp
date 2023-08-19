#include "FVolumetricCloudsPresetParameters.hpp"
#include "UCloudsPresetParams.hpp"
#include "UCloudsPresetParamsRaw.hpp"
UCloudsPresetParamsRaw* UCloudsPresetParamsRaw::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudsPresetParamsRaw");
    return (UCloudsPresetParamsRaw*)res;
}
