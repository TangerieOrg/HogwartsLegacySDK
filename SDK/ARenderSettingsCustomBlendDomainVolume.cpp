#include "ARenderSettingsCustomBlendDomainVolume.hpp"
#include "AVolume.hpp"
#include "FRenderSettingsCustomBlendDomainNameWithValue.hpp"
#include "UFunction.hpp"
ARenderSettingsCustomBlendDomainVolume* ARenderSettingsCustomBlendDomainVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainVolume");
    return (ARenderSettingsCustomBlendDomainVolume*)res;
}
void ARenderSettingsCustomBlendDomainVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsCustomBlendDomainVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
