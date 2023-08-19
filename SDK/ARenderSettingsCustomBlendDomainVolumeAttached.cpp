#include "AActor.hpp"
#include "ARenderSettingsCustomBlendDomainVolumeAttached.hpp"
#include "AVolume.hpp"
#include "FRenderSettingsCustomBlendDomainNameWithValue.hpp"
#include "UFunction.hpp"
ARenderSettingsCustomBlendDomainVolumeAttached* ARenderSettingsCustomBlendDomainVolumeAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainVolumeAttached");
    return (ARenderSettingsCustomBlendDomainVolumeAttached*)res;
}
void ARenderSettingsCustomBlendDomainVolumeAttached::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsCustomBlendDomainVolumeAttached.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
