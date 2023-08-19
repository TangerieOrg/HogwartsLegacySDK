#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETeleportType : uint8_t {
    None = 0,
    TeleportPhysics = 1,
    ResetPhysics = 2,
    ETeleportType_MAX = 3,
};
#pragma pack(pop)
