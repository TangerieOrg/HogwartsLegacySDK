#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInstancedTrailMemberRotationConstraint : uint8_t {
    ITMRC_NONE = 0,
    ITMRC_WHOLE = 1,
    ITMRC_HALF = 2,
    ITMRC_MAX = 3,
};
#pragma pack(pop)
