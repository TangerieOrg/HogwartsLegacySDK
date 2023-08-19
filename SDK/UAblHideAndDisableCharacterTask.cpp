#include "UAblAbilityTask.hpp"
#include "UAblHideAndDisableCharacterTask.hpp"
UAblHideAndDisableCharacterTask* UAblHideAndDisableCharacterTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblHideAndDisableCharacterTask");
    return (UAblHideAndDisableCharacterTask*)res;
}
