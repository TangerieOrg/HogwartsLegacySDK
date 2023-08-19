#include "FTimeRigEventReference.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#include "UStoryGraphTrigger_Event.hpp"
UStoryGraphTrigger_Event* UStoryGraphTrigger_Event::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphTrigger_Event");
    return (UStoryGraphTrigger_Event*)res;
}
