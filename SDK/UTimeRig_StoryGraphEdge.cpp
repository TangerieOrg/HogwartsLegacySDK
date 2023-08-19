#include "ETimeRig_StoryGraphEdgeFeedbackType.hpp"
#include "ETimeRig_StoryGraphEdgeInitType.hpp"
#include "ETimeRig_StoryGraphEdgeTriggerType.hpp"
#include "FTimeRigEventReference.hpp"
#include "UObject.hpp"
#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#include "UTimeRig_StoryGraphEdge.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UTimeRig_StoryGraphEdge* UTimeRig_StoryGraphEdge::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRig_StoryGraphEdge");
    return (UTimeRig_StoryGraphEdge*)res;
}
