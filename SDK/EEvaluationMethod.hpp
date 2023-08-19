#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEvaluationMethod : uint8_t {
    Static = 0,
    Swept = 1,
    EEvaluationMethod_MAX = 2,
};
#pragma pack(pop)
