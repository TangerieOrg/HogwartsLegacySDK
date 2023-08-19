#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFXAutoTriggerZType : uint8_t {
    Visual = 0,
    Collision = 1,
    EFXAutoTriggerZType_MAX = 2,
};
#pragma pack(pop)
