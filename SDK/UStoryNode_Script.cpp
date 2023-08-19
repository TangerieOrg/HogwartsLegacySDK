#include "FSceneRigScriptContainer.hpp"
#include "UStoryNode_Script.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UStoryNode_Script* UStoryNode_Script::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryNode_Script");
    return (UStoryNode_Script*)res;
}
