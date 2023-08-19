#include "AStoryGraphActor.hpp"
#include "UObject.hpp"
#include "UStoryNodeState_Custom.hpp"
#include "UStoryNode_Custom.hpp"
UStoryNodeState_Custom* UStoryNodeState_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryNodeState_Custom");
    return (UStoryNodeState_Custom*)res;
}
