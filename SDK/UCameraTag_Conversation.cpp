#include "UAnimationArchitectTagProvider.hpp"
#include "UCameraTag_Conversation.hpp"
UCameraTag_Conversation* UCameraTag_Conversation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraTag_Conversation");
    return (UCameraTag_Conversation*)res;
}
