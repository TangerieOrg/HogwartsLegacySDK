#include "UCloudsPresetParams.hpp"
#include "UObject.hpp"
UCloudsPresetParams* UCloudsPresetParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudsPresetParams");
    return (UCloudsPresetParams*)res;
}
