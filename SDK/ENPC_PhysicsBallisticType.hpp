#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PhysicsBallisticType : uint8_t {
    Target = 0,
    JumpTarget = 1,
    NamedPoint = 2,
    MoveGoal = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
