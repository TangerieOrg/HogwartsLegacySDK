#include "EStoryGraphTrigger_InitializeType.hpp"
#include "ETimeRig_StoryGraphEdgeFeedbackType.hpp"
#include "FTimeRigEventReference.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#include "UStoryGraphTrigger_Initialize.hpp"
UStoryGraphTrigger_Initialize* UStoryGraphTrigger_Initialize::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphTrigger_Initialize");
    return (UStoryGraphTrigger_Initialize*)res;
}
