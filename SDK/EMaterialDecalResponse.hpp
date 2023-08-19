#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialDecalResponse : uint8_t {
    MDR_None = 0,
    MDR_ColorNormalRoughness = 1,
    MDR_Color = 2,
    MDR_ColorNormal = 3,
    MDR_ColorRoughness = 4,
    MDR_Normal = 5,
    MDR_NormalRoughness = 6,
    MDR_Roughness = 7,
    MDR_MAX = 8,
};
#pragma pack(pop)
