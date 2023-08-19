#include "EStoryGraphBranchIcon.hpp"
#include "FStoryGraphConditionBranchReference.hpp"
#include "UBoolProvider.hpp"
#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_Branch.hpp"
#include "UStringProvider.hpp"
UStoryGraphCondition_Branch* UStoryGraphCondition_Branch::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphCondition_Branch");
    return (UStoryGraphCondition_Branch*)res;
}
