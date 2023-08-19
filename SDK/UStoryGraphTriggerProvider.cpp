#include "UBaseProvider.hpp"
#include "UStoryGraphTriggerProvider.hpp"
UStoryGraphTriggerProvider* UStoryGraphTriggerProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphTriggerProvider");
    return (UStoryGraphTriggerProvider*)res;
}
