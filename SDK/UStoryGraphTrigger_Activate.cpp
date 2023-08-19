#include "EStoryGraphTriggerActive_InitializeType.hpp"
#include "EStoryGraphTrigger_ActivateType.hpp"
#include "ETimeRig_StoryGraphEdgeFeedbackType.hpp"
#include "FTimeRigEventReference.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#include "UStoryGraphTrigger_Activate.hpp"
UStoryGraphTrigger_Activate* UStoryGraphTrigger_Activate::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphTrigger_Activate");
    return (UStoryGraphTrigger_Activate*)res;
}
