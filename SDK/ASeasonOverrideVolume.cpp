#include "ASeasonOverrideVolume.hpp"
#include "AVolume.hpp"
#include "UFunction.hpp"
ASeasonOverrideVolume* ASeasonOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.SeasonOverrideVolume");
    return (ASeasonOverrideVolume*)res;
}
void ASeasonOverrideVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.SeasonOverrideVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
