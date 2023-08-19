#include "FConversationPreset.hpp"
#include "UConversationPresets.hpp"
#include "UDataAsset.hpp"
UConversationPresets* UConversationPresets::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPresets");
    return (UConversationPresets*)res;
}
