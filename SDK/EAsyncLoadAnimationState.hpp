#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAsyncLoadAnimationState {
    NOT_REQUESTED = 0,
    REQUEST_IN_PROGRESS = 1,
    REQUEST_COMPLETED = 2,
    EAsyncLoadAnimationState_MAX = 3,
};
#pragma pack(pop)
