#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_OR.hpp"
UStoryGraphCondition_OR* UStoryGraphCondition_OR::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphCondition_OR");
    return (UStoryGraphCondition_OR*)res;
}
