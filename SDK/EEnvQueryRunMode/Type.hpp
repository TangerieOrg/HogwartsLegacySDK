#pragma once
#include <cstdint>
namespace EEnvQueryRunMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    SingleResult = 0,
    RandomBest5Pct = 1,
    RandomBest25Pct = 2,
    AllMatching = 3,
    EEnvQueryRunMode_MAX = 4,
};
#pragma pack(pop)
}
