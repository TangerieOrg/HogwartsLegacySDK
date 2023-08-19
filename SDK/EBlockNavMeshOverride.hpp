#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlockNavMeshOverride : uint8_t {
    AllowOverride = 0,
    UseValueAsIs = 1,
    EBlockNavMeshOverride_MAX = 2,
};
#pragma pack(pop)
