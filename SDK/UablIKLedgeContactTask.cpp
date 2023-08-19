#include "UAblAbilityTask.hpp"
#include "UablIKLedgeContactTask.hpp"
UablIKLedgeContactTask* UablIKLedgeContactTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablIKLedgeContactTask");
    return (UablIKLedgeContactTask*)res;
}
