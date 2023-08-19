#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_FireContext : uint8_t {
    None = 0,
    Charred = 1,
    OnFire = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
