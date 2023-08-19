#pragma once
#include <cstdint>
#include "FDirectionalLightParameters.hpp"
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FGlobalLightingDirectionalLightBlendState {
    FDirectionalLightParameters Parameters; // 0x0
    char pad_dc[0x4];
    FQuat Rotation; // 0xe0
}; // Size: 0xf0
#pragma pack(pop)
