#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENonlinearOperationType : int8_t {
    Bend = 0,
    Flare = 1,
    Twist = 2,
    ENonlinearOperationType_MAX = 3,
};
#pragma pack(pop)
