#include "UConversationPreset_InitialTransform.hpp"
#include "UConversationPreset_InitialTransform_Preexisting.hpp"
UConversationPreset_InitialTransform_Preexisting* UConversationPreset_InitialTransform_Preexisting::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_InitialTransform_Preexisting");
    return (UConversationPreset_InitialTransform_Preexisting*)res;
}
