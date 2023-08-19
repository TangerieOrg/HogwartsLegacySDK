#include "UConversationPreset_PreInitInvoke_Placement.hpp"
#include "UConversationPreset_PreInitInvoke_Placement_Preexisting.hpp"
UConversationPreset_PreInitInvoke_Placement_Preexisting* UConversationPreset_PreInitInvoke_Placement_Preexisting::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_PreInitInvoke_Placement_Preexisting");
    return (UConversationPreset_PreInitInvoke_Placement_Preexisting*)res;
}
