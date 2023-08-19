#include "UInterface.hpp"
#include "UStoryGraphPlayer.hpp"
UStoryGraphPlayer* UStoryGraphPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.StoryGraphPlayer");
    return (UStoryGraphPlayer*)res;
}
