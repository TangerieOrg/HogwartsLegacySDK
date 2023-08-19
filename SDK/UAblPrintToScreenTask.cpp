#include "UAblAbilityTask.hpp"
#include "UAblPrintToScreenTask.hpp"
UAblPrintToScreenTask* UAblPrintToScreenTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPrintToScreenTask");
    return (UAblPrintToScreenTask*)res;
}
