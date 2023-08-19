#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SceneRigStoryState {
    STORY_NEW = 0,
    STORY_QUEUED = 1,
    STORY_MARKED_FOR_TRANSITION = 2,
    STORY_TRANSITIONING_OUT = 3,
    STORY_ACTIVE = 4,
    STORY_READY_TO_TRANSITION = 5,
    STORY_ENDED = 6,
    STORY_DELETE = 7,
    STORY_STATE_COUNT = 8,
    STORY_MAX = 9,
};
#pragma pack(pop)
