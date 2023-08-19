#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFactsheetButtonState : uint8_t {
    FS_NONE = 0,
    FS_UNKNOWN = 1,
    FS_QUERY = 2,
    FS_REDIRECT = 3,
    FS_KNOWN = 4,
    FS_MAX = 5,
};
#pragma pack(pop)
