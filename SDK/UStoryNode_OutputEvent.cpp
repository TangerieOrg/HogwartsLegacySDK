#include "UStoryNode_OutputEvent.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UStoryNode_OutputEvent* UStoryNode_OutputEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryNode_OutputEvent");
    return (UStoryNode_OutputEvent*)res;
}
