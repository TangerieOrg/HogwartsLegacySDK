#include "FConversationExplicitLayeredAnimationCategory.hpp"
#include "UConversationExplicitLayeredAnimations.hpp"
#include "UDataAsset.hpp"
UConversationExplicitLayeredAnimations* UConversationExplicitLayeredAnimations::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationExplicitLayeredAnimations");
    return (UConversationExplicitLayeredAnimations*)res;
}
