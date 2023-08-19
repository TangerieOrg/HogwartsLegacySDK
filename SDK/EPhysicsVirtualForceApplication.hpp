#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhysicsVirtualForceApplication : uint8_t {
    PartialBodyOnly = 0,
    FullBodyOnly = 1,
    Always = 2,
    Never = 3,
    EPhysicsVirtualForceApplication_MAX = 4,
};
#pragma pack(pop)
