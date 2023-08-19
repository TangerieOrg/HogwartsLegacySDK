#include "ETimecodeProviderSynchronizationState.hpp"
#include "FFrameRate.hpp"
#include "FQualifiedFrameTime.hpp"
#include "FTimecode.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimecodeProvider.hpp"
UTimecodeProvider* UTimecodeProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TimecodeProvider");
    return (UTimecodeProvider*)res;
}
void UTimecodeProvider::FetchAndUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.FetchAndUpdate"));
    struct Params_FetchAndUpdate {
    }; // Size: 0x0
    Params_FetchAndUpdate params{};
    ProcessEvent(func, &params);
}
bool UTimecodeProvider::FetchTimecode(FQualifiedFrameTime& OutFrameTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.FetchTimecode"));
    struct Params_FetchTimecode {
        FQualifiedFrameTime OutFrameTime; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_FetchTimecode params{};
    params.OutFrameTime = (FQualifiedFrameTime)OutFrameTime;
    ProcessEvent(func, &params);
    OutFrameTime = params.OutFrameTime;
    return (bool)params.ReturnValue;
}
FFrameRate UTimecodeProvider::GetFrameRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.GetFrameRate"));
    struct Params_GetFrameRate {
        FFrameRate ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFrameRate params{};
    ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
FTimecode UTimecodeProvider::GetTimecode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.GetTimecode"));
    struct Params_GetTimecode {
        FTimecode ReturnValue; // 0x0
    }; // Size: 0x14
    Params_GetTimecode params{};
    ProcessEvent(func, &params);
    return (FTimecode)params.ReturnValue;
}
ETimecodeProviderSynchronizationState UTimecodeProvider::GetSynchronizationState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.GetSynchronizationState"));
    struct Params_GetSynchronizationState {
        ETimecodeProviderSynchronizationState ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSynchronizationState params{};
    ProcessEvent(func, &params);
    return (ETimecodeProviderSynchronizationState)params.ReturnValue;
}
FQualifiedFrameTime UTimecodeProvider::GetDelayedQualifiedFrameTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.GetDelayedQualifiedFrameTime"));
    struct Params_GetDelayedQualifiedFrameTime {
        FQualifiedFrameTime ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDelayedQualifiedFrameTime params{};
    ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
FQualifiedFrameTime UTimecodeProvider::GetQualifiedFrameTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.GetQualifiedFrameTime"));
    struct Params_GetQualifiedFrameTime {
        FQualifiedFrameTime ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetQualifiedFrameTime params{};
    ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
FTimecode UTimecodeProvider::GetDelayedTimecode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimecodeProvider.GetDelayedTimecode"));
    struct Params_GetDelayedTimecode {
        FTimecode ReturnValue; // 0x0
    }; // Size: 0x14
    Params_GetDelayedTimecode params{};
    ProcessEvent(func, &params);
    return (FTimecode)params.ReturnValue;
}
