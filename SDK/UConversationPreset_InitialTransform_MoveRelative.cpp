#include "UConversationPreset_InitialTransform.hpp"
#include "UConversationPreset_InitialTransform_MoveRelative.hpp"
UConversationPreset_InitialTransform_MoveRelative* UConversationPreset_InitialTransform_MoveRelative::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_InitialTransform_MoveRelative");
    return (UConversationPreset_InitialTransform_MoveRelative*)res;
}
