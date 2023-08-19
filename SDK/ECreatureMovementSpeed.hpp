#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureMovementSpeed : uint8_t {
    Stop = 0,
    Walk = 1,
    Jog = 2,
    Sprint = 3,
    Num = 4,
    ECreatureMovementSpeed_MAX = 5,
};
#pragma pack(pop)
