#pragma once
#include <cstdint>
namespace ESimulationOverlap {
#pragma pack(push, 1)
enum Type {
    CollisionOverlap = 0,
    ShadeOverlap = 1,
    None = 2,
    ESimulationOverlap_MAX = 3,
};
#pragma pack(pop)
}
