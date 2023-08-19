#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_NOT.hpp"
UStoryGraphCondition_NOT* UStoryGraphCondition_NOT::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphCondition_NOT");
    return (UStoryGraphCondition_NOT*)res;
}
