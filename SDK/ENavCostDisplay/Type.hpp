#pragma once
#include <cstdint>
namespace ENavCostDisplay {
#pragma pack(push, 1)
enum Type : uint8_t {
    TotalCost = 0,
    HeuristicOnly = 1,
    RealCostOnly = 2,
    ENavCostDisplay_MAX = 3,
};
#pragma pack(pop)
}
