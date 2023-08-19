#include "ARenderSettingsEmissiveAdapatationVolumeBase.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "UFunction.hpp"
ARenderSettingsEmissiveAdapatationVolumeBase* ARenderSettingsEmissiveAdapatationVolumeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsEmissiveAdapatationVolumeBase");
    return (ARenderSettingsEmissiveAdapatationVolumeBase*)res;
}
void ARenderSettingsEmissiveAdapatationVolumeBase::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsEmissiveAdapatationVolumeBase.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
