#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SocialHeritageStatusIDs : uint8_t {
    SOCIAL_HERITAGE_STATUS_HALFBLOOD = 0,
    SOCIAL_HERITAGE_STATUS_MUGGLEBORN = 1,
    SOCIAL_HERITAGE_STATUS_PUREBLOOD = 2,
    SOCIAL_HERITAGE_STATUS_SQUIB = 3,
    SOCIAL_HERITAGE_STATUS_COUNT = 4,
    SOCIAL_HERITAGE_STATUS_MAX = 5,
};
#pragma pack(pop)
