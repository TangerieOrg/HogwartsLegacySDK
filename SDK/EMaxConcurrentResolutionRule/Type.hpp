#pragma once
#include <cstdint>
namespace EMaxConcurrentResolutionRule {
#pragma pack(push, 1)
enum Type : uint8_t {
    PreventNew = 0,
    StopOldest = 1,
    StopFarthestThenPreventNew = 2,
    StopFarthestThenOldest = 3,
    StopLowestPriority = 4,
    StopQuietest = 5,
    StopLowestPriorityThenPreventNew = 6,
    Count = 7,
    EMaxConcurrentResolutionRule_MAX = 8,
};
#pragma pack(pop)
}
