#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOffsetTypeEnum : uint8_t {
    OFFSETTYPE_SECONDS = 0,
    OFFSETTYPE_PERCENT = 1,
    OFFSETTYPE_FRAMES = 2,
    OFFSETTYPE_MAX = 3,
};
#pragma pack(pop)
