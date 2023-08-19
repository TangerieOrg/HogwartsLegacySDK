#include "EEnemyAIAction.hpp"
#include "EEnemyAIActionDoneReason.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskRotateTo.hpp"
#include "UFunction.hpp"
UAIPerformTaskRotateTo* UAIPerformTaskRotateTo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskRotateTo");
    return (UAIPerformTaskRotateTo*)res;
}
void UAIPerformTaskRotateTo::RotateToComplete(EEnemyAIAction InAction, EEnemyAIActionDoneReason InReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskRotateTo.RotateToComplete"));
    struct Params_RotateToComplete {
        EEnemyAIAction InAction; // 0x0
        EEnemyAIActionDoneReason InReason; // 0x1
    }; // Size: 0x2
    Params_RotateToComplete params{};
    params.InAction = (EEnemyAIAction)InAction;
    params.InReason = (EEnemyAIActionDoneReason)InReason;
    ProcessEvent(func, &params);
}
