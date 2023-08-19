#pragma once
#include <cstdint>
namespace EEnvTestScoreEquation {
#pragma pack(push, 1)
enum Type : uint8_t {
    Linear = 0,
    Square = 1,
    InverseLinear = 2,
    SquareRoot = 3,
    Constant = 4,
    EEnvTestScoreEquation_MAX = 5,
};
#pragma pack(pop)
}
