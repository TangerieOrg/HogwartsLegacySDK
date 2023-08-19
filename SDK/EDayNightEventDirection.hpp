#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightEventDirection : uint8_t {
    Rising = 0,
    Setting = 1,
    EDayNightEventDirection_MAX = 2,
};
#pragma pack(pop)
