#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStreamingBehaviorTactic : uint8_t {
    Balanced = 0,
    PrioritizeUnloads = 1,
    PrioritizeLoads = 2,
    EStreamingBehaviorTactic_MAX = 3,
};
#pragma pack(pop)
