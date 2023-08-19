#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerceptionPointEvaluateSource : uint8_t {
    None = 0,
    Enemy = 1,
    Target = 2,
    EPerceptionPointEvaluateSource_MAX = 3,
};
#pragma pack(pop)
