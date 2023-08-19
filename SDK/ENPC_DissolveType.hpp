#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_DissolveType {
    Dissolve_None = 0,
    Dissolve_Normal = 1,
    Dissovle_HighDamage = 2,
    Dissovle_Impact = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
