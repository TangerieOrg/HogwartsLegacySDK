#include "UConversationPreset_DistanceProvider.hpp"
#include "UConversationPreset_DistanceProvider_Single.hpp"
UConversationPreset_DistanceProvider_Single* UConversationPreset_DistanceProvider_Single::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_DistanceProvider_Single");
    return (UConversationPreset_DistanceProvider_Single*)res;
}
