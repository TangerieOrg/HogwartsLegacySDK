#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAttachCameraBillBoardType : uint8_t {
    ACBBT_ZX = 0,
    ACBBT_YX = 1,
    ACBBT_XZ = 2,
    ACBBT_XY = 3,
    ACBBT_X = 4,
    ACBBT_MAX = 5,
};
#pragma pack(pop)
