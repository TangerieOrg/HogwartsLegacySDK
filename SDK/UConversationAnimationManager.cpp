#include "UConversationAnimationManager.hpp"
#include "UInterface.hpp"
UConversationAnimationManager* UConversationAnimationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.ConversationAnimationManager");
    return (UConversationAnimationManager*)res;
}
