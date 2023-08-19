#pragma once
#include <cstdint>
namespace EEnvQueryTestClamping {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    SpecifiedValue = 1,
    FilterThreshold = 2,
    EEnvQueryTestClamping_MAX = 3,
};
#pragma pack(pop)
}
