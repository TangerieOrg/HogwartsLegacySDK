#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESignificanceBiasEnum : uint8_t {
    SIGNIFICANCE_BIAS_LOW = 0,
    SIGNIFICANCE_BIAS_DEFAULT = 1,
    SIGNIFICANCE_BIAS_HIGH = 2,
    SIGNIFICANCE_BIAS_CRITICAL = 3,
    SIGNIFICANCE_BIAS_MAX = 4,
};
#pragma pack(pop)
