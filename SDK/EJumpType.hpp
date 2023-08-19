#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EJumpType {
    StrafeJump = 0,
    ShortJump = 1,
    LongJump = 2,
    SprintJump = 3,
    EJumpType_MAX = 4,
};
#pragma pack(pop)
