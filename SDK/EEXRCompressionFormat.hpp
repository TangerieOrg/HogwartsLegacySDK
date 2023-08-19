#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEXRCompressionFormat : uint8_t {
    None = 0,
    PIZ = 1,
    ZIP = 2,
    EEXRCompressionFormat_MAX = 3,
};
#pragma pack(pop)
