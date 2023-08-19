#include "UStoryNode_Custom.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UStoryNode_Custom* UStoryNode_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryNode_Custom");
    return (UStoryNode_Custom*)res;
}
