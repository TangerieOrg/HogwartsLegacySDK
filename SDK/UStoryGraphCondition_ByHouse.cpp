#include "EStoryGraphCondition_PlayerHouse.hpp"
#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_ByHouse.hpp"
UStoryGraphCondition_ByHouse* UStoryGraphCondition_ByHouse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryGraphCondition_ByHouse");
    return (UStoryGraphCondition_ByHouse*)res;
}
