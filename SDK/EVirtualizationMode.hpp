#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVirtualizationMode : uint8_t {
    Disabled = 0,
    PlayWhenSilent = 1,
    Restart = 2,
    EVirtualizationMode_MAX = 3,
};
#pragma pack(pop)
