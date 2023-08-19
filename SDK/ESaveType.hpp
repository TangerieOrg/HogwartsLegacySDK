#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESaveType : uint8_t {
    NONE = 0,
    AUTO = 1,
    USER = 2,
    ALL = 3,
    ESaveType_MAX = 4,
};
#pragma pack(pop)
