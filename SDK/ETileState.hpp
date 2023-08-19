#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETileState : uint8_t {
    None = 0,
    Near = 1,
    Mid = 2,
    Far = 3,
    ETileState_MAX = 4,
};
#pragma pack(pop)
