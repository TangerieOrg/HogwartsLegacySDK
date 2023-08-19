#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_ConversationResult.hpp"
UStoryGraphCondition_ConversationResult* UStoryGraphCondition_ConversationResult::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryGraphCondition_ConversationResult");
    return (UStoryGraphCondition_ConversationResult*)res;
}
