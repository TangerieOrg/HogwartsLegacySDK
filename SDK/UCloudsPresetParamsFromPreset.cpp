#include "FDataTableRowHandle.hpp"
#include "UCloudsPresetParams.hpp"
#include "UCloudsPresetParamsFromPreset.hpp"
UCloudsPresetParamsFromPreset* UCloudsPresetParamsFromPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudsPresetParamsFromPreset");
    return (UCloudsPresetParamsFromPreset*)res;
}
