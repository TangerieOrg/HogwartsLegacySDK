#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcPopupDirection : uint8_t {
    Forward = 0,
    Backward = 1,
    Left = 2,
    Right = 3,
    EAblNpcPopupDirection_MAX = 4,
};
#pragma pack(pop)
