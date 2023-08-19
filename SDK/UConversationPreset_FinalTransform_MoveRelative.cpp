#include "UConversationPreset_FinalTransform.hpp"
#include "UConversationPreset_FinalTransform_MoveRelative.hpp"
UConversationPreset_FinalTransform_MoveRelative* UConversationPreset_FinalTransform_MoveRelative::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_FinalTransform_MoveRelative");
    return (UConversationPreset_FinalTransform_MoveRelative*)res;
}
