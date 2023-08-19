#include "FDateTime.hpp"
#include "FTimespan.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeOverrideBase.hpp"
UTimeOverrideBase* UTimeOverrideBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideBase");
    return (UTimeOverrideBase*)res;
}
void UTimeOverrideBase::TimeOverrideSetDateTime(FDateTime DateTime, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideSetDateTime"));
    struct Params_TimeOverrideSetDateTime {
        FDateTime DateTime; // 0x0
        bool bSupported; // 0x8
    }; // Size: 0x9
    Params_TimeOverrideSetDateTime params{};
    params.DateTime = (FDateTime)DateTime;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideSetEnable(bool bEnable, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideSetEnable"));
    struct Params_TimeOverrideSetEnable {
        bool bEnable; // 0x0
        bool bSupported; // 0x1
    }; // Size: 0x2
    Params_TimeOverrideSetEnable params{};
    params.bEnable = (bool)bEnable;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideSetTime(FTimespan Time, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideSetTime"));
    struct Params_TimeOverrideSetTime {
        FTimespan Time; // 0x0
        bool bSupported; // 0x8
    }; // Size: 0x9
    Params_TimeOverrideSetTime params{};
    params.Time = (FTimespan)Time;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideSetNormalizedTime(float Time, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideSetNormalizedTime"));
    struct Params_TimeOverrideSetNormalizedTime {
        float Time; // 0x0
        bool bSupported; // 0x4
    }; // Size: 0x5
    Params_TimeOverrideSetNormalizedTime params{};
    params.Time = (float)Time;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideIsEnabled(bool& bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideIsEnabled"));
    struct Params_TimeOverrideIsEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideIsEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
    bEnabled = params.bEnabled;
}
void UTimeOverrideBase::TimeOverrideHasTime(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideHasTime"));
    struct Params_TimeOverrideHasTime {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideHasTime params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideHasNormalizedTime(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideHasNormalizedTime"));
    struct Params_TimeOverrideHasNormalizedTime {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideHasNormalizedTime params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideHasDateTime(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideHasDateTime"));
    struct Params_TimeOverrideHasDateTime {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideHasDateTime params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideGetTime(FTimespan& CurrentTime, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideGetTime"));
    struct Params_TimeOverrideGetTime {
        FTimespan CurrentTime; // 0x0
        bool bSupported; // 0x8
    }; // Size: 0x9
    Params_TimeOverrideGetTime params{};
    params.CurrentTime = (FTimespan)CurrentTime;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    CurrentTime = params.CurrentTime;
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideGetPriority(float& Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideGetPriority"));
    struct Params_TimeOverrideGetPriority {
        float Priority; // 0x0
    }; // Size: 0x4
    Params_TimeOverrideGetPriority params{};
    params.Priority = (float)Priority;
    ProcessEvent(func, &params);
    Priority = params.Priority;
}
void UTimeOverrideBase::TimeOverrideGetNormalizedTime(float& CurrentNormalizedTime, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideGetNormalizedTime"));
    struct Params_TimeOverrideGetNormalizedTime {
        float CurrentNormalizedTime; // 0x0
        bool bSupported; // 0x4
    }; // Size: 0x5
    Params_TimeOverrideGetNormalizedTime params{};
    params.CurrentNormalizedTime = (float)CurrentNormalizedTime;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
    CurrentNormalizedTime = params.CurrentNormalizedTime;
}
void UTimeOverrideBase::TimeOverrideCanSetEnable(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideCanSetEnable"));
    struct Params_TimeOverrideCanSetEnable {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideCanSetEnable params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideGetDateTime(FDateTime& CurrentDateTime, bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideGetDateTime"));
    struct Params_TimeOverrideGetDateTime {
        FDateTime CurrentDateTime; // 0x0
        bool bSupported; // 0x8
    }; // Size: 0x9
    Params_TimeOverrideGetDateTime params{};
    params.CurrentDateTime = (FDateTime)CurrentDateTime;
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    CurrentDateTime = params.CurrentDateTime;
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideCanSetTime(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideCanSetTime"));
    struct Params_TimeOverrideCanSetTime {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideCanSetTime params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideCanSetNormalizedTime(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideCanSetNormalizedTime"));
    struct Params_TimeOverrideCanSetNormalizedTime {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideCanSetNormalizedTime params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
void UTimeOverrideBase::TimeOverrideCanSetDateTime(bool& bSupported) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideBase.TimeOverrideCanSetDateTime"));
    struct Params_TimeOverrideCanSetDateTime {
        bool bSupported; // 0x0
    }; // Size: 0x1
    Params_TimeOverrideCanSetDateTime params{};
    params.bSupported = (bool)bSupported;
    ProcessEvent(func, &params);
    bSupported = params.bSupported;
}
