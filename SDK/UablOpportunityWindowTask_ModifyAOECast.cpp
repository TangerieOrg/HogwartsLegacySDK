#include "EOpportunityType.hpp"
#include "UablOpportunityWindowTagTask.hpp"
#include "UablOpportunityWindowTask_ModifyAOECast.hpp"
UablOpportunityWindowTask_ModifyAOECast* UablOpportunityWindowTask_ModifyAOECast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablOpportunityWindowTask_ModifyAOECast");
    return (UablOpportunityWindowTask_ModifyAOECast*)res;
}
