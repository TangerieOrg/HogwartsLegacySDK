#include "UAblAbilityTaskScratchPad.hpp"
#include "UablBroomDismountBlendOutOffsetsScratchPad.hpp"
UablBroomDismountBlendOutOffsetsScratchPad* UablBroomDismountBlendOutOffsetsScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBroomDismountBlendOutOffsetsScratchPad");
    return (UablBroomDismountBlendOutOffsetsScratchPad*)res;
}
