#include "ESexType.hpp"
#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_ByGender.hpp"
UStoryGraphCondition_ByGender* UStoryGraphCondition_ByGender::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryGraphCondition_ByGender");
    return (UStoryGraphCondition_ByGender*)res;
}
