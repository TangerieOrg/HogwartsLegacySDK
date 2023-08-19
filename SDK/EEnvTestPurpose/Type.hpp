#pragma once
#include <cstdint>
namespace EEnvTestPurpose {
#pragma pack(push, 1)
enum Type : uint8_t {
    Filter = 0,
    Score = 1,
    FilterAndScore = 2,
    EEnvTestPurpose_MAX = 3,
};
#pragma pack(pop)
}
