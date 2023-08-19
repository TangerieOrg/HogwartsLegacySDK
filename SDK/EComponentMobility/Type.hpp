#pragma once
#include <cstdint>
namespace EComponentMobility {
#pragma pack(push, 1)
enum Type : uint8_t {
    Static = 0,
    Stationary = 1,
    Movable = 2,
    EComponentMobility_MAX = 3,
};
#pragma pack(pop)
}
