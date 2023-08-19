#pragma once
#include <cstdint>
namespace EPhysicsTransformUpdateMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    SimulationUpatesComponentTransform = 0,
    ComponentTransformIsKinematic = 1,
    EPhysicsTransformUpdateMode_MAX = 2,
};
#pragma pack(pop)
}
