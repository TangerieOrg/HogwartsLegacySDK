#include "UStoryNodeState_Custom.hpp"
#include "UStoryNodeState_HermesMessage.hpp"
UStoryNodeState_HermesMessage* UStoryNodeState_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryNodeState_HermesMessage");
    return (UStoryNodeState_HermesMessage*)res;
}
