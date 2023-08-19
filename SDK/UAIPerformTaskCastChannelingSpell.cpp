#include "EPerformTasksChannelingSpell.hpp"
#include "UAIPerformTaskCastChannelingSpell.hpp"
#include "UAIPerformTaskCastSpell.hpp"
#include "UFunction.hpp"
UAIPerformTaskCastChannelingSpell* UAIPerformTaskCastChannelingSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskCastChannelingSpell");
    return (UAIPerformTaskCastChannelingSpell*)res;
}
void UAIPerformTaskCastChannelingSpell::DisillusionmentFinished(uint8_t InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskCastChannelingSpell.DisillusionmentFinished"));
    struct Params_DisillusionmentFinished {
        uint8_t InAction; // 0x0
    }; // Size: 0x1
    Params_DisillusionmentFinished params{};
    params.InAction = (uint8_t)InAction;
    ProcessEvent(func, &params);
}
