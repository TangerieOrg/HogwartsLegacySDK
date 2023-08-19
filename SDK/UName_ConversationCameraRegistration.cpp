#include "FConversationCameraRegistrationReference.hpp"
#include "UNameProvider.hpp"
#include "UName_ConversationCameraRegistration.hpp"
UName_ConversationCameraRegistration* UName_ConversationCameraRegistration::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Name_ConversationCameraRegistration");
    return (UName_ConversationCameraRegistration*)res;
}
