#include "UStoryNode_Custom.hpp"
#include "UStoryNode_HermesMessage.hpp"
UStoryNode_HermesMessage* UStoryNode_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryNode_HermesMessage");
    return (UStoryNode_HermesMessage*)res;
}
