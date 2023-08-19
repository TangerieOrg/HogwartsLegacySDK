#include "UConversationPreset_PreInitInvoke_Placement.hpp"
#include "UObject.hpp"
UConversationPreset_PreInitInvoke_Placement* UConversationPreset_PreInitInvoke_Placement::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_PreInitInvoke_Placement");
    return (UConversationPreset_PreInitInvoke_Placement*)res;
}
