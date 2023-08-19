#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAdditiveAnimationType : uint8_t {
    AAT_None = 0,
    AAT_LocalSpaceBase = 1,
    AAT_RotationOffsetMeshSpace = 2,
    AAT_MAX = 3,
};
#pragma pack(pop)
