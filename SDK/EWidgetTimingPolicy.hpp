#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetTimingPolicy : uint8_t {
    RealTime = 0,
    GameTime = 1,
    EWidgetTimingPolicy_MAX = 2,
};
#pragma pack(pop)
