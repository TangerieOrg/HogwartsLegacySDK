#include "EAblNpcReactPopupTaskType.hpp"
#include "UAblNpcPopupTask.hpp"
#include "UAblNpcReactPopupTask.hpp"
UAblNpcReactPopupTask* UAblNpcReactPopupTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactPopupTask");
    return (UAblNpcReactPopupTask*)res;
}
