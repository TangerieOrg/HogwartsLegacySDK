#include "UConversationPreset_InitialTransform_MoveRelative.hpp"
#include "UConversationPreset_InitialTransform_MoveRelative_Preexisting.hpp"
UConversationPreset_InitialTransform_MoveRelative_Preexisting* UConversationPreset_InitialTransform_MoveRelative_Preexisting::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_InitialTransform_MoveRelative_Preexisting");
    return (UConversationPreset_InitialTransform_MoveRelative_Preexisting*)res;
}
