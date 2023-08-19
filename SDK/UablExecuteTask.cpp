#include "UAblAbilityTask.hpp"
#include "UExecuteTask.hpp"
#include "UablExecuteTask.hpp"
UablExecuteTask* UablExecuteTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablExecuteTask");
    return (UablExecuteTask*)res;
}
