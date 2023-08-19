#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "FTimeDateSourceStackVolume.hpp"
#include "UDayNightOverrideComponent.hpp"
#include "UEphemerisBasis.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UDayNightOverrideComponent* UDayNightOverrideComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightOverrideComponent");
    return (UDayNightOverrideComponent*)res;
}
void UDayNightOverrideComponent::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightOverrideComponent.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
