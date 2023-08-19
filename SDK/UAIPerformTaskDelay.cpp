#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskDelay.hpp"
#include "UFunction.hpp"
UAIPerformTaskDelay* UAIPerformTaskDelay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskDelay");
    return (UAIPerformTaskDelay*)res;
}
void UAIPerformTaskDelay::OnDelayFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskDelay.OnDelayFinished"));
    struct Params_OnDelayFinished {
    }; // Size: 0x0
    Params_OnDelayFinished params{};
    ProcessEvent(func, &params);
}
