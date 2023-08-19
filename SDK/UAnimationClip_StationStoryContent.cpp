#include "EStationStoryContent_ClipType.hpp"
#include "FActionParameter_Object.hpp"
#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_StationStoryContent.hpp"
UAnimationClip_StationStoryContent* UAnimationClip_StationStoryContent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimationClip_StationStoryContent");
    return (UAnimationClip_StationStoryContent*)res;
}
