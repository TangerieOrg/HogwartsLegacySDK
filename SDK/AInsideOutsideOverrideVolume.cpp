#include "AInsideOutsideOverrideVolume.hpp"
#include "AVolume.hpp"
#include "UFunction.hpp"
AInsideOutsideOverrideVolume* AInsideOutsideOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.InsideOutsideOverrideVolume");
    return (AInsideOutsideOverrideVolume*)res;
}
void AInsideOutsideOverrideVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.InsideOutsideOverrideVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
