#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_ByStat.hpp"
UStoryGraphCondition_ByStat* UStoryGraphCondition_ByStat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryGraphCondition_ByStat");
    return (UStoryGraphCondition_ByStat*)res;
}
