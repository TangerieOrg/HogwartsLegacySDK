#pragma once
#include <cstdint>
namespace EEnvTestFilterType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Minimum = 0,
    Maximum = 1,
    Range = 2,
    Match = 3,
    EEnvTestFilterType_MAX = 4,
};
#pragma pack(pop)
}
