#include "FConversationEmotion.hpp"
#include "UConversationEmotions.hpp"
#include "UDataAsset.hpp"
UConversationEmotions* UConversationEmotions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationEmotions");
    return (UConversationEmotions*)res;
}
