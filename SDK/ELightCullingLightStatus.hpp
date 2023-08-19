#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightCullingLightStatus : uint8_t {
    Unmanaged = 0,
    Ignored = 1,
    Managed = 2,
    ELightCullingLightStatus_MAX = 3,
};
#pragma pack(pop)
