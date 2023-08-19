#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlRigRotationOrder : uint8_t {
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
    EControlRigRotationOrder_MAX = 6,
};
#pragma pack(pop)
