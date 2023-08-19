#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStoryEavesdropState {
    EAV_STATE_NONE = 0,
    EAV_STATE_NOT_STARTED = 1,
    EAV_STATE_PLAYING = 2,
    EAV_STATE_FINISHED = 3,
    EAV_STATE_COUNT = 4,
    EAV_STATE_MAX = 5,
};
#pragma pack(pop)
