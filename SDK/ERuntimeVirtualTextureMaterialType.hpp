#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERuntimeVirtualTextureMaterialType : uint8_t {
    BaseColor = 0,
    BaseColor_Normal_DEPRECATED = 1,
    BaseColor_Normal_Specular = 2,
    BaseColor_Normal_Specular_YCoCg = 3,
    BaseColor_Normal_Specular_Mask_YCoCg = 4,
    WorldHeight = 5,
    Count = 6,
    ERuntimeVirtualTextureMaterialType_MAX = 7,
};
#pragma pack(pop)
