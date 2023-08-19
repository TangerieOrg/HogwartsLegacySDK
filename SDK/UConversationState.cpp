#include "AConversationActor.hpp"
#include "AStoryGraphActor.hpp"
#include "UConversationState.hpp"
#include "UObject.hpp"
#include "UStoryGraph_Conversation.hpp"
UConversationState* UConversationState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConversationState");
    return (UConversationState*)res;
}
