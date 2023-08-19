#include "UStoryGraphConditionProvider.hpp"
#include "UStoryGraphCondition_XOR.hpp"
UStoryGraphCondition_XOR* UStoryGraphCondition_XOR::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphCondition_XOR");
    return (UStoryGraphCondition_XOR*)res;
}
