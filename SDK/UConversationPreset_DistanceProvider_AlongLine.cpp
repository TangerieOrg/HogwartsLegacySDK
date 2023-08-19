#include "UConversationPreset_DistanceProvider.hpp"
#include "UConversationPreset_DistanceProvider_AlongLine.hpp"
UConversationPreset_DistanceProvider_AlongLine* UConversationPreset_DistanceProvider_AlongLine::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_DistanceProvider_AlongLine");
    return (UConversationPreset_DistanceProvider_AlongLine*)res;
}
