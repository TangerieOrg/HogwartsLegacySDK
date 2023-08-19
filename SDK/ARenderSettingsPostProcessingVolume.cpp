#include "ARenderSettingsPostProcessingVolume.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "UFunction.hpp"
ARenderSettingsPostProcessingVolume* ARenderSettingsPostProcessingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPostProcessingVolume");
    return (ARenderSettingsPostProcessingVolume*)res;
}
void ARenderSettingsPostProcessingVolume::Update() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsPostProcessingVolume.Update"));
    struct Params_Update {
    }; // Size: 0x0
    Params_Update params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsPostProcessingVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsPostProcessingVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
