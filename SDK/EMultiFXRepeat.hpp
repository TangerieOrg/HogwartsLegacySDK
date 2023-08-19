#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXRepeat : uint8_t {
    Restart = 0,
    Ignore = 1,
    RestartInstigator = 2,
    IgnoreInstigator = 3,
    EMultiFXRepeat_MAX = 4,
};
#pragma pack(pop)
