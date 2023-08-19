#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuartzDelegateType {
    MetronomeTick = 0,
    CommandEvent = 1,
    Count = 2,
    EQuartzDelegateType_MAX = 3,
};
#pragma pack(pop)
