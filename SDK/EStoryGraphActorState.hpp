#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStoryGraphActorState {
    StoryNotStarted = 0,
    StoryReadyToStart = 1,
    StoryPlaying = 2,
    StoryFinished = 3,
    EStoryGraphActorState_MAX = 4,
};
#pragma pack(pop)
