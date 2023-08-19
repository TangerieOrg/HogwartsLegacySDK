#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStencilManagerPreferredEffect : uint8_t {
    LocalDepthFX = 0,
    SkinFX = 1,
    EStencilManagerPreferredEffect_MAX = 2,
};
#pragma pack(pop)
