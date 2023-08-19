#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvatarPresetType : uint8_t {
    EYEBROWCOLOR = 0,
    EYEBROWSHAPE = 1,
    EYECOLOR = 2,
    FACEMARKING0 = 3,
    FACEMARKING1 = 4,
    FACEMARKING2 = 5,
    FACEMARKING3 = 6,
    MAKEUP_LIP = 7,
    MAKEUP_EYELINER = 8,
    MAKEUP_EYESHADOW = 9,
    MAKEUP_BLUSH = 10,
    HAIRCOLOR = 11,
    HAIRSTYLE = 12,
    HEADSTYLE = 13,
    SKINCOLOR = 14,
    EAvatarPresetType_MAX = 15,
};
#pragma pack(pop)
