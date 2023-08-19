#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERichCurveKeyTimeCompressionFormat {
    RCKTCF_uint16 = 0,
    RCKTCF_float32 = 1,
    RCKTCF_MAX = 2,
};
#pragma pack(pop)
