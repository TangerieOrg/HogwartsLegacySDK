#pragma once
#include <cstdint>
namespace EEnvTestPathfinding {
#pragma pack(push, 1)
enum Type : uint8_t {
    PathExist = 0,
    PathCost = 1,
    PathLength = 2,
    EEnvTestPathfinding_MAX = 3,
};
#pragma pack(pop)
}
