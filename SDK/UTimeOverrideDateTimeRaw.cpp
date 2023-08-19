#include "FDateTime.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeOverrideDateTime.hpp"
#include "UTimeOverrideDateTimeRaw.hpp"
UTimeOverrideDateTimeRaw* UTimeOverrideDateTimeRaw::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideDateTimeRaw");
    return (UTimeOverrideDateTimeRaw*)res;
}
void UTimeOverrideDateTimeRaw::TimeOverrideDateTimeCreate(UObject* Owner, UTimeOverrideDateTimeRaw*& TimeOverride, FDateTime CreateDateTime, float CreatePriority, bool bCreateEnabled, bool bIsTransient) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideDateTimeRaw.TimeOverrideDateTimeCreate"));
    struct Params_TimeOverrideDateTimeCreate {
        UObject* Owner; // 0x0
        UTimeOverrideDateTimeRaw* TimeOverride; // 0x8
        FDateTime CreateDateTime; // 0x10
        float CreatePriority; // 0x18
        bool bCreateEnabled; // 0x1c
        bool bIsTransient; // 0x1d
    }; // Size: 0x1e
    Params_TimeOverrideDateTimeCreate params{};
    params.Owner = (UObject*)Owner;
    params.TimeOverride = (UTimeOverrideDateTimeRaw*)TimeOverride;
    params.CreateDateTime = (FDateTime)CreateDateTime;
    params.CreatePriority = (float)CreatePriority;
    params.bCreateEnabled = (bool)bCreateEnabled;
    params.bIsTransient = (bool)bIsTransient;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TimeOverride = params.TimeOverride;
}
