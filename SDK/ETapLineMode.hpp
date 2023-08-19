#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETapLineMode : uint8_t {
    SendToChannel = 0,
    Panning = 1,
    Disabled = 2,
    ETapLineMode_MAX = 3,
};
#pragma pack(pop)
