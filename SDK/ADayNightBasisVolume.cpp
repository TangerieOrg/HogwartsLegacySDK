#include "ADayNightBasisVolume.hpp"
#include "AVolume.hpp"
#include "UEphemerisBasis.hpp"
#include "UFunction.hpp"
void ADayNightBasisVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightBasisVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
ADayNightBasisVolume* ADayNightBasisVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightBasisVolume");
    return (ADayNightBasisVolume*)res;
}
