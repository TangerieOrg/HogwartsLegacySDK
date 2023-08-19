#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvaReflectionCullType : int32_t {
    Everywhere = 0,
    Outside = 1,
    Inside = 2,
    EAvaReflectionCullType_MAX = 3,
};
#pragma pack(pop)
