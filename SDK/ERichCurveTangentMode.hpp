#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERichCurveTangentMode : uint8_t {
    RCTM_Auto = 0,
    RCTM_User = 1,
    RCTM_Break = 2,
    RCTM_None = 3,
    RCTM_MAX = 4,
};
#pragma pack(pop)
