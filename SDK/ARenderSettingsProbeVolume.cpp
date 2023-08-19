#include "ARenderSettingsPostProcessingVolume.hpp"
#include "ARenderSettingsProbeVolume.hpp"
#include "FRenderSettingsPPProbesName.hpp"
#include "FRenderSettingsPPProbesToneMapping.hpp"
#include "UFunction.hpp"
ARenderSettingsProbeVolume* ARenderSettingsProbeVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsProbeVolume");
    return (ARenderSettingsProbeVolume*)res;
}
void ARenderSettingsProbeVolume::EditProbes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsProbeVolume.EditProbes"));
    struct Params_EditProbes {
    }; // Size: 0x0
    Params_EditProbes params{};
    ProcessEvent(func, &params);
}
