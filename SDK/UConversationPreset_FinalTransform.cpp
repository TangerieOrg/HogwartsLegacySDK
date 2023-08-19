#include "UConversationPreset_FinalTransform.hpp"
#include "UObject.hpp"
UConversationPreset_FinalTransform* UConversationPreset_FinalTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_FinalTransform");
    return (UConversationPreset_FinalTransform*)res;
}
