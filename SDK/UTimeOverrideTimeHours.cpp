#include "ETimeOverrideType.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeOverrideTimeHours.hpp"
#include "UTimeOverrideTimeOnly.hpp"
UTimeOverrideTimeHours* UTimeOverrideTimeHours::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideTimeHours");
    return (UTimeOverrideTimeHours*)res;
}
void UTimeOverrideTimeHours::TimeOverrideTimeHoursCreate(UObject* Owner, UTimeOverrideTimeHours*& TimeOverride, float CreateTime, ETimeOverrideType CreateType, float CreatePriority, bool bCreateEnabled, bool bIsTransient) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideTimeHours.TimeOverrideTimeHoursCreate"));
    struct Params_TimeOverrideTimeHoursCreate {
        UObject* Owner; // 0x0
        UTimeOverrideTimeHours* TimeOverride; // 0x8
        float CreateTime; // 0x10
        ETimeOverrideType CreateType; // 0x14
        char pad_15[0x3];
        float CreatePriority; // 0x18
        bool bCreateEnabled; // 0x1c
        bool bIsTransient; // 0x1d
    }; // Size: 0x1e
    Params_TimeOverrideTimeHoursCreate params{};
    params.Owner = (UObject*)Owner;
    params.TimeOverride = (UTimeOverrideTimeHours*)TimeOverride;
    params.CreateTime = (float)CreateTime;
    params.CreateType = (ETimeOverrideType)CreateType;
    params.CreatePriority = (float)CreatePriority;
    params.bCreateEnabled = (bool)bCreateEnabled;
    params.bIsTransient = (bool)bIsTransient;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TimeOverride = params.TimeOverride;
}
