#include "UConversationPreset_FinalTransform_MoveRelative.hpp"
#include "UConversationPreset_FinalTransform_MoveRelative_Preexisting.hpp"
UConversationPreset_FinalTransform_MoveRelative_Preexisting* UConversationPreset_FinalTransform_MoveRelative_Preexisting::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_FinalTransform_MoveRelative_Preexisting");
    return (UConversationPreset_FinalTransform_MoveRelative_Preexisting*)res;
}
