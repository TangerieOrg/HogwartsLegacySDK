#include "UAblAbilityTask.hpp"
#include "UAblJumpTask.hpp"
UAblJumpTask* UAblJumpTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblJumpTask");
    return (UAblJumpTask*)res;
}
