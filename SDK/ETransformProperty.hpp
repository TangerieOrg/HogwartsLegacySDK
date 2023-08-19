#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformProperty : uint8_t {
    TP_Translation = 0,
    TP_Scale = 1,
    TP_Shear = 2,
    TP_Angle = 3,
    TP_MAX = 4,
};
#pragma pack(pop)
