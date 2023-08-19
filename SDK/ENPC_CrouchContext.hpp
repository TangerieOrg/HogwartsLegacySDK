#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_CrouchContext : uint8_t {
    InCrouchVolume = 0,
    OnCrouchNavArea = 1,
    CompanionCrouch = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
