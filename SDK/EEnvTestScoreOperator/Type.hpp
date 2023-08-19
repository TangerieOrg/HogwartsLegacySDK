#pragma once
#include <cstdint>
namespace EEnvTestScoreOperator {
#pragma pack(push, 1)
enum Type : uint8_t {
    AverageScore = 0,
    MinScore = 1,
    MaxScore = 2,
    Multiply = 3,
    EEnvTestScoreOperator_MAX = 4,
};
#pragma pack(pop)
}
