#include "EPerformTaskCombatMode.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskCombatMode.hpp"
#include "UFunction.hpp"
UAIPerformTaskCombatMode* UAIPerformTaskCombatMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskCombatMode");
    return (UAIPerformTaskCombatMode*)res;
}
void UAIPerformTaskCombatMode::FinishAfterDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskCombatMode.FinishAfterDuration"));
    struct Params_FinishAfterDuration {
    }; // Size: 0x0
    Params_FinishAfterDuration params{};
    ProcessEvent(func, &params);
}
