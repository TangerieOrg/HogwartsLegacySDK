#include "APostProcessVolume.hpp"
#include "APostProcessVolumeWithBlendDomain.hpp"
#include "FBlendDomain.hpp"
#include "UFunction.hpp"
APostProcessVolumeWithBlendDomain* APostProcessVolumeWithBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessVolumeWithBlendDomain");
    return (APostProcessVolumeWithBlendDomain*)res;
}
void APostProcessVolumeWithBlendDomain::CopySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.PostProcessVolumeWithBlendDomain.CopySettings"));
    struct Params_CopySettings {
    }; // Size: 0x0
    Params_CopySettings params{};
    ProcessEvent(func, &params);
}
