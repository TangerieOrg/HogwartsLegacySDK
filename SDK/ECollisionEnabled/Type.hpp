#pragma once
#include <cstdint>
namespace ECollisionEnabled {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoCollision = 0,
    QueryOnly = 1,
    PhysicsOnly = 2,
    QueryAndPhysics = 3,
    ECollisionEnabled_MAX = 4,
};
#pragma pack(pop)
}
