#include "UObject.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UTimeRig_StoryGraphNode* UTimeRig_StoryGraphNode::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRig_StoryGraphNode");
    return (UTimeRig_StoryGraphNode*)res;
}
