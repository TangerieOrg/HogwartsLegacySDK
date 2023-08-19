#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetAnimationEvent : uint8_t {
    Started = 0,
    Finished = 1,
    EWidgetAnimationEvent_MAX = 2,
};
#pragma pack(pop)
