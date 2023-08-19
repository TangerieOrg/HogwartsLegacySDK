#include "EConversationPreset_ProximityType.hpp"
#include "UConversationPreset_AvatarPlacement.hpp"
#include "UConversationPreset_AvatarPlacement_RelativeInteractionActor.hpp"
#include "UConversationPreset_CheckBetweenTest.hpp"
#include "UConversationPreset_DistanceProvider.hpp"
#include "UConversationPreset_RelativeInteractionActorTest.hpp"
UConversationPreset_AvatarPlacement_RelativeInteractionActor* UConversationPreset_AvatarPlacement_RelativeInteractionActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_AvatarPlacement_RelativeInteractionActor");
    return (UConversationPreset_AvatarPlacement_RelativeInteractionActor*)res;
}
