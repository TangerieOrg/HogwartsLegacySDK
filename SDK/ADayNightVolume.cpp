#include "ADayNightVolume.hpp"
#include "AVolume.hpp"
#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "FTimeDateSourceStackVolume.hpp"
#include "UEphemerisBasis.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UFunction.hpp"
ADayNightVolume* ADayNightVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightVolume");
    return (ADayNightVolume*)res;
}
void ADayNightVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
