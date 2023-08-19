#include "UConversationPreset_AvatarPlacement.hpp"
#include "UObject.hpp"
UConversationPreset_AvatarPlacement* UConversationPreset_AvatarPlacement::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_AvatarPlacement");
    return (UConversationPreset_AvatarPlacement*)res;
}
