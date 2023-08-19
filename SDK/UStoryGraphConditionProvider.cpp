#include "UBaseProvider.hpp"
#include "UStoryGraphConditionProvider.hpp"
UStoryGraphConditionProvider* UStoryGraphConditionProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphConditionProvider");
    return (UStoryGraphConditionProvider*)res;
}
