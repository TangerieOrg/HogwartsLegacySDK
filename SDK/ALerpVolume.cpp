#include "ALerpVolume.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FVolumeCenterlineSettings.hpp"
#include "UFunction.hpp"
#include "ULerpVolumeInterpolant.hpp"
ALerpVolume* ALerpVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolume");
    return (ALerpVolume*)res;
}
void ALerpVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
