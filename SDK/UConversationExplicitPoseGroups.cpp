#include "FConversationExplicitPoseGroup.hpp"
#include "UConversationExplicitPoseGroups.hpp"
#include "UDataAsset.hpp"
UConversationExplicitPoseGroups* UConversationExplicitPoseGroups::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationExplicitPoseGroups");
    return (UConversationExplicitPoseGroups*)res;
}
