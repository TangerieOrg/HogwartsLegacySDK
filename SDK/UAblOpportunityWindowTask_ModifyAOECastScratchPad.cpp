#include "UAblOpportunityWindowTagTaskScratchPad.hpp"
#include "UAblOpportunityWindowTask_ModifyAOECastScratchPad.hpp"
UAblOpportunityWindowTask_ModifyAOECastScratchPad* UAblOpportunityWindowTask_ModifyAOECastScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblOpportunityWindowTask_ModifyAOECastScratchPad");
    return (UAblOpportunityWindowTask_ModifyAOECastScratchPad*)res;
}
