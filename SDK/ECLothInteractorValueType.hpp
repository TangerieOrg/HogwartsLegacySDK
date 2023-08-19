#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECLothInteractorValueType : uint8_t {
    DEFAULT = 0,
    SET = 1,
    SCALE = 2,
    OFFSET = 3,
    ECLothInteractorValueType_MAX = 4,
};
#pragma pack(pop)
