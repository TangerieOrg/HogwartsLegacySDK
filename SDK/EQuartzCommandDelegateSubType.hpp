#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuartzCommandDelegateSubType {
    CommandOnFailedToQueue = 0,
    CommandOnQueued = 1,
    CommandOnCanceled = 2,
    CommandOnAboutToStart = 3,
    CommandOnStarted = 4,
    Count = 5,
    EQuartzCommandDelegateSubType_MAX = 6,
};
#pragma pack(pop)
