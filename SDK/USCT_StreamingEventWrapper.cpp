#include "ASCT_LevelController.hpp"
#include "UFunction.hpp"
#include "ULevelStreaming.hpp"
#include "UObject.hpp"
#include "USCT_StreamingEventWrapper.hpp"
void USCT_StreamingEventWrapper::OnLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelLoaded"));
    struct Params_OnLevelLoaded {
    }; // Size: 0x0
    Params_OnLevelLoaded params{};
    ProcessEvent(func, &params);
}
USCT_StreamingEventWrapper* USCT_StreamingEventWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.SCT_StreamingEventWrapper");
    return (USCT_StreamingEventWrapper*)res;
}
void USCT_StreamingEventWrapper::OnLevelUnloaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelUnloaded"));
    struct Params_OnLevelUnloaded {
    }; // Size: 0x0
    Params_OnLevelUnloaded params{};
    ProcessEvent(func, &params);
}
void USCT_StreamingEventWrapper::OnLevelShown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelShown"));
    struct Params_OnLevelShown {
    }; // Size: 0x0
    Params_OnLevelShown params{};
    ProcessEvent(func, &params);
}
void USCT_StreamingEventWrapper::OnLevelHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StreamingComplexityToolRuntime.SCT_StreamingEventWrapper.OnLevelHidden"));
    struct Params_OnLevelHidden {
    }; // Size: 0x0
    Params_OnLevelHidden params{};
    ProcessEvent(func, &params);
}
