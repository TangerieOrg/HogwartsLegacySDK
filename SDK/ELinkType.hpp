#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELinkType : uint8_t {
    JUMP_LINK = 0,
    LADDER_LINK = 1,
    CLIMB_LINK = 2,
    SLIDE_LINK = 3,
    VAULT_LINK = 4,
    SPLINE_LINK = 5,
    ELinkType_MAX = 6,
};
#pragma pack(pop)
