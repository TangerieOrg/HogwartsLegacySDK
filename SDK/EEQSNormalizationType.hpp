#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEQSNormalizationType : uint8_t {
    Absolute = 0,
    RelativeToScores = 1,
    EEQSNormalizationType_MAX = 2,
};
#pragma pack(pop)
