#include "UConversationCameraManager.hpp"
#include "UInterface.hpp"
UConversationCameraManager* UConversationCameraManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.ConversationCameraManager");
    return (UConversationCameraManager*)res;
}
