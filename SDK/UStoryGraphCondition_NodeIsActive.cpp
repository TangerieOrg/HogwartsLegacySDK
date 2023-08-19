#include "FStoryGraphConditionNodeReference.hpp"
#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_NodeIsActive.hpp"
UStoryGraphCondition_NodeIsActive* UStoryGraphCondition_NodeIsActive::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphCondition_NodeIsActive");
    return (UStoryGraphCondition_NodeIsActive*)res;
}
