#include "UConversationPreset_FinalTransform_MoveRelative.hpp"
#include "UConversationPreset_FinalTransform_MoveRelative_Initial.hpp"
UConversationPreset_FinalTransform_MoveRelative_Initial* UConversationPreset_FinalTransform_MoveRelative_Initial::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_FinalTransform_MoveRelative_Initial");
    return (UConversationPreset_FinalTransform_MoveRelative_Initial*)res;
}
