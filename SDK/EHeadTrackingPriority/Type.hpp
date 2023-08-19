#pragma once
#include <cstdint>
namespace EHeadTrackingPriority {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowestPriority = 1,
    UpperBodyAlert = 2,
    FullBodyUsage = 3,
    FullBodySpecialUsage = 4,
    UpperBodyUsage = 5,
    UpperBodySpecialUsage = 6,
    Cinematic = 7,
    HighestPriority = 8,
    EHeadTrackingPriority_MAX = 9,
};
#pragma pack(pop)
}
