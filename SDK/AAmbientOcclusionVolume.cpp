#include "AAmbientOcclusionVolume.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FCustomBlendableGTAO.hpp"
#include "FLinearColor.hpp"
#include "FPostProcessSettings.hpp"
#include "UFunction.hpp"
#include "UGlobalLightingBlendableGTAOFromAOVolume.hpp"
#include "UTextureCube.hpp"
AAmbientOcclusionVolume* AAmbientOcclusionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.AmbientOcclusionVolume");
    return (AAmbientOcclusionVolume*)res;
}
void AAmbientOcclusionVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.AmbientOcclusionVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
void AAmbientOcclusionVolume::UpdatePostProcessSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.AmbientOcclusionVolume.UpdatePostProcessSettings"));
    struct Params_UpdatePostProcessSettings {
    }; // Size: 0x0
    Params_UpdatePostProcessSettings params{};
    ProcessEvent(func, &params);
}
