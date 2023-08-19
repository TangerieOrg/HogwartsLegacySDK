#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESectionEvaluationFlags : uint8_t {
    None = 0,
    PreRoll = 1,
    PostRoll = 2,
    ESectionEvaluationFlags_MAX = 3,
};
#pragma pack(pop)
