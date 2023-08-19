#include "EAblNpcPopupDirection.hpp"
#include "EMovementMode.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcPopupTask.hpp"
UAblNpcPopupTask* UAblNpcPopupTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcPopupTask");
    return (UAblNpcPopupTask*)res;
}
