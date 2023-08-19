#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOppugnoState {
    Inactive = 0,
    Wait = 1,
    Pull = 2,
    Hold = 3,
    ThrowWait = 4,
    Throw = 5,
    EndWait = 6,
    End = 7,
    EOppugnoState_MAX = 8,
};
#pragma pack(pop)
