#include "FConversationExplicitCameraShotReference.hpp"
#include "UNameProvider.hpp"
#include "UName_ConversationExplicitCameraShot.hpp"
UName_ConversationExplicitCameraShot* UName_ConversationExplicitCameraShot::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Name_ConversationExplicitCameraShot");
    return (UName_ConversationExplicitCameraShot*)res;
}
