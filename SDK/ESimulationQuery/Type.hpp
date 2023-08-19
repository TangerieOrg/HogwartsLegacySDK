#pragma once
#include <cstdint>
namespace ESimulationQuery {
#pragma pack(push, 1)
enum Type {
    None = 0,
    CollisionOverlap = 1,
    ShadeOverlap = 2,
    AnyOverlap = 3,
    ESimulationQuery_MAX = 4,
};
#pragma pack(pop)
}
