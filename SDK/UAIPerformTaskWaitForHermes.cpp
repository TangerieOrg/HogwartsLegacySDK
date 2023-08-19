#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskWaitForHermes.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAIPerformTaskWaitForHermes* UAIPerformTaskWaitForHermes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskWaitForHermes");
    return (UAIPerformTaskWaitForHermes*)res;
}
void UAIPerformTaskWaitForHermes::OnHermesMessageExecuted(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskWaitForHermes.OnHermesMessageExecuted"));
    struct Params_OnHermesMessageExecuted {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_OnHermesMessageExecuted params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
