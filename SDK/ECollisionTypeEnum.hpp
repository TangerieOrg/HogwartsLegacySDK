#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECollisionTypeEnum : uint8_t {
    Chaos_Volumetric = 0,
    Chaos_Surface_Volumetric = 1,
    Chaos_Max = 2,
};
#pragma pack(pop)
