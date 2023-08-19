#include "EConversationPreset_ProximityType.hpp"
#include "UConversationPreset_AvatarPlacement.hpp"
#include "UConversationPreset_AvatarPlacement_Preexisting.hpp"
UConversationPreset_AvatarPlacement_Preexisting* UConversationPreset_AvatarPlacement_Preexisting::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_AvatarPlacement_Preexisting");
    return (UConversationPreset_AvatarPlacement_Preexisting*)res;
}
