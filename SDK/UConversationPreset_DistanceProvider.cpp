#include "EConversationPreset_ProximityType.hpp"
#include "UConversationPreset_DistanceProvider.hpp"
#include "UObject.hpp"
UConversationPreset_DistanceProvider* UConversationPreset_DistanceProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_DistanceProvider");
    return (UConversationPreset_DistanceProvider*)res;
}
