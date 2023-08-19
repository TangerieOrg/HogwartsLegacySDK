#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblOpportunityWindowTagTaskScratchPad.hpp"
UAblOpportunityWindowTagTaskScratchPad* UAblOpportunityWindowTagTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblOpportunityWindowTagTaskScratchPad");
    return (UAblOpportunityWindowTagTaskScratchPad*)res;
}
