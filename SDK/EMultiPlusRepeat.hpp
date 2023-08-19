#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiPlusRepeat : uint8_t {
    Standard = 0,
    Restart = 1,
    Ignore = 2,
    EMultiPlusRepeat_MAX = 3,
};
#pragma pack(pop)
