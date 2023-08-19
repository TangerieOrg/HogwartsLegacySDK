#include "ETagOperation.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UablOpportunityWindowTagTask.hpp"
UablOpportunityWindowTagTask* UablOpportunityWindowTagTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablOpportunityWindowTagTask");
    return (UablOpportunityWindowTagTask*)res;
}
