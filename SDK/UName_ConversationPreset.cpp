#include "FConversationPresetReference.hpp"
#include "UNameProvider.hpp"
#include "UName_ConversationPreset.hpp"
UName_ConversationPreset* UName_ConversationPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Name_ConversationPreset");
    return (UName_ConversationPreset*)res;
}
