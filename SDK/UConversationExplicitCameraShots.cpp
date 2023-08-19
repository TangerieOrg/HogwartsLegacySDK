#include "FConversationExplicitCameraShot.hpp"
#include "UConversationExplicitCameraShots.hpp"
#include "UDataAsset.hpp"
UConversationExplicitCameraShots* UConversationExplicitCameraShots::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationExplicitCameraShots");
    return (UConversationExplicitCameraShots*)res;
}
