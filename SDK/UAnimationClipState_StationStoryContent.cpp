#include "UAnimationClipState_StationStoryContent.hpp"
#include "UObject.hpp"
UAnimationClipState_StationStoryContent* UAnimationClipState_StationStoryContent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimationClipState_StationStoryContent");
    return (UAnimationClipState_StationStoryContent*)res;
}
