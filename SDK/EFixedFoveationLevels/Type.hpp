#pragma once
#include <cstdint>
namespace EFixedFoveationLevels {
#pragma pack(push, 1)
enum Type : uint8_t {
    Disabled = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    EFixedFoveationLevels_MAX = 4,
};
#pragma pack(pop)
}
