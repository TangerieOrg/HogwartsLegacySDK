#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFeedbackAnim : uint8_t {
    ANIM_PULSE = 0,
    ANIM_ROTATE_CL = 1,
    ANIM_ROTATE_CCL = 2,
    ANIM_BACK_AND_FORTH = 3,
    ANIM_NONE = 4,
    ANIM_MAX = 5,
};
#pragma pack(pop)
