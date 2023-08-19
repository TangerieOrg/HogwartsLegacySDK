#include "EConversationTransformType.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_Conversation.hpp"
UTransform_Conversation* UTransform_Conversation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_Conversation");
    return (UTransform_Conversation*)res;
}
