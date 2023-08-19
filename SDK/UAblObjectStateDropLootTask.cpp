#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblObjectStateDropLootTask.hpp"
UAblObjectStateDropLootTask* UAblObjectStateDropLootTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblObjectStateDropLootTask");
    return (UAblObjectStateDropLootTask*)res;
}
