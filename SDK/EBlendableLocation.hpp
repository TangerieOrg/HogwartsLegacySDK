#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBlendableLocation : uint8_t {
    BL_AfterTonemapping = 0,
    BL_BeforeTonemapping = 1,
    BL_BeforeTranslucency = 2,
    BL_ReplacingTonemapper = 3,
    BL_SSRInput = 4,
    BL_MAX = 5,
};
#pragma pack(pop)
