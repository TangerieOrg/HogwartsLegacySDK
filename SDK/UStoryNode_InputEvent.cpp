#include "UStoryNode_InputEvent.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UStoryNode_InputEvent* UStoryNode_InputEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryNode_InputEvent");
    return (UStoryNode_InputEvent*)res;
}
