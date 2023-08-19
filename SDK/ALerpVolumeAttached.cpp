#include "AActor.hpp"
#include "ALerpVolumeAttached.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FVolumeCenterlineSettings.hpp"
#include "UFunction.hpp"
#include "ULerpVolumeInterpolant.hpp"
ALerpVolumeAttached* ALerpVolumeAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeAttached");
    return (ALerpVolumeAttached*)res;
}
void ALerpVolumeAttached::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumeAttached.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
void ALerpVolumeAttached::Recompute() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumeAttached.Recompute"));
    struct Params_Recompute {
    }; // Size: 0x0
    Params_Recompute params{};
    ProcessEvent(func, &params);
}
