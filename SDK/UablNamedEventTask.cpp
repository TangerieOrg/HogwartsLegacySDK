#include "UAblAbilityTask.hpp"
#include "UablNamedEventTask.hpp"
UablNamedEventTask* UablNamedEventTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNamedEventTask");
    return (UablNamedEventTask*)res;
}
