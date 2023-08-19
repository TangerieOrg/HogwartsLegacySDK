#pragma once
#include <cstdint>
namespace EMPMatchOutcome {
#pragma pack(push, 1)
enum Outcome : uint8_t {
    None = 0,
    Quit = 1,
    Won = 2,
    Lost = 3,
    Tied = 4,
    TimeExpired = 5,
    First = 6,
    Second = 7,
    Third = 8,
    Fourth = 9,
    EMPMatchOutcome_MAX = 10,
};
#pragma pack(pop)
}
