#include "UAblAbilityTask.hpp"
#include "UablLedgeAssistTask.hpp"
UablLedgeAssistTask* UablLedgeAssistTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablLedgeAssistTask");
    return (UablLedgeAssistTask*)res;
}
