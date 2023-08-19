#include "UFunction.hpp"
#include "UWindAffectedComponent.hpp"
#include "UWindAffectedComponentRefresh.hpp"
void UWindAffectedComponentRefresh::SetWindRefreshRate(float NewWindRefreshRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindAffectedComponentRefresh.SetWindRefreshRate"));
    struct Params_SetWindRefreshRate {
        float NewWindRefreshRate; // 0x0
    }; // Size: 0x4
    Params_SetWindRefreshRate params{};
    params.NewWindRefreshRate = (float)NewWindRefreshRate;
    ProcessEvent(func, &params);
}
UWindAffectedComponentRefresh* UWindAffectedComponentRefresh::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindAffectedComponentRefresh");
    return (UWindAffectedComponentRefresh*)res;
}
void UWindAffectedComponentRefresh::WindUpdatesPaused(bool& bPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindAffectedComponentRefresh.WindUpdatesPaused"));
    struct Params_WindUpdatesPaused {
        bool bPaused; // 0x0
    }; // Size: 0x1
    Params_WindUpdatesPaused params{};
    params.bPaused = (bool)bPaused;
    ProcessEvent(func, &params);
    bPaused = params.bPaused;
}
void UWindAffectedComponentRefresh::PauseWindUpdates(bool bPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindAffectedComponentRefresh.PauseWindUpdates"));
    struct Params_PauseWindUpdates {
        bool bPause; // 0x0
    }; // Size: 0x1
    Params_PauseWindUpdates params{};
    params.bPause = (bool)bPause;
    ProcessEvent(func, &params);
}
