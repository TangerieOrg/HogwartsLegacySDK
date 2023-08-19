#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightRigModTransform {
    None = 0,
    Negate = 1,
    Abs = 2,
    OneMinus = 3,
    Saturate = 4,
    Square = 5,
    Normalize = 6,
    EGlobalLightRigModTransform_MAX = 7,
};
#pragma pack(pop)
