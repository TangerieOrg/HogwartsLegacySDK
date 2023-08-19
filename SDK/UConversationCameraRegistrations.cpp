#include "FConversationCameraRegistration.hpp"
#include "UConversationCameraRegistrations.hpp"
#include "UDataAsset.hpp"
UConversationCameraRegistrations* UConversationCameraRegistrations::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationCameraRegistrations");
    return (UConversationCameraRegistrations*)res;
}
