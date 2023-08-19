#include "UConversationPreset_InitialTransform.hpp"
#include "UObject.hpp"
UConversationPreset_InitialTransform* UConversationPreset_InitialTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_InitialTransform");
    return (UConversationPreset_InitialTransform*)res;
}
