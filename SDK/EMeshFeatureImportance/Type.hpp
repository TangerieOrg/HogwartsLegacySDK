#pragma once
#include <cstdint>
namespace EMeshFeatureImportance {
#pragma pack(push, 1)
enum Type : uint8_t {
    Off = 0,
    Lowest = 1,
    Low = 2,
    Normal = 3,
    High = 4,
    Highest = 5,
    EMeshFeatureImportance_MAX = 6,
};
#pragma pack(pop)
}
