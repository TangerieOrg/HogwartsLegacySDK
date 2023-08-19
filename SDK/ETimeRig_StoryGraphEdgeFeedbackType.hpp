#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRig_StoryGraphEdgeFeedbackType : uint8_t {
    NoFeedback = 0,
    FeedbackStopOnTargetStart = 1,
    FeedbackEventOnTargetStart = 2,
    ETimeRig_MAX = 3,
};
#pragma pack(pop)
